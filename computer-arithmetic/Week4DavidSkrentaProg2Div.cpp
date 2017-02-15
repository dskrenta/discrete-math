#include <iostream>
using namespace std;

int main () {
  // int num1[10] = {0, 0, 0, 0, 0, 0, 1, 0, 1, 0};
  // int divisor[10] = {0, 0, 0, 0, 0, 0, 1, 0, 1, 0};

  int num = 100;
  int divisor = 10;
  int result = 0;
  int temp;

  while (temp < num) {
    temp += divisor;
    result++;
  }

  cout << result << endl;
}
