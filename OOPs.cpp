
//Note->View file in full window to align the comments right.

//OOP/OOPs stand for object oriented programming.
//Need for oops->You can efficiently solve problems.OOPS concepts are very poweful.Most importantly the oop concept helps to keep the code DRY(Don't repeat yourself) and makes the code easier to modify and maintain.

/*
-The most important concepts of oops are 'classes' and 'objects'.
So with an example, lets understand...
Example 1:
    Classes->Fruits.
    Objects->Apple, Banana, Mango, etc.
Example 2:
    Classes->Cars.
    Objects->Volvo, Audi, Mercedes etc.

Definition of classes-A class is a user-defined data type that we can use in our program, and it works as an object constructor, or a "blueprint" for creating objects(in layman's terms variables of 'your' datatype).

Definition of objects-Variable of that user-defined or in-built class.

$Creating an class:-To create an class use the 'class' keyword.
For ex.
        class MyClass           // The class
        {   
            //private:  
            public:             // Access specifier
            int myNum;          // Attribute (int variable)
            string myString;    // Attribute (string variable)
        };
$Creating an object:-After creating an class, we will use that class name as the datatype to create abjects.
Syntax- ClassName object_name;
Code-  Considering the above example,
        class MyClass{...};
        int main(){
            
            MyClass myObj; //Creating an object of my class.

            myObj.myNum = 15;   //Use the dot syntax (.) to   access the class attributes.
            myObj.myString = "Some text";

            cout<<myObj.myNum<<endl;
            cout<<myObj.myString;
            return 0;
        }

-
*/

//PROGRAM EXAMPLE-1
/*
#include <iostream>
using namespace std;

//Creating an class.
class Student
{
    public:
        string first_name;
        string second_name;

};
int main()
{   
    //Object Declaration
    Student stud1, stud2;

    //This is called accessing the object
    stud1.first_name="Vatsal";
    stud1.second_name="Joshi";

    stud2.first_name="Mohit";
    stud2.second_name="Rathod";

    //Printing the objects.
    cout<<"Student name is "<<stud1.first_name<<" "<<stud1.second_name<<endl;
    cout<<stud2.first_name+" "+stud2.second_name<<endl;

    

    return 0;
    
}
*/

//PROGRAM EXAMPLE-2__(VERY BASIC)
/*#include <iostream>
using namespace std;

class Person{
    public:
        void communicate()
        {
           cout<<"Hi, there i am in the communicate function of the person class.\n";
        }

};
int main()
{
    Person per1;
    per1.communicate();

    return 0;
}*/

//PROGRAM EXAMPLE-3
/*#include <iostream>
using namespace std;

class Person{
    public:
        void communicate()
        {
           cout<<"Hi, there i am in the communicate function of the person class.\n";
        }
        void communicate(int x)
        {
            cout<<"Passed argumet was: "<<x<<endl;
        }

};
int main()
{
    Person per1;
    //per1.communicate();
    per1.communicate(2);

    return 0;
}
*/

//Access Specifier:public, private and protected.
/*
    -Public-members can be accessed from outside the class.
    -Private-members can not be accessed or viewed from outside the class.
        if still for some reason, we want to access the private members then we use get and set methods.
        Link-https://www.w3schools.com/cpp/cpp_encapsulation.asp
    -Protected-members can only be accessed through 'inherited' class.
    Code example(Working of public and private members):
        class MyClass
        {
            private:
                int x;
            public:
                int y;
        };
        int main()
        {
            MyClass obj1;
            obj1.x=10; //Not Allowed(private member)
            obj1.y=15; //Allowed(public member)
        }
    Note: By default, all members of a class are private if you don't specify an access specifier.
*/

/*
VIRTUAL FUNCITONS IN CPP
*/

//ENCAPSULATION-Toh asaan shabdo main, encapsulation hota hain ki jo chiz hame nahi dikhaani ya modify karwani toh hum usse 'private' member bana denge in a class.
/*
    Why Encapsulation?
    ->It is considered good practice to declare your class attributes as private (as often as you can). Encapsulation ensures better control of your data, because you (or others) can change one part of the code without affecting other parts
    ->Increased security of data.

    ->What if still you want to access the private member?We can perform this action by using get and set method.
        //You can refer c++inheritance access below to understand the get and set method.
*/

//INHERITANCE-
/*
    -inheritance ka matlab 'receive' karna ya 'derive'      karna.
    -In c++ it is possible to inherit the attributes and methods/functions from one class to another.
    -Inheritance concept:It has 2 categories:
        1.base class(parent)-The class inherited from.
        2.derived class(child)-The class that inherits.
    -Inheritance uses ':' to inherit from a class.
*/

//C++ Constructors:-A constructor in C++ is a special method that is automatically called when an object of a class is created.To create a constructor, use the same name as the class, followed by parentheses ():

//Note: The constructor has the same name as the class, it is always public, and it does not have any return value.

//C++ INHERITANCE ACCESS(get and set mehthod for protected members)
/*
#include<iostream>
using namespace std;

//base class.
class Employee
{
    protected:
        int salary;
};
//derived class.
class programmer: public Employee{
    public:
        int bonus;
        void setSalary(int s)
        {
            salary=s;
        }
        int getsalary()
        {
            return salary;
        }

};
int main()
{
    programmer obj1;
    obj1.setSalary(50000);
    obj1.bonus=5000;

    cout<<"Salary is "<<obj1.getsalary()<<endl;
    cout<<"Bonus is "<<obj1.bonus<<endl;
    return 0;
}
*/

//POLYMORPHISM
//Link-https://www.w3schools.com/cpp/cpp_polymorphism.asp
/*
-It means 'many forms' and it occurs when we have many classes that are related to each other through inheritance.
-Polymorphism uses the inherited attributes and methods to perform different tasks.

-Example:think of a base class called Animal that has a method called animalSound(). Derived classes of Animals could be Pigs, Cats, Dogs, Birds - And they also have their own implementation of an animal sound (the pig oinks, and the cat meows, etc.)

        // Base class
        class Animal {
            public:
                void animalSound() {
                cout << "The animal makes a sound \n" ;
            }
        };

        // Derived class
        class Pig : public Animal {
            public:
                void animalSound() {
                cout << "The pig says: wee wee \n" ;
            }
        };

        // Derived class
        class Dog : public Animal {
            public:
                void animalSound() {
                cout << "The dog says: bow wow \n" ;
            }
        };

        int main() 
        {
            Animal myAnimal;
            Pig myPig;
            Dog myDog;

            myAnimal.animalSound(); //O/P:The animal makes a sound
            myPig.animalSound(); //The pig says: wee wee
            myDog.animalSound(); //The dog says: bow wow
            return 0;
        }
*/