/*
Given a Number N corresponding to a person's age (in days). Print his age in years,
months and days, followed by its respective message "years", "months", "days".

Note: consider the whole year has 365 days and 30 days per month.
*/

#include <stdio.h>
int main()
{
    int days;
    scanf("%d", &days);
    int year = days / 365;
    int total_days = days % 365;
    int month = total_days / 30;
    int day = total_days % 30;
    printf("%d years\n%d months\n%d days\n", year, month, day);
    return 0;
}