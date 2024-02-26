#include <iostream>


int main() {
	int base_number = 0;
	
	std::cout << "Input the base number: ";
	std::cin >> base_number;
	
	for (int i = 1; i <= base_number; i++) {
		if (i > base_number / 2) { // This is here to skip unnecessary iterations since past the halfway point, there's no factors to be found. 
			std::cout << base_number;
			break;
		} 
		else if ((base_number % i) == 0) {
			std::cout << i << ", ";
		}
	}

	return 0;
}