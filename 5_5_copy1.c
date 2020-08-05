#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    char *s = get_string("s: ");

    char *t = malloc(strlen(s) + 1);

    for(int i = 0, n = strlen(s); i < n + 1; i++)
    {
        t[i] = s[i];
    }

    t[0] = toupper(t[0]);
    printf("%s\n", s);
    printf("%s\n", t);
}


여기서는 malloc함수에 대해서 배운다. 이 함수는 stdlib.h에 정의되어 있다.
malloc함수는 메모리 할당 함수이다. (memory allocate)
여기서 필요한 것은 할당받을 메모리의 크기이다.
여기서 4가 아닌 5가 필요한 이유는 널 종단 문자 때문이다.

그리고 for loop에서도 따로 n을 지정해서 반복할 때마다 strlen이 실행되지 않도록 해준 후,
t에 s의 값을 복사하면 된다.
그러면 s는 그대로 나타나고 t는 대문자로 나타나게 된다.
