#include <iostream>

 int main() {
     const int size = 5;

     // Declare an array of integers
     int numbers[size] = {10, 20, 30, 40, 50};

     // Declare a pointer to an integer and assign the address of the array
     int* ptr = numbers;

     // Access and print array elements using pointer notation
     std::cout << "Array elements using pointers:" << std::endl;
     for (int i = 0; i < size; ++i) {
         std::cout << "Element " << i << ": " << *(ptr + i) << std::endl;
     }

     // Modify array elements through the pointer
     for (int i = 0; i < size; ++i) {
         *(ptr + i) *= 2;  // Double the value of each element
     }

     // Print the modified array using array notation
     std::cout << "\nModified array elements:" << std::endl;
     for (int i = 0; i < size; ++i) {
         std::cout << "Element " << i << ": " << numbers[i] << std::endl;
     }

     return 0;
}