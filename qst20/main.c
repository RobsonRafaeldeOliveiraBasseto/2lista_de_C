#include <stdio.h>
#include <stdlib.h>

int main()
{
    float dis=0, temp=0, a_dis =0, a_temp =0;

    scanf("%f %f",&dis,&temp);

    while(dis != -1 && temp != -1)
    {

    scanf("%f %f",&dis,&temp);
    a_dis += dis;
    a_temp += temp;

    if(dis == 0 && temp == 0)
        printf("%2.f km/h",(a_dis/1000) / (a_temp/3600));
    }

}
