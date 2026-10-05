#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    int last_digit = 0;
    int rev = 0;
    while(n>0){
        last_digit = n%10;

        n = n /10;

        rev = rev * 10 + last_digit;
    }
    cout << rev;

    return 0;
}