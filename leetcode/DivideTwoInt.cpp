//Given two integers dividend and divisor, divide two integers without using multiplication,
//  division, and mod operator.

class Solution {
public:
    int divide(int dividend, int divisor) {
        // Handle overflow case
        if (dividend == INT_MIN && divisor == -1) 
            return INT_MAX;

        // Determine the sign of the result
        bool negative = (dividend < 0) ^ (divisor < 0);

        // Work with positive long long to avoid overflow
        long long a = llabs(dividend);
        long long b = llabs(divisor);

        long long result = 0;

        
        while (a >= b) {
            long long temp = b;
            long long multiple = 1;

           
            while ((temp << 1) <= a) {
                temp <<= 1;
                multiple <<= 1;
            }

            a -= temp;      
            result += multiple;
        }

        // Apply sign
        if (negative) result = -result;

        return (int)result;
    }
};
