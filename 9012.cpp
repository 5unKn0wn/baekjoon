#include <iostream>
#include <stack>

int main(void)
{
	std::string inp;
	int n;

	std::cin >> n;

	for (int i = 0; i < n; i++) {
		std::stack<int> s;
		int ok = 1;
		
		std::cin >> inp;
		for (int j = 0; j < inp.length(); j++) {
			if (inp[j] == '(')
				s.push(1);
			else if (inp[j] == ')') {
				if (s.empty()) {
					std::cout << "NO\n";
					ok = 0;
					break;
				}
				s.pop();
			}
		}
		if (ok) {
			if (s.empty())
				std::cout << "YES\n";
			else
				std::cout << "NO\n";
		}
	}

	return 0;
}
