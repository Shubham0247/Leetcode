class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos;
        vector<int> neg;
        int n = nums.size();
        
        for(int i = 0; i<n; i++) {
            if(nums[i] > 0)
                pos.push_back(nums[i]);
            else
                neg.push_back(nums[i]);
        }
        
        int posPointer = 0; 
        int negPointer = 0;
        
        for(int i = 0; i<n; i++) {
            
            nums[i++] = pos[posPointer];
            posPointer++;
            nums[i] = neg[negPointer];
            negPointer++;
        
        }
        
        pos.clear();
        neg.clear();
        
        return nums;
    }
};