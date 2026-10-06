#include<stdio.h>
/*int main()
{
    int i,n;
    printf("enter a number :");
    scanf("%d",&n);
    for ( i = n; i <= n; i++)
    {
        printf("%d",n*(n+1)/2);
    }
    return 0;
}
*/

int q1()
{
    int i,n;
    int s;
    printf("enter a number :");
    scanf("%d",&n);
    for (i=1,s=0;i <= n; i++)
       s=s+i;
    printf("%d ",s);
    return 0;
}


int q2()
{
    int i,n;
    int s;
    printf("enter a number :");
    scanf("%d",&n);
    for (i=1,s=0;i <= n; i++)
       s=s+2*i;
    printf("%d ",s);
    return 0;
}


int q3()
{
    int i,n;
    int s;
    printf("enter a number :");
    scanf("%d",&n);
    for (i=1,s=0;i <= n; i++)
       s=s+2*i-1;
    printf("%d ",s);
    return 0;
}


int q4()
{
    int i,n;
    int s;
    printf("enter a number :");
    scanf("%d",&n);
    for (i=1,s=0;i <= n; i++)
       s=s+i*i;
    printf("%d ",s);
    return 0;
}


int q5()
{
    int i,n;
    int s;
    printf("enter a number :");
    scanf("%d",&n);
    for (i=1,s=0;i <= n; i++)
    {
         s=s+i*i*i;
    printf("%d ",s);
    }
    return 0;
}

int q6()
{
    int a,b,c;
    for(a=5;a>1;a--)
    {
        for (b=6-a;b<=5;b++)
        {
            c=a+b;
            printf("\n%d %d %d",a,b,c);
        }
        
    }
}

int q7()
{
    int i,j,k,l=1;
    for ( i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            printf("*");
            if(j==i)
            break;
        }
        for(k=++l;k<=5;k++)
        {
            printf("$");
        }
        
        printf("\n");
    }
    return 0;
}


int q8()
{
    int i,j;
    for ( i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if(j<=i)
            printf("*");
            else
            printf(" ");
        }
        
        printf("\n");
    }
    return 0;
}


int q9()
{
    int i,j;
    for ( i = 4; i >= 1; i--)
    {
        for (j = 1; j <= 4; j++)
        {
            if(j<=i)
            printf("*");
            else
            printf(" ");
        }
        
        printf("\n");
    }
    return 0;
}


int main()
{
    int i,j;
    for ( i = 1; i <= 4; i++)
    {
        for (j = 1; j <= 4; j++)
        {
            if(j<=5-i)
            printf("*");
            else
            printf(" ");
        }
        
        printf("\n");
    }
    return 0;
}