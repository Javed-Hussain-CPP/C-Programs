#include<stdio.h>
int q1()
{
    int a[10],i,sum;
    printf("Enter 10 numbers\n");
    for(i=0;i<10;i++)
    scanf("%d",&a[i]);

    for(i=0;i<10;i++)
    sum=sum+a[i];

    printf("Sum is %d",sum);
    return 0;

}

int q2()
{
    int a[10],i,sum;
    float avg;
    printf("Enter 10 numbers\n");
    for(i=0;i<10;i++)
    scanf("%d",&a[i]);

    for(i=0;i<10;i++)
    sum=sum+a[i];

    avg=sum/10.0;
    
    printf("Average is %f",avg);
    return 0;

}

int q3()
{
    int a[10],i,SumEven=0,SumOdd=0;
    printf("enter 10 numbers\n");
    for(i=0;i<10;i++)
    scanf("%d",&a[i]);

    for(i=0;i<10;i++)
    {
        if(a[i]%2==0)
        SumEven=SumEven+a[i];
    }

    printf("Sum of all Even numbers is %d\n",SumEven);

    for(i=0;i<10;i++)
    {
        if(a[i]%2!=0)
        SumOdd=SumOdd+a[i];
    }

    printf("Sum of all Odd numbers is %d",SumOdd);
}

int q4()
{
    int a[10],i,G;
    printf("Enter 10 numbers\n");
    for(i=0;i<10;i++)
    scanf("%d",&a[i]);

    for(i=0;i<10;i++)
    G=G>a[i]?G:a[i];
    
    printf("Greatest number is %d",G);
    return 0;

}

int q5()
{
    int a[10],i,S,G;
    printf("Enter 10 numbers\n");
    for(i=0;i<10;i++)
    scanf("%d",&a[i]);

    for(i=0;i<10;i++)
    G=G>a[i]?G:a[i];

    S=G;

    for(i=0;i<10;i++)
    S=a[i]<S?a[i]:S;
    
    printf("Smallest number is %d",S);
    return 0;

}

int main()
{
    int a[10],i,Max;
    printf("Enter 10 numbers\n");
    for(i=0;i<10;i++)
    scanf("%d",&a[i]);

    for(Max=a[0],i=1;i<10;i++)
    {
        if(Max<a[i])
        Max=a[i];
    }

    /*for(i=0;i<10;i++)
    G=G>a[i]?G:a[i];*/
    
    printf("Greatest number is %d",Max);
    return 0;
}