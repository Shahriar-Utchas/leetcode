#include <bits/stdc++.h>

using namespace std;

bool isValid(string s)
{
    stack<char> stk;
    map<char, char> brackets = {{'(', ')'}, {'{', '}'}, {'[', ']'}};

    for (char ch : s)
    {
        if (brackets.count(ch))
        {
            stk.push(ch);
        }
        else
        {
            if (stk.empty() || ch != brackets[stk.top()])
            {
                return false;
            }
            stk.pop();
        }
    }

    return stk.empty();
}

int main()
{
    string input;
    cout << "Enter a string of brackets: ";
    cin >> input;

    if (isValid(input))
    {
        cout << "The input string is valid." << endl;
    }
    else
    {
        cout << "The input string is not valid." << endl;
    }

    return 0;
}
