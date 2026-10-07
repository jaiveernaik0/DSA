#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }

        int original = x;
        long long rev = 0;
        int last_digit = 0;

        while (x > 0) {
            last_digit = x % 10;
            x = x / 10;
            rev = rev * 10 + last_digit;
        }

        return original == rev;
    }
};

int main() {
    int x;
    cin >> x;

    Solution s;

    cout << s.isPalindrome(x);

    return 0;
}