int c[1001];

class Solution {
public:
    bool isMajorityElement(vector<int>& nums, int target) {
        int c = count(nums.begin() , nums.end(), target);
        if(c > (nums.size()>>1)) return true;
        return false; 
    }
};