class Solution {
public:
    bool rotateString(string s, string goal) {
         // If lengths differ, rotation is impossible
        if (s.size() != goal.size()) 
            return false;

        //concatenate s with itself if goal exists
        string doubled = s + s;

        // If goal is a substring of doubled, it's a valid rotation
        return doubled.find(goal) != string::npos;
        
    }
};