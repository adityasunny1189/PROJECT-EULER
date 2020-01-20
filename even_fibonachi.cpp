#include<bits/stdc++.h>
using namespace std;
int main() {
  long long int sum = 0;
  int count = 0;
  int fib1 = 0;
  int fib2 = 1;
  long long int fib_next = 0;
  while(fib_next < 4000000) {
    fib_next = fib1 + fib2;
    if(fib_next % 2 == 0)
      sum += fib_next;
    cout << fib_next << " ";
    fib1 = fib2;
    fib2 = fib_next;
    count++;
    }
    cout << endl;
    cout << sum << endl;
  return 0;
}


// 1 1 2 3 5 8 13 21 34
