class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        bool res = false;
        unordered_map<int, int> map;
        
        for (int i = 0; i < nums.size(); ++i) {
            if (map[nums[i]] > 0) {
                res = true;
                break;                
            }
            else {
                map[nums[i]] = 1;
            }
        }
        
        return res;
    }
};
