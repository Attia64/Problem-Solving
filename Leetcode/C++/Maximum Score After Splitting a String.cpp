#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
 int countones(string s) {
    int sum = 0;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '1')
        sum++;
    }
    return sum;
 }
    int maxScore(string s) {
        int z = 0, o = countones(s), res = 0;
    
    for(int i = 0; i < s.size()-1; i++){
        if(s[i] == '0')
        z++;
        else
        o--;
        res = max(res, z+o);
    }
    return res;
    }
};

int main() {
    
    Solution test;
    
    string s = "011101";
    cout << test.maxScore(s) <<"\n";
    
    
    return 0;
}
