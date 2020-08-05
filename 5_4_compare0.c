#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string s = get_string("s: ");
    string t = get_string("t: ");

    if (s==t)
    {
        printf("Same\n");
    }
    else
    {
        printf("Different\n");
    }
}

이렇게 쓰면 내가 s와 t에 똑같은 값을 입력하더라도 
값은 항상 different로 나온다.
왜냐하면 결국 s와 t가 저장하는 값은 배열의 첫번째 주소이다.
이때 s와 t에서의 배열이 저장되는 주소는 각각 다르기 때문에
사용자가 입력한 값이 같더라도 주소는 다르므로 different라는 값이 나오게 되는 것이다.
