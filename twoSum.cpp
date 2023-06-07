#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        map<int, int> complementMap;
        for (int i = 0; i < nums.size(); i++)
        {
            int complement = target - nums[i];
            if (complementMap.find(complement) != complementMap.end())
            {
                return {complementMap[complement], i};
            }

            complementMap[nums[i]] = i;
        }

        return {};
    }
};

int main()
{
    vector<int> num = {2, 7, 11, 15};
    int tar;
    cout << "input  ";
    cin >> tar;
    Solution s1;
    vector<int> result = s1.twoSum(num, tar);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    return 0;
}