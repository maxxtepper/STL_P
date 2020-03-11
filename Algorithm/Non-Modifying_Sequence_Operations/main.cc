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

	{
		//	find
		//	array
		int *p = std::find(arr, arr+4, 2);
		if (p != arr+4)
			std::cout << "Element found in arr: " << *p << std::endl;
		else
			std::cout << "Element not found in arr\n";
		//	std::array
		auto pend = nums_arr.begin() + 4;
		if (std::find(nums_arr.begin(), pend, 3) != pend)
			std::cout << "Element found in nums_arr" << std::endl;
		else
			std::cout << "Element not found in nums_arr\n";
		//	std::vector
		std::vector<int>::iterator pitr;
		pitr = std::find(nums_vec.begin(), nums_vec.end(), 3);
		if (pitr != nums_vec.end())
			std::cout << "Element found in nums_vec: " << *pitr << std::endl;
		else
			std::cout << "Element not found in nums_vec\n";
		//	std::set
		std::set<int>::iterator sitr;
		sitr = std::find(nums_set.begin(), nums_set.end(), 3);
		if (sitr != nums_set.end())
			std::cout << "Element found in nums_set: " << *sitr << std::endl;
		else
			std::cout << "Element not found in nums_set\n";
	}

	{
		//	find_if
		//	std::vector
		std::vector<int>::iterator vitr;
		vitr = std::find_if(nums_vec.begin(), nums_vec.end(), [](int i){return !(i%4);});
		if (vitr != nums_vec.end())
			std::cout << "nums_vec has element divisible by 4: " << *vitr << std::endl;
		else
			std::cout << "nums_vec has no element divisible by 4\n";
		//	std::set
		std::set<int>::iterator sitr;
		sitr = std::find_if(nums_set.begin(), nums_set.end(), [](int i){return !(i%5);});
		if (sitr != nums_set.end())
			std::cout << "nums_set has element divisible by 5: " << *sitr << std::endl;
		else
			std::cout << "nums_set has no element divisible by 5\n";
	}

	{
		//	find_if_not
		//	std::vector
		std::vector<int>::iterator vitr;
		vitr = std::find_if_not(nums_vec.begin(), nums_vec.end(), [](int i){return i%4;});
		if (vitr != nums_vec.end())
			std::cout << "nums_vec has element divisible by 4: " << *vitr << std::endl;
		else
			std::cout << "nums_vec has no element divisible by 4\n";
		//	std::set
		std::set<int>::iterator sitr;
		sitr = std::find_if_not(nums_set.begin(), nums_set.end(), [](int i){return i%5;});
		if (sitr != nums_set.end())
			std::cout << "nums_set has element divisible by 5: " << *sitr << std::endl;
		else
			std::cout << "nums_set has no element divisible by 5\n";
	}

	

	return 0;
}
