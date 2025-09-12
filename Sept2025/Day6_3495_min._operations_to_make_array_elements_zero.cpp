3495. Minimum Operations to Make Array Elements Zero

https://leetcode.com/problems/minimum-operations-to-make-array-elements-zero/description/?envType=daily-question&envId=2025-09-06



class Solution {
public:
    long long minOperations(vector<vector<int>>& queries) {
       long long ans=0;
       for(int i=0;i<queries.size();i++){
        long long start=queries[i][0];
        long long end=queries[i][1];
        long long op=0;//calculate the number of operations required in a array to convert to 0 if everytime one number is picked only
        for(long long d=1,prev=1;d<17;d++){//d = [1,16]
           long long cur=prev* 4LL;//as d =1 for [1,3],=2 for [4,15](prev,cur-1) ans so on
           long long l=max(start,prev);
           long long r=min(end,cur-1);
           if(r>=l)op+=(r-l+1)*d;
           prev=cur;
        }
        ans+=(op+1)/2;//divide by 2 as we can pick two numbers at a time
       }
       return ans; 
    }
};
