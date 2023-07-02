class Solution {
public:
    bool isValid(string s) {
        stack<char> cont;
        for (char x : s) {
            if (x == '(' || x == '[' || x == '{') {
                cont.push(x);
            } else {
                if (cont.empty()) {
                    return false;
                }
                if (x == ')' && cont.top() == '(') {
                    cont.pop();
                }
                else if (x == ']' && cont.top() == '[') {
                    cont.pop();
                }
                else if (x == '}' && cont.top() == '{') {
                    cont.pop();
                }
                else {
                    return false;
            }
            }
        }
        return cont.empty();
    }
};
