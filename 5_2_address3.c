#include <stdio.h>

int main(void)
{
    int n = 50;
    int *p = &n;
    printf("%p\n", p);
}

아까랑 다를 바 없이
이번에는 pointer를 밖에다가 정의하는 법을 배울 것이다.
int p = &n;
여기서 n의 주소를 저장하는 자료형은 따로 있다. 무언가를 붙여줘야한다.
int *p 이렇게 *을 붙여주는 것이다. 이것은 pointer를 의미한다.
pointer는 무언가의 주소를 저장하는 것이다.
여기서는 정수 n의 주소를 저장한다.

printf으로 p를 프린트 하면
0x7ffeccf5ae8c가 나온다. 이 주소는 보안상의 문제로 메모리를 여기저기로 바꾼다. 그래서 아까랑 달라지는 것이다.
