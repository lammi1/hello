#include <stdio.h>

int main(void)
{
    char *s = "EMMA";
    printf("%c\n", *s);
    printf("%c\n", *(s+1));
    printf("%c\n", *(s+2));
    printf("%c\n", *(s+3));    
}

아까는 인덱스로 표현했지만 결국은 그 아래에서는 이러한 산수로 이루어져있다는 것을 알려준다.

pointer arithmetic 이라고 한다.
