
#include <iostream>
#include <string>

using namespace std;

class MathException {
public:
    MathException(const string& err) : errMsg(err) { }
    string getError() { return errMsg; } // access error message

private:
    string errMsg; // error message
};

class ZeroDivide : public MathException {
public:
    ZeroDivide(const string& err) : MathException(err) { }
};

class NegativeRoot : public MathException {
public:
    NegativeRoot(const string& err) : MathException(err) { }
};

int main() {
    try {
        // ... application computations
        int divisor = 0;  // Sample divisor, replace with actual computation

        if (divisor == 0) // attempt to divide by 0?
            throw ZeroDivide("Divide by zero in Module X");

        // Add more computations here

    } catch (ZeroDivide& zde) {
        cout << "Caught ZeroDivide exception: " << zde.getError() << endl;
        // Handle division by zero
    } catch (MathException& me) {
        cout << "Caught MathException: " << me.getError() << endl;
        // Handle any math exception other than division by zero
    }

    return 0;
}
