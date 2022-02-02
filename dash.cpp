/*
/in cpp(c plus plus) the syntax changes a little bit but the logic and the working remains the same just like 'c'. 

Here printf(print function) becomes cout
scanf(scan function) becomes cin
and the header files change from stdio(standard input-output) to iostream, and 'namespace std' is wrote to use the cout and cin off the language.
*/

#include <iostream>
using namespace std;

int main(){
        //Just like c lang u need to declare an variable before using it.
        //in the basic format of ' datatype variable_name ; '
        int x,i;
        
        //Comments(single line comment)
        /*
        Multi-Line comment 
        */

        //Printing
        cout<<"This gets printed.";
        //here '<<' is the insertion operator and '>>' is the extraction operator.
        
        //Input
        cout<<"Enter an number:";
        cin>>x;

        //Escape sequence-endl(it also flushes the buffer),\n, 
        cout<<"Line gets"<<endl<< "changed here";
        
        //Example of the how an basic program works-
        /*
            #include <iostream>
            using namespace std;

            int main(){
                int x, y;
                cout<<"Enter an number x:";
                cin>>x;

                cout<<"Enter an number y:";
                cin>>y;

                cout<<"Multiplication of x and y is "<<(x*y);
                return 0;
            }
        */

        
    return 0;
}
