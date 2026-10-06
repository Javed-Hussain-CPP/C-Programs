#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char* input_variable_length_string()
{
    char str[100];
    printf("enter the string\n"); // ye stack array variable destroy hojaega //

    fgets(str,100,stdin);        // after execution of this function //
    str[strlen(str)-1]='\0';     // total lenth of the user specific string //

    char *p=(char*)malloc(strlen(str)+1);  // creation of DMA array variable //

    int i;
    for(i=0;str[i];i++)
    {
        p[i]=str[i];           // copy the stack variable data 
    }                          // into the heap DMA variable
    p[i]='\0';

    return p;
}

int q1()
{
    //int length=input_variable_length_string(); 
    // length ka kya karenge jab values hi destroy hojaegi after the function //
    char *q=input_variable_length_string(); // gets address of the DMA variable //
    int i;                                  // through the pointer //
    for(i=0;q[i]; i++);
    int length=i;  // calculate the length of the string through pointer //
    char arr[length+1];
    int j;
    for(j=0; q[j]; j++)
    {
        arr[j]=q[j];
    }
    arr[j]='\0';
    free(q);
    printf("%s %d\n",arr,strlen(arr));
    printf("%d",sizeof(arr));
}

char* f1()
{
    char *p=NULL;
    p=(char*)malloc(1);

    printf("Enter the String\n");
    int size=1;
    int i;
    for(i=0; p[i]!='\n'; i++)
    {
        p[i]=getchar();
        if(p[i]=='\n')
        break;
        else
        p=realloc(p,++size);
    }
    p[i]='\0';

    return p;
}

int q2()
{
    // gets memory address of DMA variable //
    char *q=f1(); 

    // calculate the size through length technique via add +1 more //
    int i;
    for(i=0; q[i]; i++);
    int size=i+1;

    char arr[size];
    //int j;
    /*for(j=0; q[j]; j++)
    arr[j]=q[j];
    arr[j]='\0';*/
    strcpy(arr,q);

    printf("%s %d",arr,sizeof(arr));

    return 0;
}

int q3()
{
    int n;
    float average,sum=0;
    printf("Enter the number of data values\n");
    scanf("%d",&n);
    int *p=(int*)malloc(n*sizeof(int));
    
    printf("Enter the %d data values\n",n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&p[i]);
        sum=sum+p[i];
    }

    average=sum/n;
    printf("Average is %.2f",average);
    free(p);
    return 0;
}

int q4()
{
    int n,sum=0;
    printf("Enter total numbers\n");
    scanf("%d",&n);
    int *p=(int*)malloc(n*sizeof(int));
    printf("Enter %d numbers\n",n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&p[i]);
        sum=sum+p[i];
    }
    printf("Sum is %d",sum);
    free(p);
    return 0;
}

int* merge(int x,int y)
{
    int *p=(int*)malloc(x*sizeof(int));
    int *q=(int*)malloc(y*sizeof(int));

    printf("Enter the elements of first array\n");
    for(int i=0; i<x; i++)
    {
        scanf("%d",&p[i]);
    }

    printf("Enter the elements of second array\n");
    for(int i=0; i<y; i++)
    {
        scanf("%d",&q[i]);
    }

    int *r=(int*)malloc(x+y);
    for(int i=0,j=0; i<x || j<y ;)
    {
        if(i<x)
        {
            r[i]=p[i];
            i++
        }
        else
        {
            r[i]=q[j];
            j++;
        }
    }
    free(p);
    free(q);
    return r;
}

void sort(int *ptr,int size)
{
    for(int r=1; r<)
}

int main()
{
    int x,y;
    printf("Enter the size of two arrays\n");
    scanf("%d %d",&x,&y);
    int *s=merge(x,y);
    sort(s,x+y);
    for(int i=0; i<(x+y) ; i++)
    {
        printf("%d ",s[i]);
    }
}