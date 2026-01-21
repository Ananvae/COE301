#include <iostream>
#include <limits> //For std::numeric_limits
using namespace std;

int main() {
    //Boolean type
    cout << "Size of bool: " << sizeof(bool) << " byte(s)" << endl;
    cout << "Boolean values: "
        << numeric_limits<bool>::min() << " to "
        << numeric_limits<bool>::max() << endl;

    //Character type
    cout << "Size of char: " << sizeof(char) << " byte(s)" << endl;
    cout << "Range of Character values: "
        << numeric_limits<char>::min() << " to "
        << numeric_limits<char>::max() << endl;

    // Integer types
    cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    cout << "Range of int: "
        << numeric_limits<int>::min() << " to "
        << numeric_limits<int>::max() << endl;
        
    // Floating-point types
    cout << "Size of float: " << sizeof(float) << " bytes" << endl;
    cout << "Range of float: "
        << numeric_limits<float>::min() << " to "
        << numeric_limits<float>::max() << endl;

    cout << "Size of double: " << sizeof(double) << " bytes" << endl;
    cout << "Range of double: "
        << numeric_limits<double>::min() << " to "
        << numeric_limits<double>::max() << endl;
    return 0;
}
