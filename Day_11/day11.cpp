#include <bits/stdc++.h>
using namespace std;

void solve(string &s, string &curr, vector<string> &ans, vector<bool> &vis)
{
    int n = s.size();
    if (curr.size() == n)
    {
        ans.push_back(curr);
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (vis[i])
            continue;
        if (i > 0 && s[i] == s[i - 1] && !vis[i - 1])
            continue;
        vis[i] = true;
        curr.push_back(s[i]);
        solve(s, curr, ans, vis);
        curr.pop_back();
        vis[i] = false;
    }
}

void nextPermutation(string &s, vector<string> &ans)
{
    sort(s.begin(), s.end());
    vector<bool> vis(s.size(), false);
    string curr;
    solve(s, curr, ans, vis);
}

int main()
{
    string s = "aab";
    // string s = "abc";
    vector<string> ans;
    nextPermutation(s, ans);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}