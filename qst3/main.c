#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 0;
    int b = 0;
    int c = 1;
    int d = 0;
    int e = 0;

    printf("Digite o valor de n: ");
    scanf("%d", &a);

    for(b = 0; b <= a; b++)
    {
        d = c + c;
        printf("%d + %d = %d\n",c,c,d);
        c++;
        e = e + d;

    }
        printf("\na somatoria de I eh = %d",e);


}
