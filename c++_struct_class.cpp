//struct
//class
#include<iostream>
#include<stdio.h>
#include <vector>
#include <string>

//학생정보-성적
enum  {
	eEnglish,	//0
	eMath,		//eMath=5, 1->5
	eKorean,	//2->6
	eClassMax	//6->7
} ECLASS;
struct _stStudentInfo
{
	//int eng, math, kor;
	int scores[eClassMax];
	//0 - english
	//1 - math
	//2 - Korean
	int sum, min, max;
	float average;
};
//1?...50...하드코딩???
//scores[eEnglish] = 5;
//scores[eKorean] = 3;
//for (size_t score = 0; score < eClassMax; score++)





int main()
{
	/*
	if (0)
	{
		//namspace
		//{
		//}
		typedef unsigned char uchar;//사용자 타입 재지정
		typedef unsigned int uint;
		class MyClass
		{
		};
		//구조체, struct ......Class   ..... 
		//struct(public) == class(private,protected,public) ? ....1개의 차이점
		struct _stData
		{
			//서로 다른 종류의 데이터 항목을 결합하여
			//하나의 단위로 정의한 [데이터 타입]
			int score;
			double ratio;
			std::string name;
			int datas[100];
			int* pPreData = nullptr;
			int* pPostData = nullptr;
			std::vector<int> vLines;
			//함수
			void sum(int& a, int& b) { return a + b; }
			//클래스
			MyClass _myClass;
		};
		int a;
		_stData stData = { 10, 0.1, "hello", nullptr, nullptr };
		_stData* pstData = new _stData;// nullptr;
		//c
		//typedef struc[tagName]
		//{
		//	//데이타형
		//}[nickname];
		typedef struct _stDataC
		{
			int a;
			int b;
		}STDATAC;

		//useage
	}
	*/

	_stStudentInfo student;
	student.scores[eEnglish] = 90;
	student.scores[eMath] = 95;
	student.scores[eKorean] = 92;

	//1차
	//함수 ... sum, average, min, max
	//input scores[], length
	//return ... sum(int), average(float), min/max(int)

	//display
	//english - ??, math - ??, korea - ??
	//sum - ??, average - ??, min - ??, max - ??

	//2차 - 자동으로 입력 및 성적 정보 출력
	//사용자로부터 입력을 받습니다.
	//struct에 string name을 입력 받아요.
	//각 eng, math, kor 점수를 입력 받아요
	//위 display로 출력을 합니다.
	//Q입력을 받으면 더 이상 입력을 하지 않습니다.
}







