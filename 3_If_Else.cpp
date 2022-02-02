//If-else is an statement to specify a block of code to run only if the condition is true.

/*
Syntax;
    simple if statement;
        if (condition){
            //true statement
        }
    
    if-else statement:
        if (condition){
         //true statement
        }
        else{
         //false statement
        }

    if-else chain or if-else ladder
        if (condition){

        }
        else{
            if(condition){

            }
            else{
                
            }
        }
*/

#include "iostream" //instead of <iostream>, works.
using namespace std;

int main()
{
    int a=10; //declared a variable and initialized it with value 10.
    if (a>5) //condition inside parenthesis.
    {
        //run this block, if condition is true.
        cout<<"'a' is greater than 5.\n";
    }
    else{
        //else do this.
        cout<<"'a' is smaller than 5.\n";
    }
    return 0;
}

//Programs you can try- even/odd,positive/negative/zero,or its alternate modifications.