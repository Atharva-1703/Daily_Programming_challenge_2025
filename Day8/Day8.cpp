#include<bits/stdc++.h>
using namespace std;

void reverse(string &str,int i,int j){
    while(i<j){
        swap(str[i],str[j]);
        i++;
        j--;
    }
}

string reverseWordByWord(string str){
    string result="";
    int i = 0;
    int n = str.length();
    while (i < n)
    {
        while (i < n && str[i] == ' ')
            i++;
        if (i == n)
            break;
        int j = i + 1;
        while (j < n && str[j] != ' ')
            j++;
        string sub = str.substr(i, j - i);
        if (result.length() == 0)
            result = sub;
        else
            result = sub + ' ' + result;
        i = j + 1;
    }
    return result;
}

int main(){
    string str = "the sky is blue";
    cout << reverseWordByWord(str) << endl;
    string str1 = "  hello world  ";
    cout << reverseWordByWord(str1) << endl;
    string str2 = "  hello   world  ";
    cout << reverseWordByWord(str2) << endl;
    string str3 = "abc";
    cout << reverseWordByWord(str3) << endl;
    string str4 = "";
    cout << reverseWordByWord(str4) << endl;
    return 0;
}