*This project has been created as part of the 42 curriculum by dzzayats.*

# libft - My own C library

## Description

This project is a custom reimplementation of a subset of the standard C library in the form of a reusable static library named libft. The goal is to strengthen low-level C programming skills by writing core functions for memory handling, string manipulation, character classification, conversions, and basic file output from scratch.

The library is intended to be used in future 42 projects and other C programs that need reliable, minimal, and well-understood implementations of common utility functions.

## Instructions

To compile the library, run:

```sh
make
```

This creates the static archive libft.a.

Useful commands:

```sh
make clean    # remove object files
make fclean   # remove object files and the library
make re       # recompile from scratch
```

Example usage:

```sh
cc main.c -I. -L. -lft
```

## Resources

Useful references for this project include:

- The C standard library documentation and man pages.
- 42 project subject materials and related tutorials on memory and string handling in C.
- Articles and notes about linked lists, dynamic memory allocation, and file descriptor I/O.

AI assistance was used to help structure this README, review the overall implementation strategy, and clarify some C concepts during development. It was mainly used for documentation support and code explanation, not as a replacement for the core implementation.
