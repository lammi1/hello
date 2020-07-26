#include <stdio.h>
#include <cs50.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("missing command-line argument\n");
        return 1; // equivelent to exit
        // if all was well, you would return 0, it means good, don't have problem.
        // However, if something went wrong, return 1, to keep it simple. you could return 2 billion or something
    }
    printf("Hello, %s\n", argv[1]);
    return 0;
}
