#include <iostream>
 using namespace std;

 // Class definition for Counter
 class Counter {
 public:
     Counter();              // Initialization
     int getCount();          // Get the current count
     void increaseBy(int x);  // Add x to the count

 private:
    
     int count;               // The counter’s value
 };

 // Constructor for Counter
 Counter::Counter() {
     count = 0;  // Initializes the counter to zero
 }

 // Get the current count
 int Counter::getCount() {
     return count;
 }

 // Add x to the count
 void Counter::increaseBy(int x) {
     count += x;
 }

 int main() {
     Counter ctr;                  // An instance of Counter

     cout << ctr.getCount() << endl; // Prints the initial value (0)

     ctr.increaseBy(3);               // Increase by 3

     cout << ctr.getCount() << endl; // Prints 3

     ctr.increaseBy(5);               // Increase by 5

     cout << ctr.getCount() << endl; // Prints 8

     // cout << ctr.count << endl; // ILLEGAL - count is private

     return 0;
}