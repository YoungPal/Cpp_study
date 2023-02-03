#include <iostream>
using namespace std;

float find_max(float *ptr, int size);
void change_value(float* before, float* after, int max_index, int size);
float make_average(float* after, int size);

int main() {
	float max = 0;
	float average = 0.0;
	int number;
	float before[10] = { 0, };
	float after[10] = { 0, };



	cin >> number;
	for (int i = 0; i < number; i++) {
		cin >> before[i];
	}
	max = find_max(before, number);
	change_value(before, after, max, number);
	average = make_average(after, number);
	printf("%5.2lf", average);
}

float find_max(float* ptr, int size) {
	float max=ptr[0];
	int i = 0;
	for (i; i < size-1; i++) {
		if (ptr[i] < ptr[i + 1]) {
			max = ptr[i + 1];
		}
	}
	return max;
}

void change_value(float* before, float* after, int max, int size) {
	for (int i = 0; i < size; i++) {
		after[i] = (before[i] / max) * 100;
	}
}

float make_average(float* after, int size) {
	float sum = 0;
	float average = 0.0;
	for (int i = 0; i < size; i++) {
		sum += after[i];
	}
	average = sum / size;
	return average;
}

