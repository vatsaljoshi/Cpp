//Switch statements in cpp.Using switch statements to select and execute one of many code blocks.
/*
Syntax:
    switch(expressino)
    {
        case x:
            //code block
        case y:
            //code block
        case z:
            //code block
        default:
            //if none of above cases are true then run this...
    }

    Notes-
        -switch expression is evaluated only once.
        -the value of expression is compared with each case.
        -if there seems a match, then that matched case then executes.
        -default is only ran when none of the cases are matched.

*/
#include "iostream"
using namespace std;

int main()
{
    int day = 4;
switch (day) {
  case 1:
    cout << "Monday";
    break;
  case 2:
    cout << "Tuesday";
    break;
  case 3:
    cout << "Wednesday";
    break;
  case 4:
    cout << "Thursday";
    break;
  case 5:
    cout << "Friday";
    break;
  case 6:
    cout << "Saturday";
    break;
  case 7:
    cout << "Sunday";
    break;
}
// Outputs "Thursday" (day 4)
}