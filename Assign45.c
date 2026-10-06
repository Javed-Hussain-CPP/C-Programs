#include<stdio.h>
#include<string.h>

struct timeperiod
{
    int hours,minutes,seconds;
};

struct timeperiod calculate_diffrence(struct timeperiod t1, struct timeperiod t2)
{
    struct timeperiod diff;
    if(t1.minutes<t2.minutes)
    {
        t1.minutes=60+t1.minutes;
        t1.hours=t1.hours-1;
    }
    if(t1.seconds<t2.seconds)
    {
        t1.seconds=60+t1.seconds;
        t1.minutes=t1.minutes-1;
    }
    diff.hours=t1.hours-t2.hours;
    diff.minutes=t1.minutes-t2.minutes;
    diff.seconds=t1.seconds-t2.seconds;

    return diff;
}

int q1()
{
    struct timeperiod t1,t2;
    printf("Enter Two Diffrent Time Periods\n");
    scanf("%d %d %d",&t1.hours,&t1.minutes,&t1.seconds);
    scanf("%d %d %d",&t2.hours,&t2.minutes,&t2.seconds);
    while(1)
    {
        if((t1.hours<0 || t1.hours>24)) 
        {
            printf("Enter 0 to 24 range values for hours for first Time Period\n");
            scanf("%d",&t1.hours);
        }
        else if((t2.hours<0 || t2.hours>24))
        {
            printf("Enter 0 to 24 range values for hours second Time Period\n");
            scanf("%d",&t2.hours);
        }
        else if((t1.hours>=0 && t1.hours<=24) && (t2.hours>=0 && t2.hours<=24))
        break;
    }

    while(1)
    {
        if((t1.minutes<0 || t1.minutes>60)) 
        {
            printf("Enter 0 to 60 range values for minutes for first Time Period\n");
            scanf("%d",&t1.minutes);
        }
        else if((t2.minutes<0 || t2.minutes>60))
        {
            printf("Enter 0 to 60 range values for minutes for second Time Period\n");
            scanf("%d",&t2.minutes);
        }
        else if((t1.minutes>=0 && t1.minutes<=60) && (t2.minutes>=0 && t2.minutes<=60))
        break;
    }

       while(1)
    {
        if((t1.seconds<0 || t1.seconds>60)) 
        {
            printf("Enter 0 to 60 range values for minutes for first Time Period\n");
            scanf("%d",&t1.seconds);
        }
        else if((t2.seconds<0 || t2.seconds>60))
        {
            printf("Enter 0 to 60 range values for minutes for second Time Period\n");
            scanf("%d",&t2.seconds);
        }
        else if((t1.seconds>=0 && t1.seconds<=60) && (t2.seconds>=0 && t2.seconds<=60))
        break;
    }
    
    if(t1.hours<t2.hours)
    {
        struct timeperiod temp;
        temp=t1;
        t1=t2;
        t2=temp;                                                       // hours
    }                                // agar 1st time period greater ho (3<2).
    else if(t1.minutes<t2.minutes && t1.hours==t2.hours)  // (15<25) // minutes
    {                                // and minutes less ho tab use hoga.
        struct timeperiod temp;
        temp=t1;
        t1=t2;
        t2=temp;
    }
    else if(t1.seconds<t2.seconds && t1.hours==t2.hours)
    {
        struct timeperiod temp;
        temp=t1;
        t1=t2;
        t2=temp;
    }
    
    struct timeperiod diff=calculate_diffrence(t1,t2);
    printf("Diffrence of two Time Periods is %d:%d:%d",diff.hours,diff.minutes,diff.seconds);
}

// question 2. //

struct StdInfo
{
    char name[30];
    int rollno;
    char class_name[5];
    char section;
};

void display_StdInfo(struct StdInfo std[],int n)
{
    for(int i=0;i<n;i++)
    printf("\nname - %sroll no. - %d\nclass - %s\nsection -%c\n",std[i].name,std[i].rollno,std[i].class_name,std[i].section);
}

struct StdInfo inputStdInfo(int i)
{
    fflush(stdin); // to clear the buffer because
    struct StdInfo std; // of main() scanf();
    printf("Enter the information of %d students\n",i+1);
    fgets(std.name,30,stdin);
    scanf("%d",&std.rollno);
    fflush(stdin);
    fgets(std.class_name,6,stdin);
    std.class_name[strlen(std.class_name)-1]='\0';
    scanf("%c",&std.section);
    fflush(stdin);
    return std;
}

int q3()
{
    int n;
    printf("Enter total no. of Students\n");
    scanf("%d",&n);
    struct StdInfo std[n];
    for(int i=0;i<n;i++)
    std[i]=inputStdInfo(i);
    // sabse best tarika through array without return //

    display_StdInfo(std,n);
}

int q2()
{
    struct StdInfo std[3]; // declaration of (structure variable [array]) //
    for(int i=0;i<3;i++)
    std[i]=inputStdInfo(i);

    /*printf("Enter the information of 3 students\n");
    for(int i=0; i<3;i++)
    {
        fgets(std[i].name,30,stdin);
        scanf("%d",&std[i].rollno);
        fflush(stdin);
        fgets(std[i].class_name,6,stdin);
        std[i].class_name[strlen(std[i].class_name)-1]='\0';
        scanf("%c",&std[i].section);
        fflush(stdin);
    }*/

    display_StdInfo(std,3); // array likhne ka matlab as good as (&std[0]) //
}

// question 4. //

struct marks
{
    int roll_no;
    char name[20];
    int chem_marks,maths_marks,phy_marks;
};

void student_info(struct marks student[],int size)
{
    printf("enter the Information of 5 Students\n");
    for(int i=0; i<size; i++)
    {

        printf("enter roll no. and name of student %d\n",i+1);
        scanf("%d",&student[i].roll_no);
        getchar();
        fgets(student[i].name,20,stdin);
        student[i].name[strlen(student[i].name)-1]='\0';
        printf("\n");
    }
}

void display_percentage(struct marks student[],int i,float percent)
{
    printf("percentage of %s student %d is %.2f\n",student[i].name,i+1,percent);
}

float calculate_percentage(struct marks student[],int i)
{
    float percent=(student[i].chem_marks + student[i].maths_marks + student[i].phy_marks)/3.0;
    return percent;
}

int main()
{
    struct marks student[5];
    student_info(student,5);
    printf("enter marks of 5 students\n");
    for(int i=0; i<5; i++)
    {
        printf("enter %d student marks of chemistry,maths and physics\n",i+1);
        scanf("%d %d %d",&student[i].chem_marks,&student[i].maths_marks,&student[i].phy_marks);
    }

    printf("\n");

    for(int i=0; i<5; i++)
    {
        float percent=calculate_percentage(student,i);
        display_percentage(student,i,percent);
    }
}

float percentage(struct Marks m)
{
    return (m.chem_marks+m.maths_marks+m.phy_marks)/3.0;
}

void f4()
{
    struct Marks m[5];
    int i;
    for(i=0;i<=4;i++)
    {
        m[i]=inputMarks();
    }
    for(i=0;i<=4;i++)
    {
        printf("%d %s %f",m[i].rollno,m[i].name,percentage(m[i]));
    }
}