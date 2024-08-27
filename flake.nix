{
  description = "C++ environment";

  inputs = {
    nixpkgs.url = "github:nixos/nixpkgs/nixpkgs-unstable";
    flake-utils.url = github:numtide/flake-utils;
  };

  outputs = { self, nixpkgs, flake-utils, ... }:
    flake-utils.lib.eachDefaultSystem (system:
      let
        pkgs = nixpkgs.legacyPackages.${system};
      in {
        devShells.default = pkgs.mkShell {
          packages = [
            # C/C++ development
            pkgs.gcc
            pkgs.gnumake
            pkgs.gdb
            pkgs.valgrind
          ];

          shellHook = ''
            echo "Welcome to your C++ development environment."
          '';
        };
      }
    );
}