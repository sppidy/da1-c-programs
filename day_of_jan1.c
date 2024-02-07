#include <stdio.h>
int main()
{
    int base_yr=1900,yr,leap=0,yr_diff,total_days=0,day=0;
    printf("Enter year: ");
    scanf("%d",&yr);
    yr_diff=yr-base_yr;
    while(base_yr<yr)
    {
        if(base_yr%100==0)
        {
            if(base_yr%400==0)
            {
                leap++;
            }
        }
        else if(base_yr%4==0)
        {
            leap++;
        }
        base_yr++;
    }
    total_days=(yr_diff-leap)*365+leap*366;
    day=(total_days%7);
    switch (day)
    {
    case 0:
        printf("Monday");
        break;
    case 1:
        printf("Tuesday");
        break;
    case 2:
        printf("Wednesday");
        break;
    case 3:
        printf("Thursday");
        break;
    case 4:
        printf("Friday");
        break;
    case 5:
        printf("Saturday");
        break;
    case 6:
        printf("Sunday");
        break;
    default:
        printf("Something Went Wrong!");
        break;
    }
}