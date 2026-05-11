#include <iostream>
#include <stack>
#include <sstream>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {

        stack<string> st;
        stringstream ss(s);
        string word;

        // Store words in stack
        while (ss >> word) {
            st.push(word);
        }

        string result = "";

        // Pop words in reverse order
        while (!st.empty()) {
            result += st.top();
            st.pop();

            if (!st.empty()) {
                result += " ";
            }
        }

        return result;
    }
};

int main() {

    Solution obj;

    string s = "the sky is blue";

    cout << obj.reverseWords(s);
    return 0;
}