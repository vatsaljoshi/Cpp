#include <iostream>
using namespace std;

int main()
{
    int n=10;
    int *ptr=&n;

    cout<<"The value of n is: "<< n <<endl;
    cout<<"The value of pointer is: "<< *ptr <<endl;
    cout<<"The address of the n is : "<< &n <<endl;
    cout<<"The "
    return 0;
}