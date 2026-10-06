#include<stdio.h>
#include<string.h>

void is_palindrome(char str[])
{
    int i,l=strlen(str);

    for(i=0; i<l/2 && str[i]==str[l-1-i];i++);

    if(l/2==i)
    printf("Yes, %s is a Palindrome\n",str);
    else
    printf("No, It is not a Palindrome\n");
}

void trim_spaces(char str[])
{
    int i,t=0,index=0;
    if(str[0]!=' ' && str[strlen(str)-1]==' ')
    {
        t++;
        for(i=0;str[strlen(str)-1-i]==' ';i++)
        index++;
        str[strlen(str)-index]='\0';
    }
    else if(str[0]==' ' && str[strlen(str)-1]!=' ')
    {
        t++;
        int round=0;
        for(i=0;str[i]==' ';i++)
        round++;

        for(i=1;i<=round;i++)
        {
            for(int j=0;str[j];j++)
            {
                int temp=str[j];
                str[j]=str[j+1];
                str[j+1]=temp;

                if(str[j]=='\0')
                break;
            }
        }
    }
    else if(str[0]==' ' && str[strlen(str)-1]==' ')
    {
        t++;

        for(i=0;str[strlen(str)-1-i]==' ';i++)
        {
            index=strlen(str)-1-i;

        }
        str[index]='\0';

        int round=0;
        for(i=0;str[i]==' ';i++)
        round++;

        for(i=1;i<=round;i++)
        {
            for(int j=0;str[j];j++)
            {
                int temp=str[j];
                str[j]=str[j+1];
                str[j+1]=temp;

                if(str[j]=='\0')
                break;
            }
        }
    }
    else
    printf("No Need to Trim the String\n");
    
    if(t)
    {
        printf("Trimmed String is [%s]\n",str);
        printf("Length of the Trim String is %d\n",strlen(str));
    }
}

void trim(char str[])
{
    int i,j=0;
    for(i=1;str[i];i++)
    {
        if(str[i]==' ')
        {
            for(j=i;str[j];j++)
            {
                if(str[j]!=' ')
                {
                    int temp=str[i];
                    str[i]=str[j];
                    str[j]=temp;
                }
                if(str[i]!=' ')
                break;
            }
        }
        if(str[j+1]=='\0')
        {
            str[i+1]='\0';
            break;
        }         
    }
    printf("After Trimmed Spaces between the Strings is [%s]\n",str);
}

int q2()
{
    char str[30];
    printf("Enter the String\n");
    fgets(str,30,stdin);

    if(strlen(str)<30-1)
    str[strlen(str)-1]='\0';

    printf("Length of the given String is %d\n",strlen(str));
    printf("[%s]\n\n",str);

    if(str[0]==' ' || str[strlen(str)-1]==' ')
    trim_spaces(str);

    int yes=0;

    for(int i=1;str[i];i++)
    {
        if(str[i]==' ')
        {
            yes++;
            break;
        }
    }
    if(yes)
    trim(str);

    is_palindrome(str);

    //is_palindrome(str);
    //trim_spaces(str);
}

 /*while(str[0]==' ' || str[strlen(str)-1]==' ')
        {
            printf("Not a valid String\nPlease,Enter String without Leading spaces from both the ends\n");
            fgets(str,30,stdin);
        }
        break;        
*/

/*void reverse_words(char str[])
{
    int count=count_words(str);
    int i,j,new_J=0,L=strlen(str);
    for(i=0;i<count/2;i++)
    {
        int index=find_index(str,L);
        int k=0;
        for(j=new_J;str[j]!=' ';j++,k++)
        {
            int temp=str[j];
            str[j]=str[index+k];
            str[index+k]=temp;
        }
        L=index-1;
        new_J=j+1;
    }
    printf("\nReverse String by words is \n%s",str);
}*/

int count_words(char str[])
{
    int count=1;
    for(int i=0;str[i];i++)
    {
        if(str[i]==' ')
        count++;
    }
    if(str[0]=='\n')
    return 0;
    else
    return count;
}

int find_index(char str[],int L)
{
    int i,index=0;
    for(i=0;str[L-1-i]!=' ' && str[L-1-i]>=0;i++)
    {
        index=L-1-i;
    }
    return index;
}

int count_index(char string[],int index)
{
    int count=0;
    for(int i=0;string[index+i]!=' ' && string[index+i]!='\0';i++)
    {
        count++;
    }
    return count;
}

void reverse_words(char str[])
{
    int count=count_words(str);
    int i,j,new_J=0,L=strlen(str);
    char string[30];


    for(i=0;str[i];i++)
    {
        string[i]=str[i];
    }
    string[i]='\0';


    for(i=0;i<count;i++)
    {
        int index=find_index(string,L);
        int total_index=count_index(string,index);
        int k=0;

        for(j=new_J;total_index;j++,k++)
        {
            str[j]=string[index+k];
            total_index--;
        }
        str[j]=' ';
        L=index-1;
        new_J=j+1;
    }
    str[strlen(string)]='\0';
    printf("\nReverse String by words is \n%s",str);
}


int q4()
{
    char str[30];
    printf("Enter the String\n");
    fgets(str,30,stdin);

    if(str[strlen(str)-1]=='\n')
    str[strlen(str)-1]='\0';

    while(str[0]==' ' || str[strlen(str)-1]==' ')
    {
        printf("Not a valid String\nPlease,Enter String without Leading spaces from both the ends\n");
        fgets(str,30,stdin);
    }

    /*int c=count_words(str);
    printf("Total Words in the String is %d\n",c);*/
    reverse_words(str);
}        


/*

        if(new_J==0)
        {
            for(j=new_J;str[j]!=' ';j++)
            {
                int temp=str[j];
                str[j]=str[index+j];
                str[index+j]=temp;
            }
            L=index-1;
            new_J=j+1;
        }
        else
        {
            int k=0;
            for(j=new_J;str[j]!=' ';j++)
            {
                int temp=str[j];
                str[j]=str[index+k];
                str[index+k]=temp;
                k++;
            }
            L=index-1;
            new_J=j+1;
        }

*/

void compare(char str[],char string[])
{
    int i;
    for( i=0;str[i] && string[i];i++)
    {
        if(str[i]==string[i] || (str[i]+32==string[i] || str[i]-32==string[i]))
        continue;
        else
        break;
    }

    if(str[i]==string[i])
    printf("Strings are equal\n");
    else
    printf("Strings are not equal\n");
}

int q5()
{
    char str[30],string[30];
    printf("Enter the Two Strings\n");
    fgets(str,30,stdin);
    fgets(string,30,stdin);

    if(str[strlen(str)-1]=='\n')
    str[strlen(str)-1]='\0';

    if(string[strlen(string)-1]=='\n')
    string[strlen(string)-1]='\0';

    compare(str,string);
    return 0;
}