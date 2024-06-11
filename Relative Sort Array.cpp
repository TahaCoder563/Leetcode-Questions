https://leetcode.com/submissions/detail/1284606446/
class Solution {
public:
    void fast(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
    }
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        fast();
        unordered_map<int,int>m1;
        for(int i = 0;i<arr1.size();i++){
            m1[arr1[i]]++;
        }
        vector<int>a;
        for(int i = 0;i<arr2.size();i++){
            while(m1[arr2[i]]!=0){
                a.push_back(arr2[i]);
                m1[arr2[i]]--;
            }
        }
        sort(arr1.begin(),arr1.end());
        for(int i = 0;i<arr1.size();i++){
            if(m1[arr1[i]]!=0){
                a.push_back(arr1[i]);
            }
        }
        return a;
    }
};
