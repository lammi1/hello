#include <stdio.h>

int main(void)
{
    int n = 50;
    printf("%p\n", &n);
}


& menas what's the address
& = "the address of"
&는 메모리상의 주소가 어디인지 물어보는 것

이 때, 주소를 표현하려면 형식지정자 %p를 써야 한다.
p는 pointer를 말한다.
%p를 쓰면 주소를 출력해준다.

결과로는 
0x7fff2d2116dc
가 나온다.

포인터는 컴퓨터 메모리의 주소를 가리킨다.
printf에게 포인터 변수 즉 무언가의 주소를 출력해달라고 하는 것입니다.
