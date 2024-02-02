class Solution {
public:
    int romanToInt(string s) {
        int ans = 0;
        int n = s.length();
        for(int i = n-1; i>=0; i--) {
            if(s[i] == 'I'){
                ans += 1;
            }
            else if(s[i] == 'V') {
                ans += 5;
                if(i>0 and s[i-1] == 'I') {
                    ans -= 1;
                    i--;
                }
            }
            else if(s[i] == 'X') {
                ans += 10;
                if(i>0 and s[i-1] == 'I') {
                    ans -= 1;
                    i--;
                }
            }
            else if(s[i] == 'L') {
                ans += 50;
                if(i>0 and s[i-1] == 'X') {
                    ans -= 10;
                    i--;
                }
            }
            else if(s[i] == 'C') {
                ans += 100;
                if(i>0 and s[i-1] == 'X') {
                    ans -= 10;
                    i--;
                }
            }
            else if(s[i] == 'D') {
                ans += 500;
                if(i>0 and s[i-1] == 'C') {
                    ans -= 100;
                    i--;
                }
            }
            else if(s[i] == 'M') {
                ans += 1000;
                if(i>0 and s[i-1] == 'C') {
                    ans -= 100;
                    i--;
                }
            }
        }

        return ans;
    }
};