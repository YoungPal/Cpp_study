#pragma once
#include "common.h"

class StudentScore_2
{
public:
	StudentScore_2();
	~StudentScore_2();

	//기능
	//입력 학생 이름
	int SetStudentName(string name);
	//과목,성적 입력
	int SetSubjectScore(string subject, int score);
	//결과 산출, sum, avg, min, max
	int DoCalc();
	void Clear();

private:
	int GetSum();
	float GetAvg();
	int GetMin();
	int GetMax();

	struct StudentInfo
	{
		string name;
		int sum, min, max;
		float avg;
		std::map<string, int> mTable;
	};
	StudentInfo studentinfo;
	//std::map<string, StudentInfo> mTable;
	//std::map<string, void*> mTable;
	//void*...어떤 dataType인지 명시적으로 표현되지 않았을 때 사용
	//auto는??
};