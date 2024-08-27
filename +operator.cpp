#include <iostream>

class Number {
    int value;
public:
    Number(int v) : value(v) {}

    // Overload + operator
    Number operator+(const Number& other) {
        return Number(value + other.value);
    }

    int getValue() const {
        return value;
    }
};

int main() {
    Number n1(10), n2(20);
    Number n3 = n1 + n2;
    std::cout << "Sum: " << n3.getValue() << std::endl;
    return 0;
}
