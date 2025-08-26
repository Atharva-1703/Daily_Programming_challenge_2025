#include <bits/stdc++.h>
using namespace std;

bool isValidParenthesis(string str)
{
    stack<char> stk;
    for (char c : str)
    {
        if (c == '(' || c == '[' || c == '{')
            stk.push(c);
        else if (!stk.empty() && c - stk.top() == 1 || c - stk.top() == 2)
            stk.pop();
        else
            return false;
    }
    return stk.empty();
}

int main()
{
    string str = "()[]{}";
    cout << str << " : " << isValidParenthesis(str) << endl;
    string str1 = "(]";
    cout << str1 << " : " << isValidParenthesis(str1) << endl;
    string str2 = "({[]})";
    cout << str2 << " : " << isValidParenthesis(str2) << endl;
    string str3 = "";
    cout << str3 << " : " << isValidParenthesis(str3) << endl;
    return 0;
}