/*
 * Rabble rabble, these are basic includes.
 * This is a very early main.cpp
 * 
 * 
 */
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "lib/clock.hpp" //FIXME: Makefile and a search path.

using std::cout;
using std::cin;
using std::string;
using std::endl;

int main()
{
    int day = 0;
    do
    {
        cout << "Today is " << getnameofday(day) << " " << getnameofmonth(day) << " " << getdayofmonth(day) << endl;
        cout << "Change Day? ";
        cin >> day;
        cout << endl;
    }while( day != -1);
    return 0;
}
