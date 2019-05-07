#include <algorithm>
#include <iostream>
#include <vector>

int main(void)
{
	std::vector<std::pair<int, int>> v;
	int n;
	int num1, num2;

	std::cin >> n;

	for (int i = 0; i < n; i++) {
		std::cin >> num1 >> num2;
		v.push_back(std::make_pair(num1, num2));
	}

	std::sort(v.begin(), v.end());

	// for (auto iter = v.begin(); iter != v.end(); iter++)
	// 	std::cout << iter->first << ' ' << iter->second << '\n';
	
	for (auto& iter : v)
		std::cout << iter.first << ' ' << iter.second << '\n';

	return 0;
}
