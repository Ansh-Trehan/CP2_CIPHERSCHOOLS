//https://leetcode.com/problems/count-and-say/

class Solution {
public:
    string countAndSay(int n) {
        vector<string> vec(n);
        vec[0] = "1";
        for(int i = 1; i < n; i++) {
            string cur = "";
            for(int j = 0; j < vec[i-1].size(); j++) {
                int k = j;
                while(k < vec[i-1].size() - 1 && vec[i-1][k] == vec[i-1][k+1]) k++;
                cur += to_string(k-j+1);
                cur.append(1, vec[i-1][j]);
                j = k;
            }
            vec[i] = cur;
        }
        return vec[n-1];
    }
};