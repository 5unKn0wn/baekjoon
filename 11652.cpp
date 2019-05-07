#include <iostream>
#include <map>

int main(void)
{
	std::map<long long, int> m;
	long long num, max_value = 0x4000000000000001;	// 2**62+1
	int n, max_count = -1;

	std::cin >> n;

	for (int i = 0; i < n; i++) {
		std::cin >> num;
		if (m.find(num) != m.end())
			m[num] += 1;
		else
			m.insert(std::make_pair(num, 1));
	}

	for (auto& iter : m) {
		if (max_count < iter.second) {
			max_count = iter.second;
			max_value = iter.first;
		}
		else if (max_count == iter.second && max_value > iter.first) {
			max_count = iter.second;
			max_value = iter.first;
		}
	}

	std::cout << max_value << '\n';

	return 0;
}
