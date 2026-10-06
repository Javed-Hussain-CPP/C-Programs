#include<stdio.h>
int q1()
{
    char lowercase[]="abcdefghijklmnopqrstuvwxyz",str[30];
    int i,j,length=0;

    printf("Enter the String\n");
    fgets(str,30,stdin);

    for(i=0;str[i];i++)
    length++;
    
    if((length==(30-1) && str[30-2]=='\n') || length<(30-1))
    {
        if(str[length-1]=='\n')
        str[length-1]='\0';
        length--;
    }

    for(i=0; str[i] ; i++)
    {
        for(j=0; lowercase[j]; j++)
        {
            if(str[i]-lowercase[j]==-32)
            str[i]=lowercase[j];
        }
    }
    
    printf("Lowercase conversion is %s\n",str);

    return 0;
}

int q21()
{
    char str[30],string[30]; // or string[30]={0};
    int i,length=0;
    printf("Enter the String\n");
    fgets(str,30,stdin);

    for(i=0;str[i];i++)
    length++;
    
    if((length==(30-1) && str[30-2]=='\n') || length<(30-1))
    {
        if(str[length-1]=='\n')
        str[length-1]='\0';
        length--;
    }

    for(i=0;str[i];i++)
    {
        string[i]=str[--length];
    }
    string[i]='\0';

    printf("reverse of %s is %s\n",str,string);

    return 0;
}

int q22()
{
    char str[30];//string[30];
    int i,length=0;
    printf("Enter the String\n");
    fgets(str,30,stdin);

    for(i=0;str[i];i++)
    length++;
    
    if((length==(30-1) && str[30-2]=='\n') || length<(30-1))
    {
        if(str[length-1]=='\n')
        str[length-1]='\0';
        length--;
    }

    int j=length-1;

    for(i=0;i<j;i++)
    {
        int temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        j--;
    }

    printf("reverse is %s\n",str);

    return 0;
}

int q3()
{
    char str[30];
    int i,length=0,alpha=0,digits=0,spec_char=0;

    printf("Enter the String\n");
    fgets(str,30,stdin);

    for(i=0;str[i];i++)
    length++;
    
    if((length==(30-1) && str[30-2]=='\n') || length<(30-1))
    {
        if(str[length-1]=='\n')
        str[length-1]='\0';
        length--;
    }

    for(i=0;str[i];i++)
    {
        if ((str[i]>=65 && str[i]<=90) || (str[i]>=97 && str[i]<=122))
        {
            alpha++;
        }
        else if (str[i]>=48 && str[i]<=57)
        {
            digits++;
        }
        else
        {
            spec_char++;
        }
    }
    printf("Alphabets is %d\nDigits is %d\nSpecial Characters is %d",alpha,digits,spec_char);
    return 0;
}

int q4()
{
    char str[30],string[30];
    int i,length=0;

    printf("Enter the String\n");
    fgets(str,30,stdin);

    for(i=0;str[i];i++)
    length++;
    
    if((length==(30-1) && str[30-2]=='\n') || length<(30-1))
    {
        if(str[length-1]=='\n')
        str[length-1]='\0';
        length--;
    }

    for(i=0;str[i];i++)
    {
        string[i]=str[i];
    }
    string[i]='\0';

    printf("Copied Array of  [%s] is [%s]",str,string);
    return 0;
}

int main()
{
    char str[30];
    int i,length=0;

    printf("Enter the String\n");
    fgets(str,30,stdin);

    for(i=0;str[i];i++)
    length++;
    
    if((length==(30-1) && str[30-2]=='\n') || length<(30-1))
    {
        if(str[length-1]=='\n')
        str[length-1]='\0';
        length--;
    }

    char ch;
    printf("Enter any character from the String\n");
    scanf("%c",&ch);

    for(i=0;str[i];i++)
    {
        if(str[i]==ch)
        break;
    }

    printf("First occurence of %c is %d letter\n",ch,i+1);
    return 0;
}