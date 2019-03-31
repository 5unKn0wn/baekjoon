#include <algorithm>
#include <iostream>
#include <string>

#define nswap(a, b) {int tmp; tmp = a; a = b; b = tmp;}

int main(void)
{
	std::string n1, n2, result;
	int carry = 0, borrow = 0;
	int sign1 = 1, sign2 = 1;
	int cur = 0;
	bool is_minus = false;

	std::cin >> n1 >> n2;

	if (n1[0] == '-') {
		sign1 = -1;
		n1 = n1.substr(1);
	}
	if (n2[0] == '-') {
		sign2 = -1;
		n2 = n2.substr(1);
	}
	if (sign1 == sign2 && sign1 == -1) {
		sign1 = 1;
		sign2 = 1;
		is_minus = true;
	}

	if (n1.length() < n2.length())
		n1 = std::string(n2.length() - n1.length(), '0') + n1;
	else if (n1.length() > n2.length())
		n2 = std::string(n1.length() - n2.length(), '0') + n2;

	if (n1.compare(n2) < 0) {
		n1.swap(n2);
		nswap(sign1, sign2);
	}

	if (sign1 != sign2 && sign1 == -1) {
		nswap(sign1, sign2);
		is_minus = true;
	}

	std::reverse(n1.begin(), n1.end());
	std::reverse(n2.begin(), n2.end());

	if (sign1 != sign2 && sign1 == -1) {
		n1.swap(n2);
		nswap(sign1, sign2);
	}

	for (int i = 0; i < n1.length(); i++) {
		int c1 = (n1[i] - '0') * sign1;
		int c2 = (n2[i] - '0') * sign2;

		if (sign1 == sign2) {
			cur = c1 + c2 + carry;
			if (cur > 9) {
				carry = cur / 10;
				cur = cur % 10;
			}
			else 
				carry = 0;
		}
		else {
			cur = c1 + c2 - borrow;
			if (cur < 0 && i != n1.length() - 1) {
				cur += 10;
				borrow = 1;
			}
			else if (cur < 0 && i == n1.length() - 1) {
				cur = -cur;
				borrow = 1;
			}
			else 
				borrow = 0;
		}
		result += (char)(cur + '0');
	}
	if (carry) {
		result += (char)(carry + '0');
	}
	else if (borrow) {
		std::cout << "-";
	}

	std::reverse(result.begin(), result.end());

	if (is_minus) {
		for (int i = 0; i < result.length(); i++) {
			if (result[i] != '0') {
				std::cout << "-";
				break;
			}
		}
	}

	bool num_start = false;
	for (int i = 0; i < result.length(); i++) {
		if (!num_start && result[i] == '0' && i != result.length() - 1)
			continue;
		num_start = true;
		std::cout << result[i];
	}

	return 0;
}
