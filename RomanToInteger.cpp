#include <bits/stdc++.h>
using namespace std;

int romanToInt(string s)
{
    map<char, int> romanValues = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}};

    int result = 0;
    int n = s.length();

    for (int i = 0; i < n; i++)
    {
        if (i < n - 1 && romanValues[s[i]] < romanValues[s[i + 1]])
        {
            result -= romanValues[s[i]];
        }
        else
        {
            result += romanValues[s[i]];
        }
    }

    return result;
}

int main()
{
    string romanNumeral;
    cout << "Enter a Roman numeral: ";
    cin >> romanNumeral;

    int intValue = romanToInt(romanNumeral);
    cout << "Integer value: " << intValue << endl;

    return 0;
}
