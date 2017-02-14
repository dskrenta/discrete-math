#include <iostream>
using namespace std;

int multiply1(double num1, double num2);
int multiply2(int num1, int num2);
int multiply3(int num1, int num2);

int * splitNum(int num);
int getNumLength(int num);

int main() {
  int num1 = 4321;
  int num2 = 2345;

  cout << multiply1(num1, num2) << endl;
  cout << multiply2(num1, num2) << endl;
  cout << multiply3(num1, num2) << endl;
}

int multiply1(double num1, double num2) {
  return num1 / (1 / num2);
}

int multiply2(int num1, int num2) {
  return num1 * num2;
}

int multiply3(int num1, int num2) {
  int *digits;
  digits = splitNum(num2);

  return num1 * num2;
}

int * splitNum(int num) {
  int digits[getNumLength(num)];
  int index = 0;
  while (num > 0) {
    int digit = num % 10;
    num /= 10;
    index++;
    digits[index] = digit;
  }
  return digits;
}

int getNumLength(int num) {
  int length = 1;
  while (num /= 10) {
    length++;
  }
  return length;
}
