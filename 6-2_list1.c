#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *list = malloc(3 * sizeof(int));
    if (list == NULL)
    {
        return 1;
    }

    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    int *tmp = malloc(4 * sizeof(int));
    if (tmp == NULL)
    {
        return 1;
    }

    // Copy integers from old array into new array
    for(int i = 0; i < 3; i++)
    {
        tmp[i] = list[i];
    }

    tmp[3] = 4;

    free(list);

    list = tmp;

    for (int i = 0; i < 4; i++)
    {
        printf("%i\n", list[i]);
    }


}


메모리를 다시 할당하고 전에 있던 값을 복사해서 옮긴다.
malloc 함수를 이용해서
