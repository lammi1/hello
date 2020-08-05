#include <cs50.h>
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char *s = get_string("s: ");

    char *t= s;
    t[0] = toupper(t[0]);
    printf("%s\n", s);
    printf("%s\n", t);
}

여기서는 문자열의 복사를 배울 것이다.
내가 t에다 s를 복사하고 싶어서 t = s라고 쓰면 다른 자료형에서는 복사가 되지만 char *에서는 복사가 아니라 s에 있는 주소를 복사하는 것이므로 
결국에 문자열의 첫문자에 대한 주소가 복사되는 것이다. s와 t가 가리키는 문자가 literally 같다는 것이다.
그러므로 내가 t에서 첫번째 문자를 수정을 하면 결국 s를 프린트 했을 때 s에서도 바뀐 문자가 보이게 된다는 것이다.
결국 문자열의 복사는 다른 방식으로 이루어져야 한다.
