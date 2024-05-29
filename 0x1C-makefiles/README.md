# C - Makefiles

- What is a makefile and how does it work.  
`Makefile` - is a special file use by `make` utility to automate build process of a project.  
- It defines a set of tasks to be executed.  
- These files can be anything but they are typically used to compile and link a program

## Purpose
1. Automate repetitive tasks
2. manage dependances
3. Ensure that all neccessary parts of a project are rebuilt

## How Makefiles work.
### Basic concept of dependances.
- Dependencies in a Makefile specify relationships between files. If a file (target) depends on other files (dependencies), it will be rebuilt whenever those dependencies change.

```makefile
main.o: main.c defs.h
    gcc -c main.c
```
