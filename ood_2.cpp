#include <iostream>

 class Person {
 public:
     void print() {
         std::cout << "Person::print()" << std::endl;
     }
 };

 class Student : public Person {
 public:
     void print() {
         std::cout << "Student::print()" << std::endl;
     }
 };

 int main() {
     Person* pp[100]; // array of 100 Person pointers
     pp[0] = new Person(); // add a Person 
     pp[1] = new Student(); // add a Student 

     pp[0]->print(); // calls Person::print() (static binding)
     pp[1]->print(); // calls Person::print() (static binding)

     delete pp[0]; // clean up memory
     delete pp[1]; // clean up memory

     return 0;
}