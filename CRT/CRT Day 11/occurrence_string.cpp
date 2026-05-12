#include <iostream>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {

        int n = haystack.length();
        int m = needle.length();

        // Traverse haystack
        for(int i = 0; i <= n - m; i++) {

            int j;

            // Compare characters
            for(j = 0; j < m; j++) {

                if(haystack[i + j] != needle[j]) {
                    break;
                }
            }

            // If all characters match
            if(j == m) {
                return i;
            }
        }

        return -1;
    }
};

int main() {

    Solution obj;

    string haystack = "sadbutsad";
    string needle = "sad";

    int result = obj.strStr(haystack, needle);

    cout << result;

    return 0;
}