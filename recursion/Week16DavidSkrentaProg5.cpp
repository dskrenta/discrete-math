#include <iostream>
using namespace std;

int recursiveSum(int x, int sum);

int main() {
  cout << recursiveSum(10, 0) << endl;
}

int recursiveSum(int x, int sum) {
  if(x == 0) {
    return sum;
  } else {
    sum += x--;
    return recursiveSum(x--, sum);
  }
}
