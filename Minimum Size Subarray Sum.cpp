https://leetcode.com/submissions/detail/1284860429/
class Solution {
public:
    void fast(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
    }
    int minSubArrayLen(int target, vector<int>& nums) {
        fast();
        int l = 0,r = 0,sum = 0,n = nums.size(),minlen = nums.size() + 1;
        while(r < n){
            while(sum < target && r < n){
                sum+=nums[r];
                r++;
            }
            while(sum>=target && l < n){
                minlen = min(minlen,r - l);
                sum-=nums[l];
                l++;
            }
        }
        if(minlen == nums.size() + 1){return 0;}
        return minlen;
    }
};
