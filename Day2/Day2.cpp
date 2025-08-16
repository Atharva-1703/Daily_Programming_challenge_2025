#include <bits/stdc++.h>
using namespace std;

int missingNum(vector<int> &nums)
{
    int n = nums.size();
    int xor1 = 0, xor2 = 0;
    for (int i = 0; i < n; i++)
    {
        xor1 ^= nums[i];
        xor2 ^= i;
    }
    xor2 ^= n;
    return xor1 ^ xor2;
}
int main()
{
    // vector<int> nums = {3, 0, 1, 2};
    // vector<int> nums = {0};
    vector<int> nums;
    for (int i = 0; i < 100000; i++)
        nums.push_back(i);
    cout << missingNum(nums) << endl;
    return 0;
}