#include <iostream>

class Vector2D {
private:
    double x;
    double y;

public:
    Vector2D(double x_val = 0, double y_val = 0) : x(x_val), y(y_val) {}

    // Overloading the + operator to add two Vector2D objects
    Vector2D operator+(const Vector2D& other) const {
        return Vector2D(x + other.x, y + other.y);
    }

    // Overloading the output stream operator for easy printing
    friend std::ostream& operator<<(std::ostream& out, const Vector2D& v) {
        out << "(" << v.x << ", " << v.y << ")";
        return out;
    }
};

int main() {
    Vector2D v1(1, 2);
    Vector2D v2(3, 4);

    Vector2D sum = v1 + v2;

    std::cout << "Vector 1: " << v1 << std::endl;
    std::cout << "Vector 2: " << v2 << std::endl;
    std::cout << "Sum: " << sum << std::endl;

    return 0;
}
