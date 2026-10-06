#include<stdio.h>

void swap(int a[],int size,int x,int y)
{
    int i,temp=0;
    for(i=0;i<=size-1;i++)
    {
        if(i==x)
        {
            temp=a[i];
            a[i]=a[y];
        }

        if(i==y)
        a[y]=temp;
    }

    for(i=0;i<=size-1;i++)
    printf("%d ",a[i]);
}

// For Question 2. To count Total Duplicate Elements //
// For Question 3. also to print Unique Elents //

int Sorted_Array(int b[],int size)
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

    return b[size];

    /*printf("Sorted Array is\n");

    for(i=0;i<size;i++)
    {
        printf("%d ",b[i]);
    }*/

}

int duplicate_count(int a[],int size)
{
    a[size]=Sorted_Array(a,size);
    int i,temp=0,random=-1,r,c=0;
    for(r=1;r<size;r++)
    {
        temp=a[r-1];
        for(i=r-1;i<size-1;i++)
        {
            if(temp==a[i+1])
            {
                if(random!=a[i+1])
                c++;
                random=a[i+1];
            }
        }
    }
    return c;
}


// This is for multiple duplicate values count //

int duplicate(int a[],int size)
{
    int i,c=0,r,temp;
    for(r=1;r<size;r++)
    {
        temp=a[r-1];
        for(i=r-1;i<size-1;i++)
        {
            if(temp==a[i+1])
            {
                c++;
                break;
            }
        }

        //if(i==size-1)
        //printf("%d ",temp);  // isse hum unique elements nhi nikal sakte
// because agar a[1] ki value a[5] ke equal hui toh vo starting m duplicate 
        //if(temp==a[i+1])
        //c++;
    }
    return c;
}
// ki wajah se count nhi hoga lekin jab i ki value 5 hogi aur uska next element 
// match nhi hoga toh vo value unique count hogi, but vo toh pehle duplicate thi.


void unique_elements(int a[],int size)
{
    a[size]=Sorted_Array(a,size);
    int i,temp=0,next=-1,r;
    printf("Unique Elements of an Array is\n");
    for(r=1;r<=size;r++)
    {
        temp=a[r-1];
        for(i=r-1;i<size-1;i++)
        {
            if(temp==a[i+1])
            {
                next=a[i+1];
                break;
            }
        }
        if((i==size-1 && next!=temp) || temp==a[size-1])
        printf("%d ",temp);
    }
}

void Sorted_Array_Descending(int a[],int size)
{
    int i,r,temp;
    for(r=1;r<size;r++)
    {
        for(i=0;i<size-r;i++)
        {
            if(a[i]<a[i+1])
            {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
    }
}


// merge waale m both arrays sort hone ke baad bhi //
// merge array m sorted hone chaiye //


/*void mergearrays(int a[],int b[],int size)
{
    int n=2*size;
    //a[size]=Sorted_Array_Descending(a,size);
    //b[size]=Sorted_Array_Descending(b,size);

    int i;
    int merge[n];
    for(i=0;i<n-size;i++)
    {
        merge[i]=a[i];
    }

    while(i<n)
    {
        merge[i]=b[i-size];
        i++;
    }

    merge[n]=Sorted_Array_Descending(merge,n);

    printf("Merge Array is\n");

    for(i=0;i<n;i++)
    printf("%d ",merge[i]);

}*/

void merge__arrays(int a[],int b[],int size)
{
    int  i,n=2*size,merge[n];
    Sorted_Array_Descending(a,size); // must be sorted //
    Sorted_Array_Descending(b,size); // must be sorted //

    for(i=0;i<size;i++)
    {
        if(a[i]>b[i])
        merge[i]=a[i];
        else
        merge[i]=b[i];
    }

    for(i=0;i<size;i++)
    {
        if(a[i]<b[i])
        merge[n-size + i]=a[i];
        else
        merge[n-size + i]=b[i];
    }

    printf("Merge Array is\n");

    for(i=0;i<n;i++)
    printf("%d ",merge[i]);

}

void merge_arrays(int a[],int b[],int c[],int size)
{
    int  i,j,k;
    Sorted_Array_Descending(a,size); // must be sorted //
    Sorted_Array_Descending(b,size); // must be sorted //

    for(i=0,j=0,k=0;i<size && j<size;k++)
    {
        if(a[i]>b[j])
        {
            c[k]=a[i];
            i++;
        }
        else
        {
            c[k]=b[j];
            j++;
        }
    }

    while(i<size || j<size)
    {
        if(i<size)
        {
            c[k]=a[i];
            i++;
            k++;
        }
        else
        {
            c[k]=b[j];
            j++;
            k++;
        }
    }

    printf("Merge Array is\n");

    for(i=0;i<k;i++)
    printf("%d ",c[i]);

}

void count_frequency(int a[],int size)
{
    printf("Frequency of each element of an Array is\n");
    int i=0,temp,c;
    Sorted_Array_Descending(a,size);
    while(i<size)
    {
        c=1;
        temp=a[i];

        while(i<size-1)
        {
            if(temp!=a[i+1])
            break;
            else
            {
                c++;
                i++;
            }
        }

        printf("%d --> %d\n",temp,c);
        i++;
    }
}

int main()
{
    int size,i,x,y;
    printf("enter Size of an Array\n");
    scanf("%d",&size);

    int a[size];
    //int b[size];

    printf("enter the values of an Array\n");
    for(i=0;i<=size-1;i++)
    scanf("%d",&a[i]);

    /*printf("enter the values of an Array\n");
    for(i=0;i<=size-1;i++)
    scanf("%d",&b[i]);*/

    /*printf("enter the index that you want to swap\n");
    scanf("%d%d",&x,&y);*/

    /*while(x>y)
    {
        printf("x should be smaller\nEnter again\n");
        scanf("%d%d",&x,&y);
    }

    while(x>=size || y>=size)
    {
        printf("Given Indices should be in boundary of an Array\nEnter again\n");
        scanf("%d%d",&x,&y);
    }*/

    //int c[size+size];


    count_frequency(a,size);

    //merge_arrays(a,b,c,size);

    //unique_elements(a,size);

    //int count=duplicate_count(a,size);
    //int count=duplicate(a,size);
    //printf("Total number of Duplicate Elements in an Array is %d",count);
    //swap(a,size,x,y);

    return 0;
}