#include <iostream>
#include <string>

using namespace std;

//Функция перевода числа в строку

string number_to_string(int num) {
	int last_number;
	string result{""};

	bool sign = false;

	if (num < 0) 
	{
		num *= (-1);
		sign = !sign;
	}

	while (num != 0)
	{
		last_number = num % 10;
		num = num / 10;

		result += to_string(last_number);
	}

	if (sign == true) { result += '-'; }

	string tmp;
	char timp;

	for (int i = result.length(); i > 0; i--)
	{
		timp = result[i - 1];
		tmp += timp;
	}

	return tmp;
}

-----------------------------------------------------------------

#include <string>

std::string number_to_string(int num) {
  return std::to_string(num);
}

-----------------------------------------------------------------

#include <string>
#include <sstream>

std::string number_to_string(int num) {
      std::string s;
      std::stringstream ss;
      ss << num;
      ss >> s;
      return s;
}
