#include <iostream>
using namespace std;

int main() {
    cout << "Welcome to C++ Playground!";
    cout << "My personal testing application for C++ stuff.";
    return 0;
}

//--------------------------------------------------------------------------------------------------------------------//
// Section 1: Basic Concepts
//--------------------------------------------------------------------------------------------------------------------//

/**
 * ● C++ contains operator precedence: Multiplication is done before addition and calculations in parentheses are done first
 * ● C++ is case sensitive
 */

// Every program has an entry method called "main"

/**
* using namespace std;
 *
 * A namespace is a declarative region that provides a scope to the names of the elements inside it.
 * The std namespace includes feature of the C++ Standard Library.
*/

// Line breaks are made with the "endl" keyword or \n inside the String.
int sect1a() {
    cout << "Hold on! There comes a line break." << endl;
    cout << "Woosh!";
}

// Variables
int myVar = 10;

void sect1b() {
    cout << myVar;
}

// Input
/**
* cout << "Enter a number\n";
 * cin >> num
*/

// Assignment and Increment
int x = 10;

void sect1c() {
    x += x + 4; // equivalent to x = x + 4
}

void sect1d() {
    x++; // equivalent to x = x + 1
}

//--------------------------------------------------------------------------------------------------------------------//
// Section 2: Conditionals and Loops
//--------------------------------------------------------------------------------------------------------------------//

// Nothing new.

//--------------------------------------------------------------------------------------------------------------------//
// Section 3: Data Types, Arrays, Pointers
//--------------------------------------------------------------------------------------------------------------------//

// A signed integer can hold negative and positive numbers.
signed int a;

// An unsigned integer can hold only positive values.
unsigned int b;

