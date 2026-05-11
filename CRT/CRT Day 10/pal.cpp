#include <iostream>
#include <string>
#include <cctype>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.length() - 1;

        while (left < right) {

            // Skip non-alphanumeric characters
            while (left < right && !isalnum(s[left])) {
                left++;
            }

            while (left < right && !isalnum(s[right])) {
                right--;
            }

            // Compare lowercase characters
            if (tolower(s[left]) != tolower(s[right])) {
                return false;
            }

            left++;
            right--;
        }

        return true;
    }
};

int main() {
    Solution obj;

    string s = "A man, a plan, a canal: Panama";

    if (obj.isPalindrome(s)) {
        cout << "true";
    } else {
        cout << "false";
    }

    
    return 0;
}