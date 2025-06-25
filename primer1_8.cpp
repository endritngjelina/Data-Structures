#include <iostream>

 // Define a structure named 'Person'
 struct Person {
     // Member variables (fields or attributes)
     std::string name;
     int age;
     double height;
 };

 int main() {
     // Declare a pointer to a 'Person' structure
     Person* ptrPerson = new Person;

     // Access and modify the member variables using the -> notation
     ptrPerson->name = "Jane";
     ptrPerson->age = 30;
     ptrPerson->height = 162.0;

     // Print the information using the pointer and -> notation
     std::cout << "Person Information (using -> notation):" << std::endl;
     std::cout << "Name: " << ptrPerson->name << std::endl;
     std::cout << "Age: " << ptrPerson->age << std::endl;
     std::cout << "Height: " << ptrPerson->height << " cm" << std::endl;

     // Don't forget to deallocate memory for the dynamically allocated structure
     delete ptrPerson;

     return 0;
}