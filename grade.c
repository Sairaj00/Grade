#include<cs50.h>
#include<stdio.h>

int main (void)
{
    int marks = get_int("what's your marks:");
    if (100 >=  marks && marks > 90)
    {
        printf("Grade:A\n");
    }
    else if (90>= marks && marks >80)
    {
        printf ("Grade:B\n");
    }
    else if (80>= marks && marks >70)
    {
        printf("Grade:C\n");
    }
    else if (70>= marks && marks >60)
    {
        printf("Grade:D\n");
    }
    else if (60>= marks )
    {
        printf("Grade:Fail\n");
    }

    if (marks>100)
    {
        printf("you cannot get above hundred\n");

    }
}


