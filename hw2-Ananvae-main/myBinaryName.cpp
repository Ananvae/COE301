#include <iostream>

/*this header is needed for char to binary representation*/
#include <bitset>
using namespace std;

int main(){
    // Define the characters needed in my name
    char c1 = 'H';
    char c2 = 'a';
    char c3 = 'n';
    char c4 = 'h';
    // Print name in char
    cout << "My name is " << c1 << c2 << c3 << c3 << c2 << c4 << endl;
    // For each character, bitset<8> represent char c1... to binary b1...
    bitset<8> b1(c1);
    bitset<8> b2(c2);
    bitset<8> b3(c3);
    bitset<8> b4(c4);
    // Print name in binary
    cout << "My Binary name is " << b1 << b2 << b3 << b3 << b2 << b4 << endl;
    /*in C++, you need \\ to represent \ because single backslash is a special character used for escaping other characters (e.g., \n for a new line)*/
    cout << "Cool \\m/" << endl;
    return 0;
}

