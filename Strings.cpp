#include <iostream>
//We need to include an string library in the header file.
#include <string>

using namespace std;

int main() 
{   
    //A string variable contains a collection of characters surrounded by double quotes.
    /*
        ->creating an string variable-
        'datatype' variable_name="Data" / 'Data'
        string greeting="Hello";

        ->string concatenation-the + operator can be used between the strings to add them together to make a new concatenated string.

        for ex.
        string firstName="Vatsal";
        string secondName="Joshi";
        string fullName=firstName + secondName;
        cout<<fullName;

        ->Append-A string in cpp is actually an object which contain functions that can perform certain operations on strings.
        
        for ex.
        string firstName="Vatsal";
        string secondName="Joshi";
        string fullName=firstName.append(secondName);
        cout<<fullName;

        ->what to use? + or append
        It is up to you whether you want to use + or append(). The major difference between the two, is that the append() function is much faster. However, for testing and such, it might be easier to just use +.

        ->String Length-
        string_variable.length()
        string_variable.size()
        strlen(string_variable)

        ->String Indexing-You can access and also change an string's individual elements by referring to its index numbers inside [].
        
        for ex.
        Code:string myString="Hello";
             cout<<myString[0];
        Output: 'H'

        Code:myString[1]='J';
             cout<<myString;
        Output:HJllo

        ->Inputting an string-
        1.By cin:cin considers a space (whitespace, tabs, etc) as a terminating character, which means that it can only display a single word (even if you type many words):

            Code:
                string myName;
                cout<<"Enter your name:";
                cin>>myName;

                cout<<"Your name is "<< myName;
                return 0;

                string your_name;
                cout<<"Enter your name: ";
                cin>>your_name;
                cout<<"Your name is "<<your_name<<"\n";
        
        2.getline() function:we often use the getline() function to read a line of text. It takes cin as the first parameter, and the string variable as second.

            Code:
            string fullName;
            cout << "Type your full name: ";
            getline (cin, fullName);
            cout << "Your name is: " << fullName;
    */
    char str[]="gfg";
    cout<<str;
    //cout<<endl<<strlen(str);
    return 0;

}