// 1317. Convert Integer to the Sum of Two No-Zero Integers

// https://leetcode.com/problems/convert-integer-to-the-sum-of-two-no-zero-integers/?envType=daily-question&envId=2025-09-08


class Solution {
public:
    bool hasZero(int x) {
        while (x > 0) {
            if (x % 10 == 0) return true;
            x /= 10;
        }
        return false;
    }

    vector<int> getNoZeroIntegers(int n) {
        for (int a = 1; a < n; a++) {
            int b = n - a;
            if (!hasZero(a) && !hasZero(b)) {
                return {a, b};
            }
        }
        return {}; // should never reach here as per problem constraints
    }
};
