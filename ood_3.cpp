#include <iostream>

class Person {
 public:
     virtual void print() {
         std::cout << "Person::print()" << std::endl;
     }
 };

 class Student : public Person {
 public:
     virtual void print()  {
         std::cout << "Student::print()" << std::endl;
     }
 };

 int main() {
     Person* pp[100]; // array of 100 Person pointers

     pp[0] = new Person(); // add a Person (details omitted)
     pp[1] = new Student(); // add a Student (details omitted)

     pp[0]->print(); // calls Person::print()
     pp[1]->print(); // calls Student::print()

     delete pp[0]; // clean up memory
     delete pp[1]; // clean up memory
     return 0;
 }

/*
In C++, static binding (also known as early binding or compile-time binding) occurs when the function 
to be called is determined at compile time based on the static type of the object. 
On the other hand, dynamic binding (also known as late binding or run-time binding) 
occurs when the function to be called is determined at runtime based on the actual type of the object.
*/

/*
A virtual function in C++ is a member function of a class that can be 
overridden by a function with the same signature in a derived class. 
Virtual functions enable polymorphism, allowing objects of different derived classes to be 
treated as objects of the base class. This means that the 
appropriate function is called based on the actual type of the object at runtime, achieving dynamic binding.
*/