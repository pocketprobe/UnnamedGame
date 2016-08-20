/*
 * These are the game time functions. Something simple for determining time of day are in here.
 * 
 * 
 * 
 */

/*
 * Includes
 * 
 */
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

/*
 * Namespace stuffs
 * 
 */
using std::cout;
using std::cin;
using std::string;
using std::endl;
using std::to_string;

/*
 * Let's name our functions here.
 * 
 */
int getyear(int day);
string getnameofmonth(int day);
int getdayofmonth(int day);
string getnameofday(int day);
string getfulldate(int day);
