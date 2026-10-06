#include<stdio.h>
#include<string.h>

/*void sort(char str)
{
    for(int r=1;)
}*/

void count_frequency(char str[])
{
    //sort(str);
    int L=strlen(str);
    for(int r=1;r<=L;r++)
    {
        int count=1;
        if(str[r-1]!=' ')
        {
            for(int i=r-1;str[i];i++)
            {
                if(str[r-1]==str[i+1])
                {
                    count++;
                    str[i+1]=' ';
                }
            }
            printf("%c occurs %d times\n",str[r-1],count);
        }
    }
}

void print_frequency(char str[])
{
    int f[128]={0},i;
    for(i=0;str[i];i++)
        //if(str[i]!=' ') without space usecase
        f[str[i]]++;
    for(i=0;i<=127;i++)
        if(f[i]!=0)
            printf("%c - %d\n",i,f[i]);    
}

int q1()
{
    char str[30];
    printf("Enter the string\n");
    fgets(str,30,stdin);

    if(str[strlen(str)-1]=='\n')
    str[strlen(str)-1]='\0';

    //count_frequency(str);
    print_frequency(str);
}

int count_words(char str[])
{
    int count=1;
    for(int i=0;str[i];i++)
    {
        if(str[i]==' ')
        count++;
    }
    return count;
}

int find_word(char str[],char string[])
{
    int i=0,j=0,count=count_words(str);

    while(count)
    {
        for(j=0;string[j]==str[i] && (str[i]!=' ' && str[i]!='\0');j++,i++);

        if(strlen(string)==j)
        return 1;
        else
        for(;str[i]!=' ' && str[i]!='\0';i++);

        if(str[i==' '])
        i++;
        count--;
    }
    return 0;
}

int q2()
{
    char str[30],string[30];
    printf("Enter the string\n");
    fgets(str,30,stdin);

    printf("Enter the word\n");
    fgets(string,30,stdin);

    if(str[strlen(str)-1]=='\n')
    str[strlen(str)-1]='\0';

    if(string[strlen(string)-1]=='\n')
    string[strlen(string)-1]='\0';

    if(find_word(str,string))
    printf("Yes,\"%s\" word is a part of the \"%s\" string\n",string,str);
    else
    printf("No,\"%s\" word is not a part of the \"%s\" string\n",string,str);
}

char* first_letter_capital(char str[])
{
    int i;
    for(i=0;str[i];i++)
    {
        if(i==0 || str[i-1]==' ')
        {
            if(str[i]>='a' && str[i]<='z')
            str[i]=str[i]-32;
        }
    }
    return str;
}

int q3()
{
    char str[30];
    printf("Enter the string\n");
    fgets(str,30,stdin);

    if(str[strlen(str)-1]=='\n')
    str[strlen(str)-1]='\0';

    printf("%s",first_letter_capital(str));
}

void acronym_name(char str[])
{
    int count=count_words(str);
    char string[30]={0};
    int i=0,j=0;
    while(count>=1)
    {
        for(;str[j];j++)
        {
            if(j==0 || str[j-1]==' ')
            {
                string[i]=str[j];
                string[i+1]=' ';
                i=i+2;
                count--;
                j++;
                //if(count==0)
                //break;
            }
            if(count==1)
            {
                for(;str[j];j++)
                {
                    if(str[j-1]==' ')  // second word ki iteration ke baad
                    {                   // true hoga
                        while(str[j])
                        {
                            string[i]=str[j];
                            i++;
                            j++;
                        }
                        string[i]=str[j]; // j--;
                        count--;
                    }
                }
            }
        }
        //string[j]='\0';   // or we can also do string[i]=str[j]; 
    }
    printf("%s",string);
}                    

int main()
{
    char str[30];
    printf("Enter the string\n");
    fgets(str,30,stdin);

    if(str[strlen(str)-1]=='\n')
    str[strlen(str)-1]='\0';

    acronym_name(str);
    return 0;
}

void Concatenate(char str[],char string[])
{
    int i,l=strlen(str);
    for(i=0;string[i];i++,l++)
    {
        str[l]=string[i];
    }

    str[l]=string[i];

    printf("After Concatenation %s\n",str);
}

int q5()
{
    char str[50];
    printf("Enter first string\n");
    fgets(str,30,stdin);

    char string[50];
    printf("Enter second string\n");
    fgets(string,30,stdin);

    if(str[strlen(str)-1]=='\n')
    str[strlen(str)-1]='\0';

    if(string[strlen(string)-1]=='\n')
    string[strlen(string)-1]='\0';

    Concatenate(str,string);
    return 0;
}