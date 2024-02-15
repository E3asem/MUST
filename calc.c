

#include <stdio.h>

#include <stdlib.h>

int calc_v=10;


float divv(float x,float y)
{
    x=30;
calc_v=20;
float d=x/y;

return d;


}

void mul(int x,int y)
{
    int m=x*y;

    printf("\nmul=%d",m);
}

int sub(void)
{
    calc_v=30;
    int x,y,s;
    printf("please enter 2 number: ");
    scanf("%d%d",&x,&y);
    s=x-y;

//printf("\nsum=%d\n",s);
    return s;
}
void sum(void)
{
    int x,y,s;
    printf("BEFORE X=%d y=%d s=%d\nplease eneter 2 number: ",x,y,s);
    scanf("%d%d",&x,&y);

    s=x+y;

    printf("\nsum=%d\n",s);
}



