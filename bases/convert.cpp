#include <iostream>
#include <string>
#include <stack>
using namespace std;

void convertDecimalToBinary (int num);
void convertDecimalToOctal (int num);
void convertDecimalToHexademical (int num);

int main () {
  int num = 25;

  convertDecimalToBinary(num);
  cout << endl;
  convertDecimalToOctal(num);
  cout << endl;
  convertDecimalToHexademical(num);
  cout << endl;
}

void convertDecimalToBinary (int num) {
  int output;

  if (num <= 1) {
      cout << num;
      return;
  }

  output = num % 2;
  convertDecimalToBinary(num / 2);
  cout << output;
}

void convertDecimalToHexademical (int num) {
  int output;
  std::string value;
  stack <string> values;
  string hexChars[] = {"A", "B", "C", "D", "E", "F"};

  while (num <= 1) {
    output = num % 16;
    if (output > 9) {
      // convert to hexChar
      value = hexChars[output - 10];
    } else {
      value = std::to_string(output);
    }
    values.push(value);
    num /= 16;
  }

  while (values.size() != 0) {
    cout << values.pop();
  }
}
