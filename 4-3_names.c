#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string names[4] = {"EMMA", "RODRIGO", "BRIAN", "DAVID"};

    for (int i = 0; i < 4; i++)
    {
        if (strcmp(names[i], "EMMA") == 0) // strcmp는 둘의 값이 같으면 값이 0으로 나온다. 만약 앞에 string의 alphabetical 순서로 앞에 있으면 양수, 뒤에 있으면 음수로 표현된다.
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not Found\n");
}


선형검색의 예시이다.
linear search

이 코드에서는 strcmp <string.h>를 알려준다.
