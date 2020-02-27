#include <iostream>

using namespace std;

int main()
{


    cout << "enter the room width: ";
    int room_width {0};
    cin >> room_width;

    cout << "enter the room lenght: ";
    int room_length {0};
    cin >> room_length;

    cout << "The area of the room is " << room_length * room_width << " square feet." << endl;

    return 0;
}