#include <iostream>

int main(void)
{
	std::string inp;
	int count = 0, cur = 0;

	std::cin >> inp;

	for (int i = 0; i < inp.length(); i++) {
		if (inp[i] == '(' && inp[i + 1] == ')') {
			count += cur;
			i += 1;
		}
		else if (inp[i] == '(' && inp[i + 1] == '(') {
			cur += 1;
			count += 1;
		}
		else if (inp[i] == ')')
			cur -= 1;
	}

	std::cout << count << '\n';

	return 0;
}
