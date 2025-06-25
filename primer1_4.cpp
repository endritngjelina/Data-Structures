 #include <iostream>
 #include <iomanip>

 int main() {
     float f = 1.0f / 3.0f;
     double d = 1.0 / 3.0;

     std::cout << std::setprecision(20);
     std::cout << "float:  " << f << std::endl;
     std::cout << "double: " << d << std::endl;

     return 0;
}