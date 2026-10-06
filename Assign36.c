#include<stdio.h>
#include<string.h>

int str_length(char str[],int size)
{
    if(str[strlen(str)-1]=='\n')
    str[strlen(str)-1]='\0';
    int i;

    for( i=0 ; str[i] ; i++ );
    return i;
}

void str_reverse(char str[])
{
    int i,l=strlen(str);

    for( i=0 ; i<l/2 ; i++ )
    {
        int temp=str[i];
        str[i]=str[l-1-i];
        str[l-1-i]=temp;
    }
    
}

int str_compare(char str[],char string[])
{
    int i,l=0;
    for(i=0; str[i] ;i++)
    {
        if(str[i]==string[i])
        l++;
    }
    if(strlen(str)==l)
    return 0;

    for(i=0;str[i];i++)
    {
        if(str[i]>string[i])
        return 1;
        else
        return -1;
    }
}

void uppercase(char str[])
{
    char string[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int i,j;
    for(i=0;str[i];i++)
    {
        for(j=0;string[j];j++)
        {
            if(str[i]-string[j]==32)
            str[i]=string[j];
        }
    }
    printf("%s",str);
}

void Lowercase(char str[])
{
    char string[]="abcdefghijklmnopqrstuvwxyz";
    int i,j;
    for(i=0;str[i];i++)
    {
        for(j=0;string[j];j++)
        {
            if(str[i]-string[j]==-32)
            str[i]=string[j];
        }
    }
    printf("%s",str);
}

int main()
{
    char str[20];
    printf("Enter the string\n");
    fgets(str,20,stdin);
    if(str[strlen(str)-1]=='\n')
    str[strlen(str)-1]='\0';

    //uppercase(str);
    Lowercase(str);
}

int q2()
{
    char string[20],str[20];
    printf("enter string of first array\n");
    fgets(str,20,stdin);
    printf("enter string of second array\n");
    fgets(string,20,stdin);

    if(str[strlen(str)-1]=='\n')
    str[strlen(str)-1]='\0';

    if(string[strlen(string)-1]=='\n')
    string[strlen(string)-1]='\0';

    int cmp=str_compare(str,string);
    if(cmp==0)
    printf("String is Same\n");
    else if(cmp==1)
    printf("\"%s\" string \"%s\" string ke baad aayegi in dictionary order\n",str,string);
    else
    printf("Strings are in Dictionary Order\n");

    return 0;
}

int q1()
{
    char str[20];
    printf("enter string\n");
    fgets(str,20,stdin);

    if(str[strlen(str)-1]=='\n')
    str[strlen(str)-1]='\0';

    /*str_reverse(str);
    printf("Reverse is %s",str);*/ // ques.2 reverse a string //

    int l=str_length(str,20);
    printf("Length is %d\n",l); // ques.1 calculate the length of the string //

    return 0;
}