#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a;
    int b;
    int c;
    printf("Digite o primeiro numero: ");
    scanf("%d",&a);

    printf("Digite o segundo numero: ");
    scanf("%d",&b);

    while(a>=0 && b>= 0)
    {
        c = pow(a,b);
        printf("O resultado de B sobre A = %d\n\n",c);

        printf("Digite o primeiro numero: ");
        scanf("%d",&a);

        printf("Digite o segundo numero: ");
        scanf("%d",&b);
    }
}
