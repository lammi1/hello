#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string answer = get_string("이름이 무엇입니까?\n");
    printf("안녕하세요, %s씨\n", answer);
}
