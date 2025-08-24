#include<bits/stdc++.h>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string> &strs)
{
    vector<vector<string>>ans;
    int n=strs.size();
    unordered_map<string,vector<string>>mpp;
    for(int i=0;i<n;i++){
        string s=strs[i];
        sort(s.begin(),s.end());
        mpp[s].push_back(strs[i]);
    }

    for(auto it:mpp){
        ans.push_back(it.second);
    }
    return ans;
}

void printVector(vector<vector<string>>&ans){
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    vector<string> strs1 = {"eat", "tea", "tan", "ate", "nat", "bat"};
    vector<string> strs2 = {""};
    vector<string> strs3 = {"a"};
    vector<string> strs4 = {"abc", "bca", "cab", "xyz", "zyx", "yxz"};
    vector<string> strs5 = {"abc", "def", "ghi"};
    vector<vector<string>>ans1=groupAnagrams(strs1);
    vector<vector<string>>ans2=groupAnagrams(strs2);
    vector<vector<string>>ans3=groupAnagrams(strs3);
    vector<vector<string>>ans4=groupAnagrams(strs4);
    vector<vector<string>>ans5=groupAnagrams(strs5);
    cout<<"Test Case 1: "<<endl;
    printVector(ans1);
    cout<<"Test Case 2: "<<endl;
    printVector(ans2);
    cout<<"Test Case 3: "<<endl;
    printVector(ans3);
    cout<<"Test Case 4: "<<endl;
    printVector(ans4);
    cout<<"Test Case 5: "<<endl;
    printVector(ans5);
    return 1;
}