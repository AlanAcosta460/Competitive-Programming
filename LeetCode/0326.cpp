#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n == 0 || n < 0) return false;
        double x = log10(n) / log10(3);
        return x == floor(x);
    }
};