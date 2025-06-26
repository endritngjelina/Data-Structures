#include <iostream>
 #include <string>

 enum MealType {
     VEG,
     NON_VEG,
     OTHER
 };

 class Passenger {
 public:
     Passenger();
     Passenger(const std::string& newName, MealType newMealPref);
    
     bool isFrequentFlyer() const;
     void makeFrequentFlyer(const std::string& newFreqFlyerNo);

    
     bool isEqual(const Passenger& other) const;

 private:
     std::string name;
     MealType mealPref;
     bool isFreqFlyer;
     std::string freqFlyerNo;
 };

 Passenger::Passenger() {
     name = "Unknown";
     mealPref = OTHER;
     isFreqFlyer = false;
 }

 Passenger::Passenger(const std::string& newName, MealType newMealPref) {
     name = newName;
     mealPref = newMealPref;
     isFreqFlyer = false;
 }

 bool Passenger::isFrequentFlyer() const {
     return isFreqFlyer;
 }

 void Passenger::makeFrequentFlyer(const std::string& newFreqFlyerNo) {
     isFreqFlyer = true;
     freqFlyerNo = newFreqFlyerNo;
 }
 // The trailing const at the end of the method declaration signifies that this method does 
 // not modify the state of the current 
 // object (*this). It promises not to modify any member variables of the current object. 

 bool Passenger::isEqual(const Passenger& other) const {
     // Custom logic to compare passengers
     return name == other.name &&
            mealPref == other.mealPref &&
            isFreqFlyer == other.isFreqFlyer &&
            freqFlyerNo == other.freqFlyerNo;
 }

 int main() {
     Passenger passenger1;
     std::cout << "Passenger 1 is a frequent flyer? " << (passenger1.isFrequentFlyer() ? "Yes" : "No") << std::endl;

     Passenger passenger2("John Doe", VEG);
     std::cout << "Passenger 2 is a frequent flyer? " << (passenger2.isFrequentFlyer() ? "Yes" : "No") << std::endl;

     // Passenger passenger3("John Doe");
     // Without operator overloading
     std::cout << "Are passengers equal? " << (passenger1.isEqual(passenger2) ? "Yes" : "No") << std::endl;

     return 0;
}