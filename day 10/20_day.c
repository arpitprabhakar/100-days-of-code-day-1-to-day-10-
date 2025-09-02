//Write a program to display the day of the week based on a number (1–7) using switch-case.
#include<stdio.h>
int main()
{
    char operator;
    printf("Enter the day of the week :");
    scanf(" %c",&operator);
    switch(operator)
    {
    case '1':
        printf("Its sunday");
        break;

    case '2':
        printf("Its monday");
        break;
    
    case '3':
        printf("Its tuesday");
        break;        
    
    case '4':
        printf("Its wednesday");
        break;
    
    case '5':
        printf("Its thursday");
        break;

    case '6':
        printf("Its friday");
        break;
    
    case '7':
        printf("Its saturday");
        break;
    }
    return 0;
}