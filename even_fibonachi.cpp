#include<bits/stdc++.h>
using namespace std;
int main() {
  int count = 0;
  int fib1 = 0;
  int fib2 = 1;
  while(count < 10) {
    int fib_next = fib1 + fib2;
    cout << fib_next << " ";
    fib1 = fib2;
    fib2 = fib_next;
    count++;
    }
    cout << endl;
  return 0;
}


// 1 1 2 3 5 8 13 21 34
