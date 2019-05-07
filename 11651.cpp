#include <algorithm>
#include <iostream>
#include <vector>

int main(void)
{
	std::vector<std::pair<int, int>> v;
	int n;
	int x, y;

	std::cin >> n;

	for (int i = 0; i < n; i++) {
		std::cin >> x >> y;
		v.push_back(std::make_pair(y, x));
	}

	std::sort(v.begin(), v.end());

	for (auto& iter : v) 
		std::cout << iter.second << ' ' << iter.first << '\n';

	return 0;
}
