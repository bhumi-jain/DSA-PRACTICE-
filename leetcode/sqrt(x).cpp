//sqrt(x)

class Solution {
public:
    int mySqrt(int x) {
         if (x < 2) return x;

    int low = 1, high = x / 2, ans = 0;
    while (low <= high) {
        long long mid = low + (high - low) / 2; // use long long to 
                                                //to avoid overflow
        long long sq = mid * mid;

        if (sq == x)
            return mid;
        else if (sq < x) {
            ans = mid;      // possible answer
            low = mid + 1;  // move right
        } else {
            high = mid - 1; // move left
        }
    }
    return ans;
    }
};