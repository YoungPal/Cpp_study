//Quiz
//namespace를 이용하여 사직연산 계산기를 만들어 봅니다.
//두 수 a,b 입력을 받습니다.
//계산할 기호 +,-,/,* 입력을 받습니다.
//namespace Calc{} 선언합니다.
//Calc namespace에는 add, sub, mul, div
//입력과 출력은 cin, cout을 사용합니다.

#include <iostream>

using namespace std;

namespace Calc
{
	double x=0, y=0, resVal=0;
	char symbol=' ';

	double add() { return x + y; }
	double sub() { return x - y; }
	double mul() { return x * y; }
	double div() { return x / y; }
	double result() {
		switch (symbol)
		{
		case '+':
			resVal=add();
			break;
		case '-':
			resVal=sub();
			break;
		case '*':
			resVal=mul();
			break;
		case '/':
			resVal=div();
			break;
		default:
			cout << "wrong input" << endl;
		}
		return resVal;
	}
/*
	double result;
	double calc()
	{		
		switch (symbol)
		{
		case '+':
			result = x + y;
			break;
		case '-':
			result = x - y;
			break;
		case '*':
			result = x * y;
			break;
		case '/':
			result = x / y;
			break;
		default :
			cout << "wrong input" << endl;
		}		
		return result;
	}
	*/
}

using namespace Calc;

int main() {
	//namespace를 연동하면 함수뿐만 아니라 변수도 그대로 가져다 쓸 수 있다.
	cout << "input (x,y) => ";
	cin >> x >> y; // x - Calc::x / y - Calc::y
	cout << "select calc => ";
	cin >> symbol; // symbol - Calc::symbol
	cout << result(); // reuslt() - Calc::result()

	return 1;
}

