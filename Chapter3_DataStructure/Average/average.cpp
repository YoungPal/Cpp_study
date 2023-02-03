#include <iostream>
using namespace std;

int find_max(int *ptr, int size);
void change_value(int* before, int* after, int max_index, int size);
float make_average(int* after, int size);

int main() {
	int max = 0;
	float average = 0.0;
	int number;
	int before[10] = { 0, };
	int after[10] = { 0, };



	cin >> number;
	for (int i = 0; i < number; i++) {
		cin >> before[i];
	}
	max = find_max(before, number);
	change_value(before, after, max, number);
	average = make_average(after, number);
	printf("%5.2lf", average);
}

int find_max(int* ptr, int size) {
	int max=ptr[0];
	int i = 0;
	for (i; i < size-1; i++) {
		if (ptr[i] < ptr[i + 1]) {
			max = ptr[i + 1];
		}
	}
	return max;
}

void change_value(int* before, int* after, int max, int size) {
	for (int i = 0; i < size; i++) {
		after[i] = (before[i] / max) * 100;
	}
}

float make_average(int* after, int size) {
	int sum = 0;
	float average = 0.0;
	for (int i = 0; i < size; i++) {
		sum += after[i];
	}
	average = sum / size;
	return average;
}

