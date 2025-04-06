/*

Given a string s consisting of words and spaces, return the length of the last word in the string.

A word is a maximal substring consisting of non-space characters only.

 

Example 1:

Input: s = "Hello World"
Output: 5
Explanation: The last word is "World" with length 5. 

*/
#include <iostream>
#include <string>
using namespace std;

int stringLen(string s) {
    int i = s.length() - 1;
    int len = 0;

    // Skip trailing spaces
    while (i >= 0 && s[i] == ' ') {
        i--;
    }

    // Count length of the last word
    while (i >= 0 && s[i] != ' ') {
        len++;
        i--;
    }

    return len;
}

int main() {
    string s = " i am Samjeet kumar";
    int result = stringLen(s);
    cout << "Length of last word: " << result << endl;
    return 0;
}
