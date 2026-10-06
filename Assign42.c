#include<stdio.h>
#include<string.h>

void extract_substring(char str[],int x,int y,char string[])
{
    int j=0;
    for(int i=0; str[i]; i++)
    {
        if(i>=x && i<y)
        {
            string[j]=str[i];
            j++;
        }
    }
    string[j]='\0';
}

int main()
{
    char str[50];
    printf("Enter the String\n");

    fgets(str,50,stdin);
    if(str[strlen(str)-1]=='\n')
    str[strlen(str)-1]='\0';

    int x,y;
    printf("enter start index\n");
    scanf("%d",&x);

    printf("enter end index\n");
    scanf("%d",&y);

    char string[50]={0};
    extract_substring(str,x,y,string);
    printf("%s",string);

    return 0;
}    

void uppercase(char str[])
{
    for(int i=0; str[i]; i++)
    {
        if(str[i]>='a' && str[i]<='z')
        str[i]=str[i]-32;
    }
}

char* lowercase(char *str)
{
    for(int i=0; str[i]; i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        str[i]=str[i]+32;
    }
}

int q3()
{
    char str[50];
    printf("Enter the String\n");

    fgets(str,50,stdin);
    if(str[strlen(str)-1]=='\n')
    str[strlen(str)-1]='\0';
    
    uppercase(str);
    //lowercase(str);
    printf("%s",str);
    return 0;
}    

// question 2.

void search_all_occurences(char *str,char ch,int *arr)
{
    int j=0;
    for(int i=0; str[i]; i++)
    {
        if(str[i]==ch)
        {
            arr[j]=i;
            j++;
        }
    }
}

int q2()
{
    char str[50];
    printf("Enter the String\n");

    fgets(str,50,stdin);
    if(str[strlen(str)-1]=='\n')
    str[strlen(str)-1]='\0';

    char ch;
    printf("Enter the Character\n");
    scanf("%c",&ch);

    int l=strlen(str);
    int arr[l];
    for(int i=0; i<l; i++)
    arr[i]=0;
    
    search_all_occurences(str,ch,arr);

    for(int i=0; i<l ; i++)
    printf("[%d]",arr[i]);

    return 0;
}

// question 1.

void swap(int *p, int *q)
{
    int temp=*p;
    *p=*q;
    *q=temp;
}

int q1()
{
    int a,b;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("a = %d and b = %d",a,b);

    return 0;
}