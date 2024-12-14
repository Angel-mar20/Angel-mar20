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

    cout << "Temperature Converter" << endl;
    cout << "1. Convert Celsius to Fahrenheit" << endl;
    cout << "2. Convert Fahrenheit to Celsius" << endl;
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;

    if (choice == 1)
    {
        cout << "Enter temperature in Celsius: ";
        cin >> temperature;
        convertToFahrenheit(temperature);
