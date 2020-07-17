#include <stdio.h>
#include <cs50.h>

void cough(int n);

int main(void)
{
    int n = get_int("How many times do you cough at one time?\n");
    cough(n);
}

void cough(int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("cough\n");
    }
}
