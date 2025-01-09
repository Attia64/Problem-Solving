#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int res = 0;
        for(int i = 0; i < words.size(); i++) {
            if(words[i].find(pref) == 0) {
                res++;
            }
        }
        return res;
    }
};

int main() {
    
    Solution test;
    
    vector<string> words = {"leetcode","win","loops","success"};
    string pref = "code";
    
    cout << test.prefixCount(words, pref) <<"\n";
    
    
    return 0;
}
