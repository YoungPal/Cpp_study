#pragma once
#include "common.h"
#define eEnglish 0
#define eMath 1
#define eKorean 2
#define eClassMax 3

struct _stStudentInfo
{
	int scores[eClassMax];
	std::string Name;

	int sum, min, max;
	float average;
};

class Calc
{
public:
	//생성자
	Calc();//Ctor...default Ctor
	//overloading
	//Calc(int a = 1, int b = 2, char sym = ' ');
	Calc(int a, int b, char sym);
	//소멸자
	~Calc();//Dtor

	void Clear();
	void SetValue(int num1, int num2, char sym);
	int DoSum();
	int DoMul();
	int DoSub();
	int DoDiv();
	int GetResult();

	int sum(const int* const pData, size_t length);
	float average(const int* const pData, float length, float sum);
	int max(const int* const pData, size_t length);
	int min(const int* const pData, size_t length);
	void display(_stStudentInfo* const pStruct);
	void in_Calc(_stStudentInfo* const pStruct);

private: //외부에서 접근이 되지 않음 ex) calc.number1(x)
	int number1=0;
	int number2=0;
	char symbol=NULL;
	int result=0;
};

/*usage*/
/*7.cpp_class.cpp 만드세요

#include "Calc.h"
int main()
{
	Calc calc;
	calc.SetValue(1,2,'+');
	calc.DoSum();
	cout<<"두 수의 합은 "<<calc.GetResult()<<endl;
}
//console 창의 상태를 캡쳐하세요.

*/