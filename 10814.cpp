#include <algorithm>
#include <iostream>
#include <vector>

int main(void)
{
	std::vector<std::pair<int, std::string>> v;
	int n;
	int age;
	std::string name;

	std::cin >> n;

	for (int i = 0; i < n; i++) {
		std::cin >> age >> name;
		v.push_back(std::make_pair(age, name));
	}

	std::stable_sort(v.begin(), v.end(), [](std::pair<int, std::string> lhs, std::pair<int, std::string> rhs) {
		return lhs.first < rhs.first;
	});

	for (auto& iter : v) 
		std::cout << iter.first << ' ' << iter.second << '\n';

	return 0;
}
