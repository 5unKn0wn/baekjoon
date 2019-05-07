#include <iostream>
#include <stack>

int main(void)
{
	std::stack<int> s;
	std::string cmd;
	int n, x;

	std::cin >> n;

	for (int i = 0; i < n; i++) {
		std::cin >> cmd;

		if (cmd == "push") {
			std::cin >> x;
			s.push(x);
		}
		else if (cmd == "pop") {
			if (s.size()) {
				std::cout << s.top() << '\n';
				s.pop();
			}
			else
				std::cout << -1 << '\n';
		}
		else if (cmd == "size")
			std::cout << s.size() << '\n';
		else if (cmd == "empty")
			std::cout << (s.empty() ? 1 : 0) << '\n';
		else if (cmd == "top") {
			if (s.size())
				std::cout << s.top() << '\n';
			else
				std::cout << -1 << '\n';
		}
	}

	return 0;
}
