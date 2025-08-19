#include <bits/stdc++.h>
using namespace std;

vector<int> leaders(vector<int> &nums)
{
    int n = nums.size();
    vector<int> ans;
    int max = nums[n - 1];
    ans.push_back(max);
    for (int i = n - 2; i >= 0; i--)
    {
        if (nums[i] > max)
        {
            max = nums[i];
            ans.push_back(max);
        }
    }
    int m = ans.size();
    for (int i = 0; i < m / 2; i++)
    {
        swap(ans[i], ans[m - i - 1]);
    }
    return ans;
}

int main()
{
    // vector<int> nums={16,17,4,3,5,2};
    // vector<int> nums={1,2,3,4,5};
    vector<int> nums = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    vector<int> ans = leaders(nums);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}