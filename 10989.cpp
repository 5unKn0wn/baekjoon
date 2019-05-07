#include <iostream>

int main(void)
{
	int arr[10001] = { 0, };
	int n, num;

	std::ios::sync_with_stdio(false);

	std::cin >> n;

	for (int i = 0; i < n; i++) {
		std::cin >> num;
		arr[num]++;
	}

	for (int i = 0; i < 10001; i++) {
		for (int j = 0; j < arr[i]; j++)
			std::cout << i << '\n';
	}

	return 0;
}
