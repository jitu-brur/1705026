#include<stdio.h>
#include<math.h>
#define e 0.000001
#define f(x) 5*x*x*x - 3*x*x +2*x + 3
int main()
{
    double x0,x1,x2,f0,f1,f2;
    int i=0;
    printf("Enter the value of x0 and x1\n");
    scanf("%lf %lf",&x0,&x1);
    do
    {
       f0=f(x0);
       f1=f(x1);
       x2=x0-f0*(x1-x0)/(f1-f0);
       f2=f(x2);
       f0=f1;
       f1=f2;
       x0=x1;
       x1=x2;
       i++;
       printf("No. of Iteration = %d\t",i);
       printf("Root = %f",x2);
       printf("\t   Value of function = %f\n",f2);
    } while(fabs(f2)>e);

    return 0;
}
