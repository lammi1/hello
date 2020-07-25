#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    string s = get_string("Before: ");
    for (int i = 0, n = strlen(s); i < n; i++)
    {
        s[i] = toupper(s[i]);
    }
    printf("After: %s\n", s);
    //cs강의에서는 저장하지 않고 바로 printf로 내보냄
    return 0;
}
