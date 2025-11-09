//Count OPERATION TO OBTAIN ZERO
//OPTIMAL

class Solution {
public:
    int countOperations(int num1, int num2) {
        int count = 0;
while (num1 != 0 && num2 != 0) {
    if (num1 >= num2) {
        count += num1 / num2;//how many times smaller fits in larger 
        num1 %= num2;     //what remains after all those subs.    
    } else {
        count += num2 / num1;
        num2 %= num1;
    }
    }
    return count;
        
    }
};