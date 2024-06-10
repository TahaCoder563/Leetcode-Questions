https://leetcode.com/submissions/detail/1283039025/
class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int s = 0,e = mat[0].size() - 1;
        int n = mat.size();
        int m = mat[0].size();
            int left = 0;
            int right = 0;
        while(s <= e){
            int mid = (s + e)/2;
            int row = -1;
            int max = -1;
            for(int i = 0;i<n;i++){
                if(mat[i][mid]>max){
                    max = mat[i][mid];
                    row = i;
                }
            }
            if(mid - 1 >=0){
                left = mat[row][mid - 1];
            }
            else{left = - 1;}
            if(mid + 1 < m){
                right = mat[row][mid + 1];
            }
            else{right = -1;}
            if(mat[row][mid]>left && mat[row][mid]>right){
                return{row,mid};
            }
            else if(mat[row][mid]<left){e = mid - 1;}
            else if(mat[row][mid] < right){s = mid + 1;}
        }
        return {-1,-1};
    }
};
