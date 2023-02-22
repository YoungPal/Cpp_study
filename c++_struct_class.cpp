//struct
//class

#include <iostream>
#include <stdio.h>
#include <vector>

enum {
	eEnglish,  //0
	eMath,	   //1
	eKorean,   //2
	eClassMax  //3
} ECLASS;


/*
enum {
	eEnglish,  //0
	eMath=5,   //1->5
	eKorean,   //2->6
	eClassMax  //3->7
} ECLASS; //문자를 상수화 시켜놓은 타입?
		  //보통 배열의 크기를 지정할 때 사용?
		  //반복문에서 배열의 최대 크기를 배열[eClassMax]로 선언한 경우 eClassMax로 사용할 수 있다.
*/
struct _stStudentInfo
{
	//int eng, math, kor;
	int scores[eClassMax];
	std::string Name;
	//0 - english
	//1 - math
	//2 - Korean
	int sum, min, max;
	float average;
};
/*
sti.scores[eEnglish] = 5; //eEnglish의 해당 index번호를 고려하지않고 직관적인 판단으로 값을 대입할 수 있다.
scores[eKorean] = 3;
*/


int sum(int* scores, int length) {
	int result = 0;
	for (size_t i = 0; i < length; i++)
	{
		result += scores[i];
	}
	return result;
}
float average(int* scores, float length, float sum) {
	return sum / length;
}
int min(int* scores, int length) {
	int result = scores[0];
	for (size_t i = 1; i < length; i++) {
		if (result > scores[i]) result = scores[i];
	}

	return result;
}
int max(int* scores, int length) {
	int result = scores[0];
	for (size_t i = 1; i < length; i++) {
		if (result < scores[i]) result = scores[i];
	}
	return result;
}
void display(_stStudentInfo* ptr) {
	std::cout << "[" << ptr->Name << "]" << std::endl;
	std::cout << "english - " << ptr->scores[0] << ", math - " << ptr->scores[1] << ", korea - " << ptr->scores[2] << std::endl;
	std::cout << "sum - " << ptr->sum << ", average - " << ptr->average << ", min - " << ptr->min << ", max - " << ptr->max << std::endl<<std::endl;
}

void Calc(_stStudentInfo* ptr)
{
	int length = eClassMax;
	ptr->sum=sum(ptr->scores, length);
	ptr->average=average(ptr->scores, length, (float)ptr->sum);
	ptr->min=min(ptr->scores, length);
	ptr->max=max(ptr->scores, length);
}

int main() {
	_stStudentInfo student;
	student.Name = "JYH";
	student.scores[eEnglish] = 90;
	student.scores[eMath] = 95;
	student.scores[eKorean] = 92;

	Calc(&student);
	display(&student);
	
	int input_scores[eClassMax] = { 0, };
	char input_CQ;

	std::vector<_stStudentInfo> vStudents;

	do {
		_stStudentInfo newStudent;
		
		std::cout << "Continue : C, Quit : Q => ";
		std::cin >> input_CQ;
		std::cout << "input_Name => ";
		std::cin >> newStudent.Name;
		std::cout << "input_socres(english/math/korean) : ";
		for (size_t i = 0; i < eClassMax; i++)
		{
			std::cin >> input_scores[i];
			newStudent.scores[i] = input_scores[i];
		}
		Calc(&Student);
		
	} while (input_CQ != 'Q');



	//1차
	//함수 ...sum, average, min, max
	//@para scores[], length
	//return ...sum(int), average(float), min/max(int)

	//display
	// [이름]
	//english - ??, math - ??, korea -??
	//sum - ??, average - ??, min - ??, max - ??

	//2차 - 자동으로 입력 및 성적 정보 출력
	//사용자로부터 입력을 받습니다.
	//struct에 string name을 입력
	//각 eng, math, kor 점수를 입력
	//위 display로 출력을 합니다.
	//Q입력을 받으면 더 이상 입력을 하지 않습니다.
}
