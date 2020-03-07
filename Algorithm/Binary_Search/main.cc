#include <iostream>
#include <vector>
#include <algorithm>

void foo(int i) {
	std::cout << " " << i;
}

bool ascend (int i, int j) {return i<j;}
bool descend (int i, int j) {return i>j;}

int main() {
	int nums_arr[] = {1,2,3,4,5,4,3,2,1};
	std::vector<int> nums_vec(nums_arr,nums_arr+9);

	std::cout << "nums_vec array contains:";
	std::for_each(nums_vec.begin(), nums_vec.end(), foo);
	std::cout << "\n";

	std::sort(nums_vec.begin(), nums_vec.end(), ascend);

	std::cout << "nums_vec array contains:";
	std::for_each(nums_vec.begin(), nums_vec.end(), foo);
	std::cout << "\n";

	std::cout << "looking for a 3... ";
	if (std::binary_search(nums_vec.begin(), nums_vec.end(), 3, ascend))
		std::cout << "found!\n";
	else std::cout << "not found.\n";

	return 0;
}
