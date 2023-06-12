#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        int carry = 1;
        for (int i = digits.size() - 1; i >= 0; i--)
        {
            int digitSum = digits[i] + carry;
            digits[i] = digitSum % 10;
            carry = digitSum / 10;
            if (carry == 0)
            {
                break;
            }
        }
        if (carry != 0)
        {
            digits.insert(digits.begin(), carry);
        }
        return digits;
    }
};

int main()
{
    vector<int> vec = {1, 2, 3};
    Solution s;
    vector<int> result = s.plusOne(vec);
    cout << "Result: ";
    for (int digit : result)
    {
        cout << digit;
    }

    return 0;
}