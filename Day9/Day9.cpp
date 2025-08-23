#include<bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    string ans="";
    int n=strs.size();
    if(!n)return ans;
    sort(strs.begin(),strs.end());
    string first=strs[0],last=strs[n-1];
    int m=first.size();
    for(int i=0;i<m;i++){
        if(first[i]==last[i])ans.append(1,first[i]);
        else break;
    }
    return ans;
}

int main(){
    vector<string>strs={"flower","flow","flight"};
    cout<<longestCommonPrefix(strs)<<endl;
    vector<string>strs1={"flower","flow",""};
    cout<<longestCommonPrefix(strs1)<<endl;
    vector<string>strs2={};
    cout<<longestCommonPrefix(strs2)<<endl;
    vector<string>strs3={"dog","racecar","car"};
    cout<<longestCommonPrefix(strs3)<<endl;
    return 0;
}