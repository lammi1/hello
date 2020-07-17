#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int x, y = 0;
    x = get_int("choose number between 1 ~ 10\n");
    y = 5;
    if (x < y)
    {
        printf("x is less than y.\n");
    }
    else if (x > y)
    {
        printf("x is greater than y.\n");
    }
    else
    {
        printf("x is equal to y.\n");
    }
}
