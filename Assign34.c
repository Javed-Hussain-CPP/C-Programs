#include<stdio.h>
int q1()
{
    char str[5];
    int l=0,i;
    printf("Enter the String\n");
    fgets(str,5,stdin);
    for ( i = 0; str[i] ;i++)
    l++;

    if((l==(5-1) && str[5-2]=='\n') || l<(5-1))
    {
        if(str[l-1]=='\n')
        str[l-1]='\0';
        l--;
    }

    for(i=0;str[i];i++)
        printf("%c %d\n",str[i],str[i]);
    printf("%s\n",str);

    if(l==(5-1))
    printf("Length of %s is %d",str,l);
    else
    printf("Length of %s is %d",str,l);

    return 0;
    
}

//if(str[l-1]=='\n') // iski wajah se [char array] m string 
    //str[l-1]='\0';  // se '\n' ki jagah null character aa jaega //

/*int calculate_length(char str)
{
    int l;
    for(l=0;str[l];l++);
    return l-1;
}*/

int q2()
{
    char ch,str[20];
    int i,count=0;//,length=0;
    printf("Enter the String\n");
    fgets(str,20,stdin);

    /*for(i=0;str[i];i++)
    length++;
    
    if((length==(20-1) && str[20-2]=='\n') || length<(20-1))
    {
        if(str[length-1]=='\n')
        str[length-1]='\0';
        length--;
    }*/

    fflush(stdin); // buffer ko clean karne ke liye safer side ke liye, agar clean nhi hai toh ye likhne se buffer clean hojaega //

    printf("Enter the character to know it's occurence\n");
    scanf("%c",&ch);

    for(i=0; str[i] ; i++)
    {
        if(str[i]==ch)
        count++;
    }

    printf("Total occurence of %c is %d\n",ch,count);

    return 0;
    
}

int q3()
{
    char vowels[]="aeiouAEIOU",str[20];
    int i,j,count=0,length=0;
    printf("Enter the String\n");
    fgets(str,20,stdin);

    for(i=0;str[i];i++)
    length++;
    
    if((length==(20-1) && str[20-2]=='\n') || length<(20-1))
    {
        if(str[length-1]=='\n')
        str[length-1]='\0';
        length--;
    }

    for(i=0; str[i] ; i++)
    {
        for(j=0;vowels[j];j++)
        {
            if(str[i]==vowels[j])
            count++;
            break;
        }
    }

    printf("Total vowels in %s is %d\n",str,count);

    return 0;
    
}

int q4()
{
    char str[20];
    int i,count=0,length=0;
    printf("Enter the String\n");
    fgets(str,20,stdin);

    for(i=0;str[i];i++)
    length++;
    
    if((length==(20-1) && str[20-2]=='\n') || length<(20-1))
    {
        if(str[length-1]=='\n')
        str[length-1]='\0';
        length--;
    }

    for(i=0; str[i] ; i++)
    {
        if(str[i]==' ')
        count++;
    }

    printf("Total spaces in %s is %d\n",str,count);

    return 0;
    
}

int main()
{
    char uppercase[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ",str[30];
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
        for(j=0; uppercase[j]; j++)
        {
            if(str[i]-uppercase[j]==32)
            str[i]=uppercase[j];
        }
    }

    printf("Uppercase conversion is %s\n",str);

    return 0;
    
}