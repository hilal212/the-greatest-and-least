#include <iostream>

using namespace std;

int main()
{
    int smallest_number = -99;
    int number, min, max;

    cout << "This program will display the greatest and the leastest values."
         << "Enter a number to begin and enter -99\n"<< "to quit the program."<< "Enter a value: ";
    cin >> number; 
    min = max = number;
    while (number != smallest_number)
    {
        if (number < min)
            min = number;

        if (number > max)
            max = number;

        cout << "enter a value: ";
        cin >>number;
        
    }
    cout << "smallest number is: " << min << endl;
    cout << "largest number is: "  << max  << endl;

    return 0;
}