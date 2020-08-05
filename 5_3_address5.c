#include <stdio.h>

int main(void)
{
    char *s = "EMMA";
    printf("%s\n", s);
    printf("%p\n", &s);
    printf("%p\n", s);
    printf("%p\n", &s[0]);
    printf("%p\n", &s[1]);
    printf("%p\n", &s[2]);
    printf("%p\n", &s[3]);
}


여기서 printf("%p\n", &s); 는 내가 궁금해서 넣은 건데 저기서의 값은 다르게 나온다.
그 이유는 s는 "EMMA"가 저장된 첫 단어를 저장한다고 했지만 그 값을 저장한 다른 주소가 나온다.

이 때의 결과는 
EMMA
0x7ffc99c276d8
0x400724
0x400724
0x400725
0x400726
0x400727
이렇게 나온다.
