https://leetcode.com/submissions/detail/1282029839/
class Solution {
public:
    void fast(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
    }
    bool checkSubarraySum(vector<int>& nums, int k) {
        fast();
        // vector<int>sum(nums.size() + 1);
        // if(nums.size()==1){return false;}
        // sum[0] = 0;
        // int num = 0;
        // for(long long int i = 1;i<=nums.size();i++){
        //     num += nums[i - 1];  
        //     sum[i]=num;
        // }
        // for(long long int i = 0;i<nums.size();i++){
        //     for(long long int j = i + 1;j < nums.size();j++){
        //         int c = sum[j + 1] - sum[i];
        //         if(c%k==0 && (k!=0)){
        //             return true;
        //         }
        //         else if(c==0 && k==0){return true;}
        //     }
        // }
        // return false;
        unordered_map<int,int>m1;
        int sum = 0;
        m1[0] = -1;
        for(int i = 0;i<nums.size();i++){
            sum+=nums[i];
            int remainder = sum%k;
            if(m1.count(remainder)){
                if(i - m1[remainder] > 1){
                    return true;
                }
            }
            else{
                m1[remainder] = i;
            }
        }
        return false;
    }
};
class Solution {
public:
    void fast(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
    }
    bool checkSubarraySum(vector<int>& nums, int k) {
        fast();
        // vector<int>sum(nums.size() + 1);
        // if(nums.size()==1){return false;}
        // sum[0] = 0;
        // int num = 0;
        // for(long long int i = 1;i<=nums.size();i++){
        //     num += nums[i - 1];  
        //     sum[i]=num;
        // }
        // for(long long int i = 0;i<nums.size();i++){
        //     for(long long int j = i + 1;j < nums.size();j++){
        //         int c = sum[j + 1] - sum[i];
        //         if(c%k==0 && (k!=0)){
        //             return true;
        //         }
        //         else if(c==0 && k==0){return true;}
        //     }
        // }
        // return false;
        unordered_map<int,int>m1;
        int sum = 0;
        m1[0] = -1;
        for(int i = 0;i<nums.size();i++){
            sum+=nums[i];
            int remainder = sum%k;
            if(m1.count(remainder)){
                if(i - m1[remainder] > 1){
                    return true;
                }
            }
            else{
                m1[remainder] = i;
            }
        }
        return false;
    }
};
