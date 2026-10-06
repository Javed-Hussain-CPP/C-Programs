#include<stdio.h>

int Max_num(int b[],int num)
{
    int i,max;
    printf("enter %d numbers in an Array\n",num);
    for(i=0;i<=num-1;i++)
    scanf("%d",&b[i]);
    max=b[0];
    for(i=1;i<=num-1;i++)
    {
        if(max<b[i])
        max=b[i];
    }
    return max;
}

int Min_num(int a[],int num)
{
    int min=a[0],i;
    for(i=1;i<=num-1;i++)
    {
        if(min>a[i])
        min=a[i];
    }
    return min;
}

void Sorted_Array(int b[],int size)
{
    int r,i,temp;
    for(r=1;r<size;r++)
    {
        for(i=0;i<size-r;i++)
        {
            if(b[i]>b[i+1])
            {
                temp=b[i];
                b[i]=b[i+1];
                b[i+1]=temp;
            }
        }
    }

    printf("Sorted Array is\n");

    for(i=0;i<size;i++)
    {
        printf("%d ",b[i]);
    }
}

void rotate(int a[],int size,int n,int d)
{
    int i,r,temp=0;
    for (r = 1; r <= n; r++)
    {
        if(d)
        temp=a[0];
        else
        temp=a[size-1];

        if(d)
        {
            for (i = 0; i < size-1; i++)
            {
                a[i]=a[i+1];
            }

            a[i]=temp;
        }
        else
        {
            for(i=size-1; i ; i--)
            {
                a[i]=a[i-1];
            }

            a[i]=temp;
        }
        
    }

    for(i=0;i<size;i++)
    printf("%d ",a[i]);
    
}

int find_duplicate(int a[],int size)
{
    int i;
    for(i=0;i<size-1;i++)
    {
        if(a[i]==a[i+1])
        return a[i];
    }

    return 0;
}

int main()
{
    int size,greatest_num,smallest_num,n;
    printf("enter array size\n");
    scanf("%d",&size);
    
    //n=size-1;

    int a[size],i;
    printf("enter values in an Array\n");
    for(i=0;i<size;i++)
    scanf("%d",&a[i]);

    //printf("enter the number of rotations to rotate an array\n");
    //scanf("%d",&n);

    int d;

    //printf("enter the direction\nLeft for (1) and Right for (0)\n");
    //scanf("%d",&d);

    int element=find_duplicate(a,size);

    if(element)
    printf("%d is the Adjacent duplicate value\n",element);
    else
    printf("No Adjacent Duplicate values found in this Array\n");

    //rotate(a,size,n,d);
    //Sorted_Array(a,size);

    //smallest_num=Min_num(a,n);
    //greatest_num=Max_num(a,n);
    //printf("smallest number is %d",smallest_num);
    return 0;
}