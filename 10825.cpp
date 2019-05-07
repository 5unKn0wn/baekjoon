#include <algorithm>
#include <iostream>
#include <vector>
#include <tuple>

enum { NAME = 0, KOR, ENG, MATH };
int main(void)
{
	std::vector<std::tuple<std::string, int, int, int>> v;
	std::string name;
	int kor, eng, math;
	int n;

	std::cin >> n;

	for (int i = 0; i < n; i++) {
		std::cin >> name >> kor >> eng >> math;
		v.push_back(std::make_tuple(name, kor, eng, math));
	}

	std::sort(v.begin(), v.end(), [](std::tuple<std::string, int, int, int> lhs, std::tuple<std::string, int, int, int> rhs) {
		if (std::get<KOR>(lhs) == std::get<KOR>(rhs)) {
			if (std::get<ENG>(lhs) == std::get<ENG>(rhs)) {
				if (std::get<MATH>(lhs) == std::get<MATH>(rhs))
					return std::get<NAME>(lhs) < std::get<NAME>(rhs);
				else 
					return std::get<MATH>(lhs) > std::get<MATH>(rhs);
			}
			else 
				return std::get<ENG>(lhs) < std::get<ENG>(rhs);
		}
		else
			return std::get<KOR>(lhs) > std::get<KOR>(rhs);
	});

	for (auto& iter : v) 
		std::cout << std::get<NAME>(iter) << '\n';

	return 0;
}
