//хЩ╫гпнеп╤о
#include<stdio.h>
#include<math.h>
#define A 1e-3
int main()
{
    float a,b,c;
    scanf("%f,%f,%f",&a,&b,&c);
    if(a+b>c&&a+c>b&&b+c>a)
    {
        if(fabs(a-b)<=A||fabs(b-c)<=A||fabs(c-a)<=A)
        {
            if(fabs(a*a+b*b-c*c)<=A||fabs(a*a+c*c-b*b)<=A||fabs(b*b+c*c-a*a)<=A)
            {
                printf("Iscsceles right triangle!");
            }
            else
            {
                printf("Iscsceles triangle!");
            }
        }

        else if(fabs(a*a+b*b-c*c)<=A||fabs(a*a+c*c-b*b)<=A||fabs(b*b+c*c-a*a)<=A)
        {
            printf("Right angled triangle!");
        }
        else
        {
            printf("Triangle!");
        }
    }
    else
    {
        printf("Error!");
    }
    return 0;
}
