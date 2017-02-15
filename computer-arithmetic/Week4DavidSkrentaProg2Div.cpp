#include <iostream>
using namespace std;

void divideBy10();
void divideBy100();

int main() {
  divideBy10();
  divideBy100();
}

void divideBy10() {
  int num1[10] = {0, 0, 0, 1, 1, 0, 0, 1, 0, 0};
  int divisor[10] = {0, 0, 0, 0, 0, 0, 1, 0, 1, 0};
  int num2[10] = {0, 0, 0, 0, 0, 0, 0, 1, 1, 1};
  int sum[10];
  int carry;

  for(int i = 0; i < 10; i++) {
    sum[i] = ((num1[i] ^ num2[i]) ^ carry);
    carry = ((num1[i] & num2[i]) | (num1[i] & carry)) | (num2[i] & carry);
  }

  for(int i = 0; i < 10; i++) {
    cout << sum[i];
  }
  cout << endl;
}

void divideBy100() {
  int num1[10] = {0, 0, 0, 1, 1, 0, 0, 1, 0, 0};
  int divisor[10] = {1, 1, 1, 1, 1, 0, 1, 0, 0, 0};
  int num2[10] = {0, 0, 0, 0, 0, 0, 1, 1, 1, 1};
  int sum[10];
  int carry;

  for(int i = 0; i < 10; i++) {
    sum[i] = ((num1[i] ^ num2[i]) ^ carry);
    carry = ((num1[i] & num2[i]) | (num1[i] & carry)) | (num2[i] & carry);
  }

  for(int i = 0; i < 10; i++) {
    cout << sum[i];
  }
  cout << endl;
}
