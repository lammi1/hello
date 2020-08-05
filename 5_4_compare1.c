#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string s = get_string("s: ");
    string t = get_string("t: ");

    printf("%p\n", s);
    printf("%p\n", t);
}

그래서 정확히 보자면 둘의 값이 다르다라는 것이다.
같은 emma를 넣어도.

s: emma
t: emma
0x61f670
0x61f6b0
