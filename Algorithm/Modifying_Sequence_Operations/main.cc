#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <iterator>

void Print(int i) {
	std::cout << " " << i;
}

int main() {
	std::vector<int> nums_vec = {3,1,7,5,1};
	std::cout << "nums_vec contains:";
	std::for_each(nums_vec.begin(), nums_vec.end(), Print);
	std::cout << "\n";

	//	std::copy
	//	std::vector -> std::vector
	std::vector<int> new_nums_vec;
	std::copy(nums_vec.begin(), nums_vec.end(), std::back_inserter(new_nums_vec));
	std::cout << "new_nums_vec contains:";
	std::for_each(new_nums_vec.begin(), new_nums_vec.end(), Print);
	std::cout << "\n";
	//	std::vector -> std::set
	std::set<int> nums_set;
	std::copy(nums_vec.begin(), nums_vec.end(), std::inserter(nums_set,nums_set.begin()));
	std::cout << "nums_set contains:";
	std::for_each(nums_set.begin(), nums_set.end(), Print);
	std::cout << "\n";

	//	std::copy_n
	//	std::set -> std::vector
	std::vector<int> nums_vec_n;
	size_t N = 3;
	std::copy_n(nums_set.begin(), N, std::back_inserter(nums_vec_n));
	std::cout << "nums_vec_n contains:";
	std::for_each(nums_vec_n.begin(), nums_vec_n.end(), Print);
	std::cout << "\n";

	return 0;
}
