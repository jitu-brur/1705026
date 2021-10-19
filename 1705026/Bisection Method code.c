/*program to finds a root of a nonlinear equation  using the bisection method*/


#include<stdio.h>
#include<math.h>

double F( double x) //Function definition
{
    //This return the value of the Function
    return (pow(x,2) + x -2);
}

int main()
{

    printf("This program illustrates the bisection method in C:\n\n");
    printf(" x^2 + x - 2 = 0\n\n");
    double x0,x1;

    printf("\nEnter the first approximation to the root :  ");
    scanf("%lf",&x0);

    printf("\n\nEnter the second approximation to the root :   ");
    scanf("%lf",&x1);

    int it;
    printf("\n\nEnter the number of iteration you want to perform :   ");
    scanf("%d",&it);

    int c=1;
    double p=x0;
    double q=x1;
    double m,f1,f2,f3;

    //We check if the initial approximations are the root or not
    if(F(p)==0)// it is a root
        m=p;
    else if(F(q)==0)
        m=q;
    else //If the above two values are not the roots of the given function
    {
        while(c<=it) //Since, c is initialized to 1
        {
            //This is an implementation of the algorithm mentioned above
            f1=F(p);
            m=(p+q)/2.0; //Returns a double value
            f2=F(m);
            f3=F(q);

            if(f2==0)
            {
                m=f2;
                break; //Execution moves out of the while loop to the statement just after it
            }
            printf("The root after %d iteration is %lf \n\n",c,m);

            if(f1*f2<0)//Both are of opposite sign
                q=m;
            else if(f2*f3<0)
                p=m;
            c++;
        }
    }

    printf("\n\n\nThe approximation to the root is %lf\n",m); //Gives the final value after mentioned iteration
    printf("\n\n\t\t\tCoding is Fun !\n\n\n");
    return 0;
}
