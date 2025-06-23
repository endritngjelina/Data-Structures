#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;
int main() {

string text1, text2;

cout << "Enter a single word: ";        //Using cin to read a single word
cin >> text1;

cin.ignore(numeric_limits<streamsize>::max(), '\n');    // Clear the input buffer

cout << "Enter a full line of text: ";  // Using getline to read a full line of text
getline(cin, text2);

cout << "You entered (single word): " << text1 << endl;
cout << "You entered (full line): " << text2 << endl;

return EXIT_SUCCESS;
}