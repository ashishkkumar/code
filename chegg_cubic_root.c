#include<stdio.h>
#define EPSILON 0.0001

double func(double a, double b, double c, double d, double x)
{
    return a*x*x*x + b*x*x + c*x + d;
}

void bisection(double a, double b,double c, double d, double x, double y)
{
    if(func(a,  b,  c,  d,  x)*func(a,  b,  c,  d,  y) >=0)
    {
        
    }
    double q=x;
    while((y-x)>=EPSILON)
    {
        //printf("loop2");
        q=(x+y)/2;
        if(func(a,  b,  c,  d,  q) == 0.0)
        break;
        else if(func(a,  b,  c,  d,  q) *func(a,  b,  c,  d,  x) <0)
            y=q;
        else x=q;
    }
    printf("the value of root is : %lf", q);
}

int main()
{
    printf("********************************************************\n");
    printf("Welcome to the cubic root estimator.\n");
    printf("This estimates the value of one root of\n");
    printf("f(x)=ax^3+bx^2+cx+d.\n")
    printf("********************************************************\n");
    
    char ch;
    double a,b,c,d,x,y;
    do{
        printf("Enter the coefficient in the form  \"a b c d":);
    scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
    
    x=0;
    y=0;
    int v1, v2;
    if(func(a,  b,  c,  d,  x) == 0)
    {
        printf("There is a root at: x = %lf",x);
        break;
    }
    else if(func(a,  b,  c,  d,  x) > 0)
    {
        v1=1;
    }
    else v1=0;
    if(func(a,  b,  c,  d,  y) > 0)
    {
        v2=1;
    }
    else v2=0;
    int i=1;
    while( v1 == v2 && i> -10)
    {
        //printf("%d %d %d \n", v1,v2,i);
        y=i;
        if(v2==0)
        {
            if(func(a,  b,  c,  d,  y) > 0)
            {
                v2=1;
                y=i;
            }
        }
        else if(v2==1)
        {
            if(func(a,  b,  c,  d,  y) < 0)
            {
                v2=0;
                y=i;
            }
        } 

        if(i>0)
        i=-i;
        else {
            i=-i;
            i+=1;
        }
    }
    int temp;
    if(x>y)
    {
        temp=x;
        x=y;
        y=temp;
    }
    bisection(a,b,c,d,x,y);
    printf("\nDo you wish to try another cubic [y/n]:");
    scanf(" %c",&ch);
    }while(ch=='y');
    return 0;
}
