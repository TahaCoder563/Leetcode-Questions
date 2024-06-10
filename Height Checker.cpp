class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>height2(heights.size()),expected(heights.size());
        for(int i = 0;i<heights.size();i++){
            height2[i] = heights[i];
        }
        int count = 0;
        sort(height2.begin(),height2.end());
        for(int i = 0;i<heights.size();i++){
            expected[i] = height2[i];
            if(heights[i] != expected[i]){
                count++;
            }
        }
        return count;
    }
};
