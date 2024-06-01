class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        
        unordered_map<int,int> m1;
        
        for(int i = 0; i<nums1.size(); i++) {
            
            if(m1[nums1[i]] == 0) {
                m1[nums1[i]]++;
            }
        }
                
        for(int i = 0; i<nums2.size(); i++) {
            
            if(m1[nums2[i]] == 1) {
                m1[nums2[i]]++;
            }
        }
        
        unordered_map<int,int>::iterator it; 
        
        for(it = m1.begin(); it!=m1.end(); it++) {
            if(it->second == 2) {
                ans.push_back(it->first);
            }
        }
        
        return ans;
    }
};