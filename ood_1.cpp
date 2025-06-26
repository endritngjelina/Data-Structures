#include <iostream>
 using namespace std;

 class Person {
 private:
     string name;      // name
     string idNum;     // university ID number

 public:
//     // Parameterized constructor for Person
   Person(const string& n, const string& id) : name(n), idNum(id) {}
/*
Alternative constructor
*/
     Person(const string& personName, const string& personId) {
         this->name = personName;
         this->idNum = personId;
     }

//     // Print information
     void print() {
         cout << "Name: " << name << ", ID: " << idNum << endl;
     }

//     // Retrieve name
     string getName() {
         return name;
     }
 };

// // Student (derived from Person)
 class Student : public Person {
 private:
     string major;  // major subject
     int gradYear;  // graduation year

 public:
//     // Parameterized constructor for Student
   Student(const string& n, const string& id, const string& m) : Person(n, id), major(m) {}
/*
Alternative constructor
*/
     Student(const string& studentName, const string& studentId, const string& studentMajor)
         : Person(studentName, studentId) {
         this->major = studentMajor;
     }
//     // Print information (overrides base class method)
     void print() {
         Person::print();  // Call the base class print method
         cout << "Major: " << major << endl;
     }

//     // Change major
     void changeMajor(const string& newMajor) {
         major = newMajor;
     }
 };

 int main() {
     Person person("Mary", "12");               // declare a Person
     Student student("Bob", "98", "Math");     // declare a Student
     cout << student.getName() << endl;        // Person::getName()
     person.print();                            // Person::print()
     student.print();                           // Student::print()

//     // person.changeMajor("Physics");         // ERROR! Person does not have changeMajor method
     student.changeMajor("English");            // okay
     return 0;
}