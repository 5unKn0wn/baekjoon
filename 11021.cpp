#include <iostream>

int main(void)
{
	int n;
	int a, b;

	std::cin >> n;
	for (int i = 0; i < n; i++) {
		std::cin >> a >> b;
		std::cout << "Case #" << i + 1 << ": " << a + b << "\n";
	}

	return 0;
}
