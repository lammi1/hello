#include <stdio.h>
#include <unistd.h>

int main(void)
{
    for(int i = 1; ; i *= 2) //overflow: runtime error: signed integer overflow: 1073741824 * 2 cannot be represented in type 'int'
    {
        printf("%i\n", i);
        sleep(1);
    }
}
//  realtime example: Y2K, Boing 787
