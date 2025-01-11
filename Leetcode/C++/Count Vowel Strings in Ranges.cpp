#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> vowelStrings(vector<string>& words,
                             vector<vector<int>>& q) {
        vector<int> prefix(words.size());
        vector<int> result;

        for (int i = 0; i < words.size(); i++) {
            string s = words[i];
            if ((words[i][0] == 'a' || words[i][0] == 'e' ||
                 words[i][0] == 'i' || words[i][0] == 'o' ||
                 words[i][0] == 'u') &&
                (words[i][s.size() - 1] == 'a' ||
                 words[i][s.size() - 1] == 'e' ||
                 words[i][s.size() - 1] == 'i' ||
                 words[i][s.size() - 1] == 'o' ||
                 words[i][s.size() - 1] == 'u')) {
                if (i == 0) {
                    prefix[i]++;
                } else {
                    prefix[i] += prefix[i - 1] + 1;
                }
            } else {
                if (i > 0) {
                    prefix[i] = prefix[i - 1];
                }
            }
        }

        for (int i = 0; i < q.size(); i++) {
            int l = q[i][0], r = q[i][1], res;
            if (l == 0) {
                res = prefix[r];
            } else {
                res = prefix[r] - prefix[l - 1];
            }
            result.push_back(res);
        }
        return result;
    }
};

int main() {
    
    Solution test;
    
    vector<string> words = {"a","e","i"};
    vector<vector<int>> q = {{0,2},{0,1},{2,2}};
    vector<int> result = test.vowelStrings(words, q);
    
    for(int i: result)
        cout <<  i;
    
    cout <<"\n";
    
    
    return 0;
}
