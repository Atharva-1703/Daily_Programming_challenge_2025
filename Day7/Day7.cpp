#include <bits/stdc++.h>
using namespace std;

int trapWater(vector<int> heights)
{
    int n = heights.size(), ans = 0, l = 0, r = n - 1, lmax = 0, rmax = 0;
    while (l < r)
    {
        if (heights[l] <= heights[r])
        {
            if (heights[l] > lmax)
                lmax = heights[l];
            else
                ans += lmax - heights[l];
            l++;
        }
        else
        {
            if (heights[r] > rmax)
                rmax = heights[r];
            else
                ans += rmax - heights[r];
            r++;
        }
    }
    return ans;
}

int main()
{
    vector<int> heights = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    cout << "Test Case 1: " << trapWater(heights) << endl;
    vector<int> heights1 = {1, 1, 1, 1, 1, 1};
    cout << "Test Case 2: " << trapWater(heights1) << endl;
    vector<int> heights2 = {4, 2, 0, 3, 2, 5};
    cout << "Test Case 3: " << trapWater(heights2) << endl;
    return 0;
}