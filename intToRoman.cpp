#include <iostream>
#include <string>
#include <vector>

using namespace std;

string intToRoman(int num)
{
    vector<pair<int, string>> romanValues = {
        {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"}, {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"}, {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}};

    string romanNumeral = "";

    for (const auto &pair : romanValues)
    {
        int value = pair.first;
        const string &symbol = pair.second;

        while (num >= value)
        {
            romanNumeral += symbol;
            num -= value;
        }
    }

    return romanNumeral;
}

int main()
{
    int number;
    cout << "Enter number : ";
    cin >> number;
    string roman = intToRoman(number);

    cout << number << " in Roman numerals is: " << roman << endl;

    return 0;
}
