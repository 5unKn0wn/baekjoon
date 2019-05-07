#include <algorithm>
#include <iostream>

int main(void)
{
	int arr[5000000];
	int n, k;

	std::ios::sync_with_stdio(false);

	std::cin >> n >> k;

	for (int i = 0; i < n; i++)
		std::cin >> arr[i];

	std::partial_sort(arr, arr + k, arr + n);

	std::cout << arr[k - 1] << '\n';

	return 0;
}
