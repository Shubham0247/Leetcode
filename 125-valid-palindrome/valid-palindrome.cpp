class Solution {
public:

    bool isPalindrome(string s) {
        
        int start = 0;
        int end = s.length() - 1;

        while(start <= end) {
            if(!isalnum(s[start])) {
                start++;
                continue;
            } else if (!isalnum(s[end])) {
                end--;
                continue;
            } else {
                if(s[start] >= 'A' && s[start] <= 'Z')
                    s[start] += 32;
                if(s[end] >= 'A' && s[end] <= 'Z')
                    s[end] += 32;

                if(s[start] != s[end])
                    return false;
            }
            start++;
            end--;
        }
        return true;
    }
};