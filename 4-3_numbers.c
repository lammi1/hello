#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int numbers[6] = {4, 8, 12, 14, 25, 48};

    for (int i = 0; i < 6; i++)
    {
        if (numbers[i] == 50)
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not Found\n");
    return 1;
}
