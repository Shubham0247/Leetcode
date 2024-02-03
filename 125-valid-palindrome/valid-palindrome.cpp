class Solution {
public:

    bool isPalindrome(string s) {
        
        int start = 0;
        int end = s.length() - 1;

        transform(s.begin(), s.end(), s.begin(), ::tolower);

        while(start <= end) {
            if(!isalnum(s[start])) {
                start++;
                continue;
            } else if (!isalnum(s[end])) {
                end--;
                continue;
            } else {
                if(s[start] != s[end])
                    return false;
            }
            start++;
            end--;
        }
        return true;
    }
};