#include <iostream>
#include <string>
using namespace std;

class Solution {
private:
    string runLengthEncode(const string& input) {
        string result = "";
        int count = 1;

        for (int i = 1; i < input.length(); ++i) {
            if (input[i] == input[i - 1]) {
                count++;
            } else {
                result += to_string(count) + input[i - 1];
                count = 1;
            }
        }

        // Don't forget the last group
        result += to_string(count) + input.back();

        return result;
    }

public:
    string countAndSay(int n) {
        string result = "1";
        for (int i = 2; i <= n; ++i) {
            result = runLengthEncode(result);
        }
        return result;
    }
};

int main() {
    Solution solution;

    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    string result = solution.countAndSay(n);
    cout << "Count and Say for n = " << n << " is: " << result << endl;

    return 0;
}
