#include <stdio.h>

int main(void)
{
    int n = 50;
    printf("%i\n", *&n);
}


다시 50을 나타내려면
&앞에 *를 붙여주면 된다.

연산자의 효과를 뒤집을 수 있다.
&n 은 n의 주소를 달라는 것이다.
C언어에는 반대의 역할을 하는 것이 있다.
*는 그 주소로 가달라는 의미이다.

주소를 돌려받고 다시 그 주소로 가서 50을 출력하는 것이다.
