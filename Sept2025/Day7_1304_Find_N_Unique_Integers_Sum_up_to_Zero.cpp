// 1304. Find N Unique Integers Sum up to Zero

// https://leetcode.com/problems/find-n-unique-integers-sum-up-to-zero/?envType=daily-question&envId=2025-09-07


class Solution {
public:
    vector<int> sumZero(int n) {
      // method 1 
        vector<int>arr(n);
        int i =0;
        int element = 1;
        while(i+1<n){
            arr[i] = element;
            arr[i+1] = -element;
            element++;
            i+=2;
        }
        return arr;


// method 2 
        int i= 0;
        int j = n-1;
        int element = 1;
        while(i<j){
            arr[i] = element;
            arr[j] = -element;
            element++;
            i++;
            j--;
        }
        return arr;
    }
};

