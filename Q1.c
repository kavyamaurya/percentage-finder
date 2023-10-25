//Write a program in C, that asks from user to enter marks obtained in 5 subjects (out of 100) and find the percentage marks of student

#include <stdio.h>
int main()
{
    int phy, chem, eng, math, cs; 
    float per; 

    printf("Enter Marks for Phy: \n");
    scanf("%d", &phy);

    printf("Enter Marks for Chem: \n");
    scanf("%d", &chem);

    printf("Enter Marks for Eng: \n");
    scanf("%d", &eng);

    printf("Enter Marks for math: \n");
    scanf("%d", &math);

    printf("Enter Marks for cs: \n");
    scanf("%d", &cs);

    per = (phy + chem + eng + math + cs) / 5.0;

    printf("Percentage = %.2f\n", per);

    return 0;
}