https://leetcode.com/submissions/detail/1282753350/
class Solution {
public:
    void fast(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
    }
    int subarraysDivByK(vector<int>& nums, int k) {
        fast();
        unordered_map<int,int>m1;
        int sum = 0,ans = 0;
        m1[0] = 1;
        for(int i = 0;i<nums.size();i++){
            sum+=nums[i];
            int remainder = sum%k;
            if(remainder<0){remainder+=k;}
            if(m1.count(remainder)){
                ans +=m1[remainder];
                m1[remainder]+=1;
            }
            else{
                m1[remainder] = 1;
            }
        }
        return ans;
    }
};
