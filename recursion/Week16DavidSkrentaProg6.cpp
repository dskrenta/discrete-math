#include <iostream>
using namespace std;

int sum(int x);

int main() {
  cout << sum(10) << endl;
}

int sum(int x) {
  int result = x;
  while(x > 0) {
    result += x - 1;
    x--;
  }
  return result;
}
