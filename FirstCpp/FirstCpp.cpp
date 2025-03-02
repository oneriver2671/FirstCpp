#include <iostream>
#include "Header.h"

using namespace std;

int main()
{
    first_pointer();    // Pointer.cpp
    first_vector();     // Vector.cpp
    first_array();      // Array.cpp
    // first_string();     // String.cpp 
    // num_guess();     // NumberGuess1.cpp

    int n = 10;
    int m = 3;

    int x = 10 / 3;
    double y = 10 % 3;
    cout << x << endl;
    cout << y;

    cout << (n % 2 == 0 ? "n은 짝수" : "n은 홀수") << endl;
    cout << "--------------" << endl;



    return 0;
}
