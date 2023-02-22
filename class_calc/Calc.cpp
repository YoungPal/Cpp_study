#include "Calc.h"

//备泅何
//Calc::Calc()
//	:number1(0)
//	, number2(0)
//	, symbol(' ')
//	, result(0)
//{
//}
Calc::Calc()
	:Calc(1,1,' ')//困烙积己磊
{
	cout << "Calc::Ctor1" << endl;
}

Calc::Calc(int a, int b, char sym)
	:number1(a)
	, number2(b)
	, symbol(sym)
	, result(0)
{
	cout << "Calc::Ctor2" << endl;
}

Calc::~Calc()
{
	cout << "Calc::Dtor" << endl;
}

void Calc::Clear()
{
	number1 = 0;
	number2 = 0;
	symbol = ' ';
	result = 0;
}

void Calc::SetValue(int num1, int num2, char sym)
{
	number1 = num1;
	number2 = num2;
	symbol = sym;
}

int Calc::DoSum()
{
	result = number1 + number2;
	return result;
}	 

int Calc::DoMul()
{
	result = number1 * number2;
	return result;
}

int Calc::DoSub()
{
	result = number1 - number2;
	return result;
}

int Calc::DoDiv()
{
	result = number1 / number2;
	return result;
}

int Calc::GetResult()
{
	return result;
}

int Calc::sum(const int* const pData, size_t length)
{
	for (size_t i = 0; i < length; i++)
	{
		result += pData[i];
	}
	return result;
}

float Calc::average(const int* const pData, float length, float sum)
{
	return sum / length;
}

int Calc::max(const int* const pData, size_t length)
{
	result = pData[0];
	for (size_t i = 1; i < length; i++) {
		if (result < pData[i]) result = pData[i];
	}
	return result;
}

int Calc::min(const int* const pData, size_t length)
{
	result = pData[0];
	for (size_t i = 1; i < length; i++) {
		if (result > pData[i]) result = pData[i];
	}

	return result;
}

void Calc::display(_stStudentInfo* const pStruct)
{
	std::cout << "[" << pStruct->Name << "]" << std::endl;
	std::cout << "english - " << pStruct->scores[0] << ", math - " << pStruct->scores[1] << ", korea - " << pStruct->scores[2] << std::endl;
	std::cout << "sum - " << pStruct->sum << ", average - " << pStruct->average << ", min - " << pStruct->min << ", max - " << pStruct->max << std::endl << std::endl;
}

void Calc::in_Calc(_stStudentInfo* const pStruct)
{
	int length = eClassMax;
	pStruct->sum = sum(pStruct->scores, length);
	pStruct->average = average(pStruct->scores, length, (float)pStruct->sum);
	pStruct->min = min(pStruct->scores, length);
	pStruct->max = max(pStruct->scores, length);
}
