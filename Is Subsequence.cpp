https://leetcode.com/submissions/detail/1284653459/
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int size = s.size();
        int size2 = t.size();
        int i = 0,j = 0;
        while(i<=size && j<size2){
            if(s[i]==t[j]){
                i++;
                j++;
            }
            else{j++;}
        }
        if(i==size){return true;}
        return false;
    }
};
