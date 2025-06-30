#include <iostream>

// // Class template for a generic Pair
 template <typename T1, typename T2>
 class Pair {
 public:
     Pair(T1 first, T2 second) : firstValue(first), secondValue(second) {}

     void display() const {
         std::cout << "Pair: (" << firstValue << ", " << secondValue << ")\n";
     }

 private:
     T1 firstValue;
     T2 secondValue;
 };

 int main() {
//     // Creating instances of Pair with different types
     Pair<int, double> intDoublePair(3, 4.5);
     Pair<std::string, char> stringCharPair("Hello", 'C');

//     // Displaying the pairs
     intDoublePair.display();
     stringCharPair.display();
     return 0;
}