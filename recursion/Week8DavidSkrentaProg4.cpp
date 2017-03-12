#include <iostream>
using namespace std;

int myFactorial(int x);

int main() {
  cout << myFactorial(7) << endl;
}

int myFactorial(int x) {
  int result = x;
  while(x > 1) {
    result *= x - 1;
    x--;
  }
  return result;
}
