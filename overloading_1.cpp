#include <iostream>
 #include <string>

 template <typename T>
 class BasicVector {
 public:
     BasicVector(int capac = 10);
     T& operator[](int i) {
         return a[i];
     }
     ~BasicVector() {
         delete[] a; // release allocated memory
     }

 private:
     T* a;
     int capacity;
 };

 template <typename T>
 BasicVector<T>::BasicVector(int capac) {
     capacity = capac;
     a = new T[capacity]; // allocate array storage
 }

 int main() {
     BasicVector<int> iv(5);     // vector of 5 integers
     BasicVector<double> dv(20); // vector of 20 doubles
     BasicVector<std::string> sv(10); // vector of 10 strings

//     // Accessing and modifying elements
     iv[0] = 1;
     dv[1] = 3.14;
     sv[2] = "Hello";

//     // Displaying elements
     std::cout << iv[0] << std::endl;
     std::cout << dv[1] << std::endl;
     std::cout << sv[2] << std::endl;

     return 0;
}