#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x1;
    int x2;
    int x3;
    int x4;
    int a;
    int b;

    printf("Digite o numero: ");
    scanf("%d",&a);

    for (x1 = 0; x1<=a;x1++)
    for (x2 = x1+1; x2<=a;x2++)
    for (x3 = x2+1; x3<=a;x3++)
    for (x4 = x3+1; x4<=a;x4++)

        if(x1 + x2 + x3 + x4 == a)
    {
        printf("%d + %d + %d + %d = %d\n",x1,x2,x3,x4,a);
        b++;
    }
        printf("as possibilidades sao de %d resultados.",b);

}
