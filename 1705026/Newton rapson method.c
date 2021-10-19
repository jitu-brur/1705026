#include<stdio.h>
#include<math.h>
#define e 0.000001
#define f(x) x*x*x - 4*x + 1
#define df(x) 3*x*x - 4
int main()
{
    double x0,x1,f0,f1,df0;
    int i=0;
    printf("Enter the value of x0\n");
    scanf("%lf",&x0);
    do
    {
       f0=f(x0);
       df0=df(x0);
       x1=x0-(f0/df0);
       f1=f(x1);
       x0=x1;
       i++;
       printf("No. of Iteration = %d\t",i);
       printf("Root = %f",x1);
       printf("\t   Value of function = %f\n",f1);
    } while(fabs(f1)>e);

    return 0;
}
