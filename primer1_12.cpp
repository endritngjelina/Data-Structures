#include <iostream>
#include <cstring>

 // Function prototype
 void swapStrings(char*&, char*&);

 int main() {
     char str1[] = "Hello";  // Initialize a character array with the string "Hello"
     char str2[] = "World";  // Initialize a character array with the string "World"
     char* pstr1 = str1;     // Create a pointer pstr1 and make it point to the start of str1
     char* pstr2 = str2;     // Create a pointer pstr2 and make it point to the start of str2

     std::cout << "Before swap:" << std::endl;
     std::cout << "str1: " << str1 << std::endl;
     std::cout << "str2: " << str2 << std::endl;

     swapStrings(pstr1, pstr2); // Call the swapStrings function, passing the pointers by reference

     std::cout << "After swap:" << std::endl;
     std::cout << "str1: " << pstr1 << std::endl; // Print the string that pstr1 points to
     std::cout << "str2: " << pstr2 << std::endl; // Print the string that pstr2 points to

     return 0;
}

void swapStrings(char*& ptr1, char*& ptr2) {
    char* temp = ptr1; // Create a temporary pointer and store the value of ptr1 in it
    ptr1 = ptr2; // Store the value of ptr2 in ptr1 (swapping the pointers)
    ptr2 = temp; // Store the original value of ptr1 (now in temp) in ptr2
}