#include <iostream>
#include <vector>
int main()
{	 
	int data[5 * 5] = {
		1,2,3,4,5,
		1,0,2,0,4,
		2,3,0,2,3,
		3,1,2,3,2,
		1,2,3,0,2 };
	//8bit img {0~255};256
	//16bit img {0~65534}:65535
	int max_size = sizeof(data) / sizeof(int);
	//int max_value[6] = {0,};
	int vector_max = data[0];

	for (int i = 0; i < max_size; i++) {
		if (vector_max <=data[i]) vector_max = data[i];
	}
	std::vector <int> vector_value(vector_max+1,0);
	/*
	for (int i = 0; i < max_size; i++) {
		max_value[data[i]]++;
	}
	for (int i = 0; i < 6; i++) {
		std::cout <<i<< " - " << max_value[i] << std::endl;
	}
	for (int i = 0; i < 6; i ++ ) {
		std::cout <<i<< " - ";
		for (int j = 0; j < max_value[i]; j++) {
			std::cout << '=';
		}
		std::cout << std::endl;
	}
	*/

	for (int i = 0; i < max_size; i++) {
		vector_value[data[i]]++;
	}
	for (int i = 0; i < 6; i++) {
		std::cout << i << " - " << vector_value[i] << std::endl;
	}
	std::cout << std::endl;
	for (int row = 0; row < 6; row++) {
		std::cout << row << " | ";
		for (int col = 0; col < vector_value[row]; col++) {
			std::cout << '=';
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
	for (int row = 10; row >= 0; row--) {
		for (int col=0; col <= vector_max; col++) {
			if (vector_value[col] > row) std::cout << "= ";
			else std::cout << "  ";
		}
		std::cout << std::endl;
	}
	for (int i = 0; i <= vector_max; i++) {
		std::cout << i << " ";
	}
}

