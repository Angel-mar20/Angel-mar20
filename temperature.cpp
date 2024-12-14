#include <iostream>
using namespace std;

void convertToFahrenheit(float celsius)
{
    float fahrenheit = (celsius * 9 / 5) + 32;
    cout << celsius << " Celsius is " << fahrenheit << " Fahrenheit." << endl;
}

void convertToCelsius(float fahrenheit)
{
    float celsius = (fahrenheit - 32) * 5 / 9;
    cout << fahrenheit << " Fahrenheit is " << celsius << " Celsius." << endl;
}

int main()
{
    int choice;
    float temperature;
