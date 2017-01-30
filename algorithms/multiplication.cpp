#include <iostream>
#include <string>;
using namespace std;

int multiply1(int num1, int num2);
int multiply2(int num1, int num2);
int multiply3(int num1, int num2);

int long_multiplication(int num1, int num2);

int main() {
  int num1 = 4321;
  int num2 = 2345;

  cout << multiply1(num1, num2) << endl;
  cout << multiply2(num1, num2) << endl;
  cout << multiply3(num1, num2) << endl;
}

int multiply1(int num1, int num2) {
  return num1 * num2;
}

int multiply2(int num1, int num2) {
  return num1 * num2;
}

int multiply3(int num1, int num2) {
  return num1 * num2;
}

int long_multiplication(int num1, int num2) {
  string str_num2 = to_string(num2);
}
