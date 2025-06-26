#include <iostream>
 void add(int* a, int* b)
 {
     std::cout << "sum = " << (*a + *b)<< std::endl;
 }

 void add(double* a, double* b)
 {
     std::cout << std::endl << "sum = " << (*a + *b)<< std::endl;
 }

 int main()
 {
     int int1 = 10, int2 = 2;
     double double1 = 5.3, double2 = 6.2;

     add(&int1, &int2);
     add(&double1, &double2);

     return 0;
}