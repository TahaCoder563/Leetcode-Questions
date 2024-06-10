class Solution {
public:
    bool possibility(vector<int>& batteries,long long int mid,long long int target){
        for(int i = 0;i<batteries.size();i++){
            target-=min((long long)batteries[i],mid);
            if(target<=0){return true;}
        }
        return false;
    }
    void fast(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
    }
    long long maxRunTime(int n, vector<int>& batteries) {
        fast();
        long long int l = *min_element(batteries.begin(),batteries.end());
        long long int sum = 0;
        for(auto&v:batteries){sum+=v;}
        long long int r = sum/n;
        long long int ans = 0;
        while(l<=r){
            long long int mid = (l + r)/2;
            long long int target = mid * n;
            if(possibility(batteries,mid,target)){
                ans = mid;
                l = mid + 1;
            }
            else{
                r = mid - 1;
            }
        }
        return ans;
    }
};
