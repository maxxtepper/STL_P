#include <iostream>
#include <algorithm>
#include <vector>
#include <set>

void Print(int i) {
	std::cout << " " << i;
}

int main() {
	std::vector<int> nums_vec = {3,1,7,5,1};
	std::cout << "nums_vec contains:";
	std::for_each(nums_vec.begin(), nums_vec.end(), Print);
	std::cout << "\n";

	//	std::make_heap
	std::cout << "nums_vec make_heap:";
	std::make_heap(nums_vec.begin(), nums_vec.end());
	std::for_each(nums_vec.begin(), nums_vec.end(), Print);
	std::cout << "\n";

	//	std::pop_heap
	std::cout << "nums_vec pop_heap:";
	std::pop_heap(nums_vec.begin(), nums_vec.end()); nums_vec.pop_back();
	std::for_each(nums_vec.begin(), nums_vec.end(), Print);
	std::cout << "\n";

	//	std::push_heap
	nums_vec.push_back(14);
	std::cout << "nums_vec pushed 14:";
	std::for_each(nums_vec.begin(), nums_vec.end(), Print);
	std::cout << "\n";
  std::cout << "nums_vec push_heap:";
	std::push_heap(nums_vec.begin(), nums_vec.end());
	std::for_each(nums_vec.begin(), nums_vec.end(), Print);
	std::cout << "\n";

	//	std::sort_heap
	std::cout << "nums_vec sort_heap:";
	std::sort_heap(nums_vec.begin(), nums_vec.end());
	std::for_each(nums_vec.begin(), nums_vec.end(), Print);
	std::cout << "\n";
	
	//	std::is_heap
	std::cout << "nums_vec is_heap:";
	if (std::is_heap(nums_vec.begin(), nums_vec.end()))
		std::cout << " is heap\n";
	else std::cout << " is not heap\n";
	//	std::make_heap
	std::cout << "nums_vec make_heap:";
	std::make_heap(nums_vec.begin(), nums_vec.end());
	std::for_each(nums_vec.begin(), nums_vec.end(), Print);
	std::cout << "\n";
	//	std::is_heap
	std::cout << "nums_vec is_heap:";
	if (std::is_heap(nums_vec.begin(), nums_vec.end()))
		std::cout << " is heap\n";
	else std::cout << " is not heap\n";

	return 0;
}
