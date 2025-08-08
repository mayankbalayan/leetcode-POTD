118. Pascal Triangle 

Leetcode Link:- https://leetcode.com/problems/pascals-triangle/?envType=daily-question&envId=2025-08-01

class Solution {
public:
    vector<int> generateRow(int row){
        long long ans = 1;
        vector<int> ansRow;
        ansRow.push_back(1);
        for(int col=1; col<row; col++){
            ans = ans*(row-col);
            ans = ans/(col);
            ansRow.push_back(ans);
        }
        return ansRow;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        for(int i=1; i<=numRows; i++){
            ans.push_back(generateRow(i));
        }
        return ans;
    }
};
