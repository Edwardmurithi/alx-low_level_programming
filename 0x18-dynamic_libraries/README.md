## 0x18-dynamic_libraries

## Task One

## File Name: libdynamic.so, main.h
* Create the dynamic library libdynamic.so containing all the functions
* The function prototypes are provided in main.h file
* Commands used:
	* creating object code from *.c files
		- gcc -c *.c -fpic
	* creating a dynamic library
		- gcc *.o -shared -o libdynamic.so

## Task Two

## File Name: 1-create_dynamic_lib.sh
* Create a script that creates a dynamic library called liball.so from all the .c files that are in the current directory.

## Task Three

## File Name: 100-operations.so
* Create a dynamic library that contains C functions that can be called from Python.
* Commands Used:
	* gcc -c add.c sub.c div.c mod.c mul.c -fpic
	* gcc add.o sub.o div.o mod.o mul.o -shared -o 100-operations.so

## Task Four

