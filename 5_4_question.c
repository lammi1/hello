#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string s = "EMMA";
    string t = "EMMA";

    if (s==t)
    {
        printf("Same\n");
    }
    else
    {
        printf("Different\n");
    }

    printf("%p\n", s);
    printf("%p\n", t);
}


밑에 질문에 왜 내가 직접 "EMMA"를 둘다 지정할 때는 비교했을 때 same이 나오냐는 말에 궁금해서 코드를 짜봤더니
같은 값을 지정하면 같은 주소를 s와 t에 넣어준다.
컴파일을 할때 입력되어 있는 값이 같은 경우 -> 컴파일러가 같은 주소값을 넣어줌
컴파일 이후 사용자가 값을 입력해야 하는 경우 -> 컴파일러는 어떤 값을 넣어주기 모르기 때문에 공간을 따로 생성

그래서 결과는
Same
0x4006e4
0x4006e4
이렇게 나온다.
