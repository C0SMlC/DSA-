#include <bits/stdc++.h>
using namespace std;
#include <vector>

vector<int> twoSum(vector<int> &nums, int target)
{
    vector<int> result;
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = 0; j < nums.size(); j++)
        {
            if ((nums[i] + nums[j]) == target)
            {
                result.push_back(i);
                result.push_back(j);
                return result;
            }
        }
    }
    return result;
}

int main()
{
    vector<int> array;
    array.push_back(2);
    array.push_back(7);
    array.push_back(11);
    array.push_back(15);
    vector<int> result = twoSum(array, 9);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
}