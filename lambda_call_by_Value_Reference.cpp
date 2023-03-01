#include <iostream>
using namespace std;

int main()
{
	//Lamda..Call by Value 
	//put return_type of function
	double pi = 3.14;
	auto calc = [pi](int r) -> double {return pi * r * r; }; //Call by value(pi=3.14)
	cout << "면적은 " << calc(3) << endl; //람다식 호출 

	//Lamda..Call by Reference
	int sum = 0;
	[&sum](int x, int y) {sum = x + y; }(2, 3); //@para (x, y) <- (2, 3)
	cout << "합은 " << sum;
}