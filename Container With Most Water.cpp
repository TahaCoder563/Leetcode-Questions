https://leetcode.com/submissions/detail/1284756997/
class Solution {
public:
    void fast(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
    }
    int maxArea(vector<int>& height) {
        fast();
        int l = 0,r = height.size() - 1;
        int maxamount = 0,amount = 0; 
        while(l<=r){
            amount = min(height[l],height[r]) * (r - l);
            maxamount = max(maxamount,amount);
            if(height[r]>height[l]){
                l++;
            }else{r--;}
        }
        return maxamount;  
    }
};
