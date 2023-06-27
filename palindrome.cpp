class Solution {
public:
    bool isPalindrome(string s) {
      //Create two pointers
        int first = 0;
        int last = s.size() - 1;
      //While loop that iterates until the two pointers meet
        while (first <= last) {
          //If the character is not alphanumeric, skip it
            if(isalnum(s[first]) == false) {
                first++;
              //Once skipped, reiterate the while loop to make sure that the first <= last condition is still met
                continue;
            }
          //If the character is not alphanumeric, skip it
            if(isalnum(s[last]) == false) {
                last--;
              //Once skipped, reiterate the while loop to make sure that the first <= last condition is still met
                continue;
            }
          //If the characters do not match, it is not a palindrome
            if(tolower(s[first]) != tolower(s[last])) {
                return false;
            }
            else {
                first++;
                last--;
            }
        }
        return true;
    }
};
