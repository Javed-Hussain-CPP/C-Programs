#include<stdio.h>
int q1()
{
    int a[10],i,G=0,S=0,ith=0;
    printf("enter 10 numbers\n");
    for(i=0; i<10; i++)
    scanf("%d",&a[i]);
    printf("\n");
    printf("Sorted Array\n");

    for(i=0; i<10; i++)
    {
        G=G>a[i]?G:a[i];        // find greatest number of an Array //
    } 

    for(i=0; i<10; i++)
    { 
        S=G;
        ith=i;
        
        while(i<10)
        {
            S=a[i]<S?a[i]:S;    // find smallest number of Array //
            i++;
        }

        i=ith;
        while(i<10)
        {
            if(a[i]==S)        // find index of smallest value of Array //
            break;
            i++;
        }

        a[i]=a[ith];           // Swapping of i index value to the ith value //
        a[ith]=S;
        printf("%d ",S);
        i=ith;
    }
    printf("\n");
    for(i=0;i<10;i++)
    printf("%d ",a[i]);
    return 0;
}

int q2()
{
    int a[5],i,L,ith;
    printf("enter 5 numbers\n");

    for(i=0;i<5;i++)
    scanf("%d",&a[i]);

    int temp=0;

    for(i=0;i<5;i++)  
    {
        L=0;
        ith=i;
        while(i<5)
        {
            L=L>a[i]?L:a[i];   // finds 1st Largest value from i=0 to i=4 and 2nd largest value from i=1 to i=4 //
            i++;
        }

        i=ith;

        while(i<5)
        {
            if(a[i]==L )  // find largest value index from i=0 to i=5 and second largest value index from i=1 to i=4 //
            break;
            i++;
        }
        a[i]=a[ith];
        //a[ith]=a[i];    // unnecessary line //
        i=ith;
        if(ith>0 && L!=temp)
        break;
        temp=L;
    }
    if(temp!=L)
    printf("Second Largest Value is %d",L);
    else
    printf("In this Array all values are Same, So there is no second Largest Value\n");
    return 0;
}

int q3()
{
    int a[5],i,L=0,S=0,ith;
    printf("enter 5 numbers\n");

    for(i=0;i<5;i++)
    scanf("%d",&a[i]);

    int temp=0;

    for(i=0;i<5;i++)  
    {
        L=L>a[i]?L:a[i];   // find largest value of a given array  //
    }    

    for(i=0;i<5;i++)  
    {
        S=L;
        ith=i;

        while(i<5)
        {
            S=S<a[i]?S:a[i];  // find smallest value of a given array //
            i++;
        }

        i=ith;

        while(i<5)
        {
            if(a[i]==S )  // find the index of smallest value of a given array //
            break;
            i++;
        }
        a[i]=a[ith];
        //a[ith]=a[i];    // unnecessary line //
        i=ith;
        if(ith>0 && S!=temp)
        break;
        temp=S;
    }
    if(S!=temp)
    printf("Second Smallest Value is %d",S);
    else
    printf("In this Array all values are Same, So there is no second smallest Value\n");
    return 0;
}

int q4()
{
    int a[10],i,G,ith=0;
    printf("Enter 10 numbers\n");
    
    for(i=0;i<10;i++)
    scanf("%d",&a[i]);

    printf("\nSorted Array in Descending Order\n");

    for(i=0;i<10;i++)
    {
        G=0;
        ith=i;

        while(i<10)
        {
            G=G>a[i]?G:a[i];       // find the greatest element in an Array //
            i++;
        }

        i=ith;

        while(i<10)
        {
            if(a[i]==G)        // find the index value of greatest element in an Array //
            break;
            i++;
        }

        a[i]=a[ith];
        a[ith]=G;
        printf("%d ",G);
        i=ith;
    }

    printf("\nSorted Array\n");

    for(i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }

    return 0;

}

int main()
{
    int a[5],b[5],i;
    printf("Enter the values of First Array\n");
    for(i=0;i<=4;i++)
    scanf("%d",&a[i]);

    for(i=0;i<=4;i++)
    {
        b[i]=a[i];
    }

    printf("These are the copied values from the First Array to the Second Array\n");

    for(i=0;i<=4;i++)
    {
        printf("%d ",b[i]);
    }

    return 0;
}