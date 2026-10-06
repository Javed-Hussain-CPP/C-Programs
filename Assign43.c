#include<stdio.h>
#include<string.h>

int Highest_Marks(int **p,int num_of_classes,int num_of_students[])
{
    int max,i,j;
    max=p[0][0];
    for(i=0; i<num_of_classes; i++)
    {
        for(j=0;j<num_of_students[i]; j++)
        {
            if(max<p[i][j])
            max=p[i][j];
        }
    }
    return max;
}

int main()
{
    int a[3],b[5],c[2],d[7],e[4];
    printf("Enter first class Students Marks\n");
    for(int i=0; i<3; i++)
    scanf("%d",&a[i]);

    printf("Enter second class Students Marks\n");
    for(int i=0; i<5; i++)
    scanf("%d",&b[i]);

    printf("Enter third class Students Marks\n");
    for(int i=0; i<2; i++)
    scanf("%d",&c[i]);

    printf("Enter fourth class Students Marks\n");
    for(int i=0; i<7; i++)
    scanf("%d",&d[i]);

    printf("Enter fifth class Students Marks\n");
    for(int i=0; i<4; i++)
    scanf("%d",&e[i]);

    int *ptr[5];  // Array of Pointers //
    ptr[0]=a;
    ptr[1]=b;
    ptr[2]=c;
    ptr[3]=d;
    ptr[4]=e;

    int students[5]={3,5,2,7,4};

    printf("Highest Marks is %d",Highest_Marks(ptr,5,students));
}

void sort(int*,int);

void move_first_value(int *arr,int size)
{
    int i,boundary=0;
    for(i=1; i<size; i++)
    {
        if(arr[i]<arr[0])
        {
            boundary++;
            int temp=arr[i];
            arr[i]=arr[boundary];
            arr[boundary]=temp;
        }
    }
    int temp=arr[0];
    arr[0]=arr[boundary];
    arr[boundary]=temp;
}

/*void move_first_value(int *arr,int size)
{
    int x=arr[0];
    sort(arr,size);

    for(int i=0; i<size; i++)
    {
        if(x==arr[i])
        {
            while(i<size-1)
            {
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
                i++;
            }
        }
    }
}*/

int q4()
{
    int arr[9];
    printf("Enter the values\n");
    for(int i=0; i<9; i++)
    scanf("%d",&arr[i]);

    move_first_value(arr,9);
    for(int i=0; i<9; i++)
    printf("%d ",arr[i]);
}

// question 3.

void merge(int *arr1,int size1,int *arr2,int size2,int *arr3)
{

    sort(arr1,size1);
    sort(arr2,size2);
    for(int i=0; i<size1; i++)
    arr3[i]=arr1[i];

    for(int i=size1,j=0; i<size1+size2; i++,j++)
    arr3[i]=arr2[j];

    sort(arr3,size1+size2);
}

// question 2. //

void sort(int *ptr,int size)
{
    int r,i;
    for(r=1; r<size; r++)
    {
        for(i=0; i<size-r; i++)
        {
            if(ptr[i]>ptr[i+1])
            {
                int temp=ptr[i];
                ptr[i]=ptr[i+1];
                ptr[i+1]=temp;
            }
        }
    }
}

int q3()
{
    int arr1[7],arr2[7],arr3[14];

    printf("Enter the values of first array\n");
    for(int i=0; i<7; i++)
    scanf("%d",&arr1[i]);

    printf("Enter the values of second array\n");
    for(int i=0; i<7; i++)
    scanf("%d",&arr2[i]);

    /*for(int i=0; i<7; i++)
    arr3[i]=arr1[i];

    for(int i=7,j=0; i<14; i++,j++)
    arr3[i]=arr2[j];*/

    //sort(arr3,14);
    merge(arr1,7,arr2,7,arr3);
    for(int i=0; i<14; i++)
    printf("%d ",arr3[i]);

}

int q2()
{
    int arr[10];
    printf("Enter the values\n");

    for(int i=0; i<10; i++)
    scanf("%d",&arr[i]);

    sort(arr,10);
    for(int i=0; i<10; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}

// question 1. //

/*void swap_two_char_arrays(char str[],char string[])
{
    char temp1[30]={0};
    char temp2[30]={0};

    int i;
    for(i=0; str[i]; i++)
    {
        temp2[i]=str[i];
    }
    temp2[i]='\0';

    for(i=0; string[i]; i++)
    {
        temp1[i]=string[i];
    }
    temp1[i]='\0';

    int j;
    for(j=0,i=0; temp1[i] || temp2[j];)
    {
        if(temp1[i]!='\0')
        {
            str[i]=temp1[i];
            i++;
        }

        if(temp2[j]!='\0')
        {
            string[j]=temp2[j];
            j++;
        }
    }
    str[i]='\0';
    string[j]='\0';
}*/

void swap_two_char_arrays(char *p,char *q)
{
    char temp[100];
    strcpy(temp,p);
    strcpy(p,q);
    strcpy(q,temp);
}

int q1()
{
    char str[30];
    char string[30];

    printf("Enter first string\n");
    fgets(str,30,stdin);

    if(str[strlen(str)-1]=='\n')
    str[strlen(str)-1]='\0';

    printf("Enter second string\n");
    fgets(string,30,stdin);

    if(string[strlen(string)-1]=='\n')
    string[strlen(string)-1]='\0';

    swap_two_char_arrays(str,string);
    printf("first string is %s\nsecond string is %s",str,string);
    //printf("\n[%c][%c][%c][%c]",str[27],str[29],string[15],string[29]);
    return 0;
}































































































/*int compare(char str[],char string[],int size)
{
    int i;
    for( i=0;str[i] && string[i];i++)
    {
        if(str[i]==string[i] || (str[i]+32==string[i] || str[i]-32==string[i]))
        continue;
        else if(str[i]>string[i])
        return 1;
        else
        return -1;    
    }

    if(str[i]==string[i])
    return 0;
}

void copy_string(char str[],char string[],int size)
{
    int i;
    for(i=0; string[i] ;i++)
    {
        str[i]=string[i];
    }
    str[i]='\0';
    //printf("%s",str);
}*/

void store_strings(int r,int c,char str[][c])
{
    printf("Enter the strings to the 2D char Array\n");
    getchar(); // because of r and c variable input last \n character stoarage removal
    for(int i=0;i<r;i++)
    {
        fgets(str[i],c,stdin);
        if(str[i][strlen(str[i])-1]=='\n')
        str[i][strlen(str[i])-1]='\0';
    }
    printf("\n");

    //for(int i=0;i<r;i++)
    //printf("%s\n",str[i]);
}

void sort_cities()
{
    int r,c;
    printf("Enter Rows\n");
    scanf("%d",&r);
    printf("Enter Columns\n");
    scanf("%d",&c);
    char temp[c];
    char cities[r][c];
    store_strings(r,c,cities);
    int i,round;
    for(round=1; round<r ;round++)
    {
        for(i=0; i<r-round ;i++)
        {
            if(strcmp(cities[i],cities[i+1])>0)
            {
                strcpy(temp,cities[i]);
                strcpy(cities[i],cities[i+1]);
                strcpy(cities[i+1],temp);
            }
        }
    }
    for(i=0;i<r;i++)
    printf("%s\n",cities[i]);
}

int q100()
{
    sort_cities();
    return 0;
}

/*int main()
{
    int size=30;
    char str[size];
    char string[size];
    fgets(string,size,stdin);
    string[strlen(string)-1]='\0';
    copy_string(str,string,size);
}*/

 /*int main()
 {
    int size;
    printf("Enter the size\n");
    scanf("%d",&size);
    char str[size];
    char string[size];
    getchar();
    printf("Enter first string\n");
    fgets(str,size,stdin);
    printf("Enter second string\n");
    fgets(string,size,stdin);
    if(compare(str,string,size)>0)
    printf("1");
    else if(compare(str,string,size)<0)
    printf("-1");
    else
    printf("0");
    //sort_array(arr,size);
 }*/