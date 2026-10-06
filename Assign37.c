#include<stdio.h>
#include<string.h>

int count_vowels(char str[])
{
    char vowels[]="aeiou";
    int i,j,count=0;
    for ( i = 0; str[i] ; i++)
    {
        for ( j = 0; vowels[j] ; j++)
        {
            if(str[i]==vowels[j])
            count++;
        }
    }
    return count;
}

int find_char(char str[],char ch)
{
    int i;
    for(i=0;str[i];i++)
    {
        if(str[i]==ch)
        return i+1;
    }
    return -1;
}

void find_char_between_specified_indices(char str[],int start,int end)
{
    for(int i=0;str[i];i++)
    {
        if(i>=start && i<end)
        printf("%c",str[i]);
    }
}

void swap_characters(char str[],int first_index,int second_index)
{
    int temp=str[first_index];
    str[first_index]=str[second_index];
    str[second_index]=temp;
}

int check(char str[])
{
    int alpha=0,numeric=0;
    for(int i=0;str[i];i++)
    {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='z'))
        alpha++;
        else if(str[i]!=' ')
        numeric++;
    }
    if(alpha!=0 && numeric!=0)
    return 1;
    else
    return 0;
}

int main()
{
    char str[30];
    printf("Enter the string\n");
    fgets(str,30,stdin);
    if(strlen(str)<30-1)
    str[strlen(str)-1]='\0';

    if(check(str))
    printf("Yes, the string is Alphanumeric\n");
    else
    printf("No, the string is not Alphanumeric\n");
}

int q2()
{
    char str[30];
    printf("Enter a String\n");
    fgets(str,20,stdin);

    printf("Original String %s\n",str);

    int s,e;

    /*printf("Enter Start Index and End Index\n");
    scanf("%d%d",&s,&e);*/

    printf("Enter Indices which you want to swap\n");
    scanf("%d%d",&s,&e);


    //find_char_between_specified_indices(str,s,e);
    swap_characters(str,s,e);
    printf("After Swapping the String is %s",str);

    return 0;
}

int q1()
{
    char str[30];
    printf("Enter the String\n");
    fgets(str,20,stdin);

    char ch;
    printf("Enter a Character\n");
    scanf("%c",&ch);

    int index=find_char(str,ch);

    if(index!=-1)
    printf("Given Character Index is %d",index);
    else
    printf("Character Not Found");

    /*int count=count_vowels(str);
    printf("Total Vowels in this String is %d",count);*/

    return 0;
}