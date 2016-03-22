/*
Steven Billington
January 17, 2003
exDice.cpp
Program rolls two dice with random
results.
*/
/*
Header: iostream
Reason: Input/Output stream
Header: stdlib
Reason: For functions rand and srand
Header: time.h
Reason: For function time, and for data type time_t
*/
#include <iostream>
#include <cstdlib>
#include <time.h>
/*
These constants define our upper
and our lower bounds. The random numbers
will always be between 1 and 6, inclusive.
*/
const int LOW = 1;
const int HIGH = 6;

using namespace std;

int main()
{
/*
Variables to hold random values
for the first and the second die on
each roll.
*/
int first_die, sec_die;
/*
Declare variable to hold seconds on clock.
*/
time_t seconds;
/*
Get value from system clock and
place in seconds variable.
*/
time(&seconds);
/*
Convert seconds to a unsigned
integer.
*/
srand((unsigned int) seconds);
/*
Get first and second random numbers.
*/
first_die = rand() % (HIGH - LOW + 1) + LOW;
sec_die = rand() % (HIGH - LOW + 1) + LOW;
/*
Output first roll results.
*/
cout<< "Your roll is (" << first_die << ", "
<< sec_die << "}" << endl << endl;
/*
Get two new random values.
*/
first_die = rand() % (HIGH - LOW + 1) + LOW;
sec_die = rand() % (HIGH - LOW + 1) + LOW;
/*
Output second roll results.
*/
cout<< "My roll is (" << first_die << ", "
<< sec_die << "}" << endl << endl;
return 0;
}