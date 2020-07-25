#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string s = get_string("Input : ");
    printf("Output : ");
    for (int i = 0, n = strlen(s); i < n; i++) //string0.c에서는 계속해서 string의 길이를 물어봐야 한다. 그러면 시간이 오래 걸리므로 처음 한번만 값을 받도록 만드는게 더 좋은 함수다. well design code.
    {
        printf("%c", s[i]);
    }
    printf("\n");
    return 0;
}
