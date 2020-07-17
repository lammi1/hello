#include <stdio.h>
#include <cs50.h>

int main(void)
{
    char c = get_char("Do you agree?\n");
    while (c != 'y' && c != 'Y' && c != 'n' && c != 'N')
    {
        c = get_char("Press y or n to answer the question.\nDo you agree?\n");
    }
    if (c == 'y' || c == 'Y')
    {
        printf("Agreed.\n");
    }
    else if (c =='n' || c == 'N')
    {
        printf("Not agreed.\n");
    }
}
