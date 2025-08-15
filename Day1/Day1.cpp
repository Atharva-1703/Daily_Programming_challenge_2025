#include <bits/stdc++.h>
using namespace std;

void sort012(vector<int> &nums)
{
    int n = nums.size();
    int l = 0, m = 0, h = n - 1;
    while (m <= h)
    {
        if (nums[m] == 0)
        {
            swap(nums[l], nums[m]);
            l++;
            m++;
        }
        else if (nums[m] == 1)
        {
            m++;
        }
        else
        {
            swap(nums[m], nums[h]);
            h--;
        }
    }
}

int main()
{
    // int n;
    // cin >> n;
    // vector<int> nums(n);
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> nums[i];
    // }

    vector<int>nums={0,2,1,0,0,2,2,1};
    int n=nums.size();

    sort012(nums);
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
    return 0;
}