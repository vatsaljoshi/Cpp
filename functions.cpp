/*#include <iostream>
using namespace std;

void func1()
{
    cout<<"Inside function 1.\n";
}
void func2()
{
    cout<<"Inside function 2.\n";
}
int main(){
    
       cout<<"Execution begins from main.\n";
       func1();
       func2();
       cout<<"Both functions executed successfully\n";
       return 0;
}
//------------------------------------------------------//
//another example of an function.
int myMax(int a, int b)
{
    if(a>b)
    {
        return a;
    }
    return b;
}
int main()
{
    cout<<myMax(20,10);//here 20'll get printed
    cout<<myMax(10,20);//here 10'll get printed
    return 0;
}

/*
-here void is used to denote that,that respective function does not return something.
-a return statement stops the execution of an function.
-prefer 'int' for the main function.
-just visualize how an program is working and work upon your logic.
-writing an return statement at the end of the function does not necessarily change anything because it is already the end of the function execution.But return statement somewhere in the middle of the function can and do change the output.
-you can declare the variable at the function declaration (or the argument part). 
-the most obvious use of functions is that you do not need to write an particular code again and again.you can just create an function that does the job and call it again and again.
-code maintenance, reusability, understanding the flow of the program, they make code modular(like creating an separate input function, processing and output function i.e. in modules).
-abstraction-in library function we do not need to worry about how that function work internally.
*/ 

//Advanced Placement Questions on Functions.
/*
-Sum of first 'n' natural numbers.[[n(n+1)]/2]
    #include<iostream>
    using namespace std;

    int sum(int n)
    {
        int sum=0;
        for (int i=1;i<=n;i++)
        {
            sum+=i;
        }
        return answer;
    }
    int main()
    {
        int n;
        cin>>n;
        cout<<sum(n)<<endl;
        return 0;
    }*/
-Check Pythagorean Triplet.

