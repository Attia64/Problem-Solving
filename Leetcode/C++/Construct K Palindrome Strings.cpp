#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canConstruct(string s, int k) {
        if(s.size() < k) {
            return false;
        } else {
            int res = 0;
        vector<int> freq(26);
        for(char c: s) {
            freq[c-'a']++;
        }
        for(int i = 0; i < 26; i++) {
            res += freq[i] % 2;
        }
        if(res <= k)
        return true;
        else return false;
        }
    }
};

int main() {
    
    Solution test;
    
    string s = "011101";
    cout << test.canConstruct("true", 4) <<"\n";
    
    
    return 0;
}
