class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        string ans="";
        int maxPossible = strs[0].length();
        
        for(int i = 0; i<maxPossible; i++)
        {
            for(int j = 0; j<strs.size()-1; j++) {
                
                if(strs[j][i] != strs[j+1][i])
                    return ans;
            }
            ans += strs[0][i];
        }
        
        return ans;
    }
};