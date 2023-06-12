#include <bits/stdc++.h>
using namespace std;

int lengthOfLastWord(string s)
{

    size_t start = s.find_first_not_of(' ');
    size_t end = s.find_last_not_of(' ');
    s = s.substr(start, end - start + 1);

    size_t lastSpace = s.find_last_of(' ');

    if (lastSpace != string::npos)
    {
        return s.length() - lastSpace - 1;
    }
    else
    {
        return s.length();
    }
}

int main()
{
    string input;
    cout << "Input: ";
    cin >> input;
    int length = lengthOfLastWord(input);
    cout << "Length of the last word: " << length << endl;
    return 0;
}