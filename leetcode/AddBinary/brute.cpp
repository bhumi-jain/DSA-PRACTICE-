//ADD BINARY
//BRUTE FORCE

class Solution {
public:
    string addBinary(string a, string b) {
    int i = a.length() - 1;
    int j = b.length() - 1;
    int carry = 0;
    string result = "";

    // Step-by-step addition
    while (i >= 0 || j >= 0 || carry) {
        int bitA = 0, bitB = 0;

        // Get bits from a and b if available
        if (i >= 0) bitA = a[i--] - '0';
        if (j >= 0) bitB = b[j--] - '0';

        int sum = bitA + bitB + carry;

        // Current bit = sum % 2 (remainder)
        result += (sum % 2) + '0';

        // Carry = sum / 2 (either 0 or 1)
        carry = sum / 2;
    }

    // Since we added bits from right to left, reverse the result
    reverse(result.begin(), result.end());

    return result;
    }
};