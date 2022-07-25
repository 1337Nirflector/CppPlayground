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

// Pointers
// Every variable is a memory location, which has its address defined. That address can be accessed with the ampersand (&)
// operator.

/**
 * This will output the memory location of the 'score' variable.
 */
int score = 5;
void sect3a() {
    cout << &score << endl;
}

// Pointers must be declared before you can use them.
int *ip; // Pointer to an integer
double *dp; // Pointer to a double

int var = 5;
int *ptr = &var;

// There are two different operators for pointers.
int var2 = 50;
int *p;

void sect3b() {
    p = &var2;
    cout << var2 << endl; // Outputs the value of the variable
    cout << p << endl; // Outputs the var's memory location
    cout << *p << endl; // Outputs the value of the variable stored in the pointer)
}

// Deferencing
// The * deference operator is an alias for the variable the pointer points to.
void sect3c() {
    int var3 = 500;
    int *p2 = &var3;
    var3 = var3 + 4;
    var3 = *p2 + 4;
    *p2 = *p2 + 4;
    // All statements are equivalent and return the same result.
}

// Dynamic Memory
// In a C++ program, there are two different parts:
// The stack: All of your local variables take up memory from the stack.
// The heap: Unused program memory that can be used when the program runs to dynamically allocate the memory.

// Many times, you are not aware in advance how much memory you will need to store particular information in
// a defined variable and the size of required memory can be determined at run time.
// You can allocate memory at run time within the heap for the variable of a given type using the new operator,
// which returns the address of the space allocated.
void sect3d() {
    new int; // This allocates the memory size necessary for storing an integer on the heap, and returns that address.
}

// The allocated address can be stored in a pointer, which can then be dereferenced to access the variable.
void sect3e() {
    int *p3 = new int;
    *p3 = 5;
    // The pointer p is stored in the stack as a local variable, and holds the heap's allocated address as its value.
    // The value of 5 is stored at that address in the heap.
}

/**
* delete p3;
 * This will delete a pointer and frees up the memory.
*/

// The delete keyword frees up memory, but doesn't delete the pointer itself. Pointers that are left pointing to non-existent
// memory locations are called dangling pointers.
void sect3f() {
    int *p4 = new int; // request memory
    *p4 = 50; // store value

    delete p4; // free up memory. Now p4 is a dangling pointer.

    p4 = new int; // reuse for a new address.
}


