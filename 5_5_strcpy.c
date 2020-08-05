#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    char *s = get_string("s: ");

    char *t = malloc(strlen(s) + 1);

    strcpy(t,s);

    t[0] = toupper(t[0]);
    printf("%s\n", s);
    printf("%s\n", t);
}

문자열 복사는 자주 하는 작업이기 때문에 직접 loop를 짤 필요는 없고,
strcpy함수를 쓰면 된다.
you can copy into t the content of s.
t에 s의 내용을 복사할 수 있다.
strcpy(t, s);
