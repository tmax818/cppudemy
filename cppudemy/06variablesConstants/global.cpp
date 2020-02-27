/*
lec 46
global variables
*/

#include <iostream>

using namespace std;

int age {18}; // Global variable

int main()
{
    // looks here first(local). no age variable! it looks outside
    cout << age << endl;

    return 0;
}