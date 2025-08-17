#include <bits/stdc++.h>
using namespace std;

int DuplicateNum(vector<int> &nums)
{
    int n = nums.size();
    int xor1 = 0, xor2 = 0;
    for (int i = 0; i < n; i++)
    {
        xor1 ^= nums[i];
        xor2 ^= i;
    }
    return xor1 ^ xor2;
}
int main()
{
    // vector<int> nums = {3, 4, 1, 2, 4};
    vector<int> nums = {1, 2, 3, 1};
    // vector<int> nums;
    // for (int i = 1; i < 100000; i++)
    //     nums.push_back(i);
    // nums.push_back(50000);
    cout << DuplicateNum(nums) << endl;
    return 0;
}