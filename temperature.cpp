#include <iostream>
using namespace std;

void convertToFahrenheit(float celsius)
{
    float fahrenheit = (celsius * 9 / 5) + 32;
    cout << celsius << " Celsius is " << fahrenheit << " Fahrenheit." << endl;
}
