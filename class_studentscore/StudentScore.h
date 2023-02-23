#pragma once
#include "common.h"

struct SubjectScore
{
	string Subject;
	int score;
};

struct StudentInfo
{
	vector<SubjectScore> vSubjectScore;
	map<string, int> mSubjectScore;

	string Name;

	map<string, int> calc = { {"√—«’", 0}, {"∆Ú±’", 0}, {"√÷º“", 0}, {"√÷¥Î", 0}};
	int sum, min, max;
	float avg;
};

class StudentScore
{
public:
	StudentScore();
	~StudentScore();

	void SetStudentName(string Name);
	void SetSubjectScore(string subject, int score);

	int GetSum();
	float GetAvg();
	int GetMin();
	int GetMax();
	void DoCalc();

private:
	StudentInfo stStudentInfo;
	SubjectScore newSubjectScore;
	//int v_size = stStudentInfo.vSubjectScore.size();
};

