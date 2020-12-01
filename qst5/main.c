#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int l;
    int c;
    int a;

    printf("digite quantas linhas seram computadas: ");
    scanf("%d",&n);

    for (l=0; l<n; l++)
    {
        for (c=1; c < n ; c++)
        {
          a = c + l;
          printf("[%d] ",a);

        }
        printf("\n");
    }
    printf("\n\n\n");




}
