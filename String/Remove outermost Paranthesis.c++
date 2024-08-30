#include <iostream>
#include <string>
using namespace std;


string removeOutermostParentheses(const string& str) {
    // Check if the string has outermost parentheses
    if (str.length() > 1 && str.front() == '(' && str.back() == ')') {
        // Return the substring without the outermost parentheses
        return str.substr(1, str.length() - 2);
    }
    // Return the original string if no outermost parentheses found
    return str;
}

int main() {
    string str = "(()())(()()))";
    string result = removeOutermostParentheses(str);
    cout << "Original String: " << str << endl;
    cout << "Modified String: " << result << endl;
    return 0;
}