#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int count = 0;
    int last_digit = 0;

    if (n==0){  
        count = 0;
    }

    else {
        while (n>0){
           last_digit = n%10 ;

           if(last_digit % 2 != 0){
                count++ ;
           }

           n = n/10;
        }
    }

    cout << count;

    return 0;
}