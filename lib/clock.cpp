#include "clock.hpp"

/*
 * This one does what the name says on the tin.
 * This is supposed to be human readable for string injection.
 */
int getyear(int day)
{
    int year = 2209;
    while(day >= 365)
    {
        year++;
        day -= 365;
    }
    return year;
}

/*
 * This one does what the name says on the tin.
 * This is supposed to be human readable for string injection.
 */
string getnameofmonth(int day)
{
    int i;
    const string monthsofyear[12] { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
    const int daysinmonth[12] { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    
    day++; // Computers count from zero. People do not.
    for(i = 0; day > daysinmonth[i]; i++)
    {
        day -= daysinmonth[i];
    }
    return monthsofyear[i];
}

/*
 * This one does what the name says on the tin.
 * This is supposed to be human readable for string injection.
 */
int getdayofmonth(int day)
{
    int i;
    const int daysinmonth[12] { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    day++; // Computers count from zero. People do not.
    for(i = 0; day > daysinmonth[i]; i++)
    {
        day -= daysinmonth[i];
    }
    return day;
}

/*
 * This one does what the name says on the tin.
 * This is supposed to be human readable for string injection.
 * Strangely no offset fudging required.
 */
string getnameofday(int day)
{
    const string daysofweek[7] { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };
    return daysofweek[day % 7];
}

/*
 * This one gets us a full string to assemble for a day.
 * Havint it as one function will make for cleaner code in the future.
 */
string getfulldate(int day)
{
    string str = getnameofday(day) + ", " + getnameofmonth(day % 365) + " " + to_string(getdayofmonth(day % 365)) + " " + to_string(getyear(day));
    return str;
}
