#include <algorithm>
#include <iostream>

int main(void)
{
	int n;
	int arr[1000000] = { 0, };

	std::cin >> n;
	for (int i = 0; i < n; i++) 
		std::cin >> arr[i];
	
	std::sort(arr, arr + n);

	for (int i = 0; i < n; i++)
		std::cout << arr[i] << '\n';

	return 0;
}
