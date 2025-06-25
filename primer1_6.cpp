 using namespace std;
 #include <iostream>
 int main()
{
     double f [5];     // array of 5 doubles: f[0], . . ., f[4]
     int m[10];        // array of 10 ints: m[0], ..., m[9]

     f[4] = 2.5;
     m[2] = 4;
     cout<< f[0] << endl;


 cout << f[m[2]]<<endl;  // outputs f[4], which is 2.5

// **********************************************************//

int a[] = {10, 11, 12, 13}; // declares a[4] and initializes
bool b[] = {false, true};   // declares b[2] and initializes
char c[] = {'c', 'a', 't'}; // declares c[3] and initializes

// **********************************************************//

     char c[] = {'c', 'a', 't'};

     char* p = c;                  // p points to c[0]
     char* q = &c[0];              // q also points to c[0]

     cout << c[0] << p[0] << q[0]<<endl; // outputs “ttt”

}