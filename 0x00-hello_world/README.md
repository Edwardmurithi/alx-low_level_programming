gcc -E $CFILE -o c - Write a script that runs a C file through the preprocessor and save the result into another file.
- The C file name will be saved in the variable $CFILE
- The output should be saved in the file c

gcc -S -masm=intel $CFILE - Write a script that generates the assembly code (Intel syntax) of a C code and save it in an output file.
- The C file name will be saved in the variable $CFILE.
- The output file should be named the same as the C file, but with the extension .s instead of .c
- Example: if the C file is main.c, the output file should be main.s


gcc $CFILE -o cisfun - Write a script that compiles a C file and creates an executable named cisfun.
- The C file name will be saved in the variable $CFILE

gcc -S $CFILE - Write a script that generates the assembly code of a C code and save it in an output file.
- The C file name will be saved in the variable $CFILE
- The output file should be named the same as the C file, but with the extension .s instead of .c.
- Example: if the C file is main.c, the output file should be main.s

gcc -c $CFILE - Write a script that compiles a C file but does not link.
- The C file name will be saved in the variable $CFILE
- The output file should be named the same as the C file, but with the extension .o instead of .c
- Example: if the C file is main.c, the output file should be main.o

