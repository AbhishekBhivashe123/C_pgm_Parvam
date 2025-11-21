#include<stdio.h>
int main()
{
    int day;
    printf("Enter day number (1-7): ");
    scanf("%d", &day);
    switch(day)
    {
        case 1:
        printf("monday\n");
        break;
        case 2:
        printf("tuesday\n");
        break;
        case 3:
        printf("wednesday\n");
        break;
        case 4:
        printf("Thursday\n");
        break;
        case 5:
        printf("Friday\n");
        break;
        case 6:
        printf("Saterday\n");
        break;
        case 7:
        printf("Sunday\n");
        break;
        default:
        printf("Invalid day number\n");
        
    }
    return 0;
}