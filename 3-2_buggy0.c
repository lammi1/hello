int main(void)
{
    printf("Hello, world!\n");
}

on terminal window

make buggy0
error .....

help50 make buggy0
Asking for help...
buggy0.c:3:5: error: implicitly declaring library function 'printf' with type
Did you forget to # include <stdio.h> (in which printf is declared) atop your file?
