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
    cout << "\t Unnamed Game Function Test" << endl;
    cout << "Only the clock library is partially implemented." << endl;
    cout << "Please enter a day of the year and the system will figure it out." << endl;
    do
    {
        cin >> day;
        cout << getfulldate(day) << endl;
    }while( day != -1);
    return 0;
}
