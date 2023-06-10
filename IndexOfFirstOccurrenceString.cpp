#include <iostream>
#include <string>

using namespace std;

class Solution
{
public:
    int strStr(const string &haystack, const string &needle)
    {
        int needleSize = needle.size();
        int haystackSize = haystack.size();

        if (needleSize == 0)
        {
            return 0;
        }

        for (int i = 0; i <= haystackSize - needleSize; i++)
        {
            if (haystack[i] == needle[0])
            {
                int j;
                for (j = 1; j < needleSize; j++)
                {
                    if (haystack[i + j] != needle[j])
                    {
                        break;
                    }
                }
                if (j == needleSize)
                {
                    return i;
                }
            }
        }

        return -1;
    }
};

int main()
{
    string haystack, needle;
    cout << "Input the two strings: ";
    cin >> haystack >> needle;

    Solution s;
    int index = s.strStr(haystack, needle);

    cout << "Index of first occurrence: " << index << endl;

    return 0;
}
