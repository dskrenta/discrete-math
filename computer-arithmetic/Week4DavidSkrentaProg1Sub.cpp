#include <iostream>
using namespace std;

int main () {
  /*
  // 170
  int num1 [10] = {0, 0, 1, 0, 1, 0, 1, 0, 1, 0};
  // 91 = 00 0101 1011
  int num2 [10] = {1, 0, 0, 0, 1, 0, 0, 1, 0, 0};
  int carry [10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
  int result [10];

  for (int i = 10; i > 0; i--) {
    int num = num1[i] + num2[i] + carry[i];
    if (num > 1) {
      carry[i - 1] = 1;
      result[i] = 0;
    } else {
      result[i] = num;
    }
  }

  for (int i = 0; i < 10; i++) {
    cout << result[i] << endl;
  }
  */

  // 170
  int num1 [10] = {0, 0, 1, 0, 1, 0, 1, 0, 1, 0};
  // 91 = 00 0101 1011
  // -91 = 10100101
  int num2 [10] = {0, 0, 0, 1, 0, 1, 1, 0, 1, 0};
  int carry;
  int sum[10];

  for (int i = 0; i < 10; i++) {
    sum[i] = ((num1[i] ^ num2[i]) ^ carry);
    carry = ((num1[i] & num2[i]) | (num1[i] & carry)) | (num2[i] & carry);
  }

  for (int i = 0; i < 10; i++) {
    cout << sum[i];
  }
  cout << endl;
}
