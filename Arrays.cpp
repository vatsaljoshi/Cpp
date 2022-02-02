//Arrays:Arrays are the continuous locations used to store multiple values of the same datatype.
#include<iostream>
using namespace std;

int main()
{
    //Array declaration.-> datatype array_name[size];
    //float arr[5];
    int arr1[]={1,2,3,4,5};

    //Input user-defined elements.
    /*
    for (int i=0;i<5;i++)
    {
        cin>>arr1[i];
    }
    */

    //Printing of an array (using loops).
    for (int i=0;i<5;i++)
    {
        cout<<arr1[i];
    }
    return 0;

}