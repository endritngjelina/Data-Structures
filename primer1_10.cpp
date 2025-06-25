#include <iostream>

 // Function that modifies a variable passed by value
 void passByValue(int x) {
     x = 10;
 }

 // Function that modifies a variable passed by reference
 void passByReference(int &x) {
     x = 20;
 }

 int main() {
     int num1 = 5;
     int num2 = 7;

     // Demonstrate pass by value
     std::cout << "Before passByValue: num1 = " << num1 << std::endl;
     passByValue(num1);
     std::cout << "After passByValue: num1 = " << num1 << std::endl;

     // Demonstrate pass by reference
     std::cout << "\nBefore passByReference: num2 = " << num2 << std::endl;
     passByReference(num2);
     std::cout << "After passByReference: num2 = " << num2 << std::endl;

     return 0;
}

//As you can see, changes made to the parameter inside passByValue do not affect the original variable, 
//while changes made inside passByReference directly modify the original variable. 
//Passing by reference is often used when you want a function to modify the original value of a variable.*/
