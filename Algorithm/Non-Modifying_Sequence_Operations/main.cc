#include <iostream>
#include <algorithm>
#include <array>
#include <vector>
#include <set>

void foo(int i) {
	std::cout << " " << i;
}

void find_set_vector(int i) {
	//	This should be the value in some set at iterator
}

int main() {
	int arr[] = {3,1,7,5};
	std::array<int,4> nums_arr = {3,1,7,5};
	std::vector<int> nums_vec(arr,arr+4);
	std::set<int> nums_set(arr,arr+4);

	//	all_of
	//	std::array
	if (std::all_of(nums_vec.begin(), nums_vec.end(), [](int i){return (i%2);}))
		std::cout << "All the elements in nums_arr are odd numbers.\n";
	else
		std::cout << "Not all the elements in nums_arr are odd numbers.\n";
	//	std::set
	if (std::all_of(nums_set.begin(), nums_set.end(), [](int i){return (i%2);}))
		std::cout << "All the elements in nums_set are odd numbers.\n";
	else
		std::cout << "Not all the elements in nums_set are odd numbers.\n";

	//	any_of
	//	std::array
	if (std::any_of(nums_arr.begin(), nums_arr.end(), [](int i){return i<0;}))
		std::cout << "There are negative elements in nums_arr the range.\n";
	else
		std::cout << "There are no negative elements in nums_arr the range.\n";
	//	std::set
	if (std::any_of(nums_set.begin(), nums_set.end(), [](int i){return i<0;}))
		std::cout << "There are negative elements in nums_set the range.\n";
	else
		std::cout << "There are no negative elements in nums_set the range.\n";

	//	none_of
	//	std::array
	if (std::none_of(nums_arr.begin(), nums_arr.end(), [](int i){return i<0;}))
		std::cout << "There are no negative elements in nums_arr the range.\n";
	else
		std::cout << "There are negative elements in nums_arr the range.\n";
	//	std::set
	if (std::none_of(nums_set.begin(), nums_set.end(), [](int i){return i<0;}))
		std::cout << "There are no negative elements in nums_set the range.\n";
	else
		std::cout << "There are negative elements in nums_set the range.\n";

	//	for_each
	//	std::array
	std::cout << "nums_arr array contains:";
	std::for_each(nums_arr.begin(), nums_arr.end(), foo);
	std::cout << "\n";
	//	std::set
	std::cout << "nums_set array contains:";
	std::for_each(nums_set.begin(), nums_set.end(), foo);
	std::cout << "\n";

	{
		//	for_each, find, from set, in vector
		//	find each element from set in vector
	}

	return 0;
}
