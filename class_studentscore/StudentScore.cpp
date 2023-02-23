#include "StudentScore.h"

StudentScore::StudentScore()
{	
	this->stStudentInfo.Name = " ";
	this->stStudentInfo.sum = 0;
	this->stStudentInfo.avg = 0;
	this->stStudentInfo.min = 0;
	this->stStudentInfo.max = 0;

	cout << "Ctor" << endl;
}

StudentScore::~StudentScore()
{
	cout << "Dtor" << endl;
	stStudentInfo.mSubjectScore.clear();
}

void StudentScore::SetStudentName(string Name)
{
	stStudentInfo.Name = Name;
}

void StudentScore::SetSubjectScore(string subject, int score)
{
	//sub structure . main structure . vector<structure>
	
	newSubjectScore.Subject = subject;
	newSubjectScore.score = score;
	stStudentInfo.vSubjectScore.push_back(newSubjectScore);
	
	//structure . map
	stStudentInfo.mSubjectScore.insert({ subject, score });
}

int StudentScore::GetSum()
{

	for (size_t i = 0; i < stStudentInfo.vSubjectScore.size(); i++)
	{
		stStudentInfo.sum += stStudentInfo.vSubjectScore[i].score;
	}

	//map
	vector <int>vScores;
	for (auto iter = stStudentInfo.mSubjectScore.begin(); iter != stStudentInfo.mSubjectScore.end(); iter++)
	{
		vScores.push_back(iter->second);
	}

	for (size_t i = 0; i < vScores.size(); i++)
	{	
		stStudentInfo.calc["√—«’"] += vScores[i];
	}

	return stStudentInfo.sum;
	//return stStudentInfo.calc["√—«’"]
}

float StudentScore::GetAvg()
{
	stStudentInfo.avg = (float)stStudentInfo.sum / (float)stStudentInfo.vSubjectScore.size();

	//map
	stStudentInfo.calc["∆Ú±’"] = stStudentInfo.calc["√—«’"] / stStudentInfo.mSubjectScore.size();

	return stStudentInfo.avg;
	//return stStudentInfo.calc["∆Ú±’"]
}

int StudentScore::GetMin()
{
	stStudentInfo.min = stStudentInfo.vSubjectScore[0].score;
	for (size_t i = 1; i < stStudentInfo.vSubjectScore.size(); i++)
	{
		if (stStudentInfo.min > stStudentInfo.vSubjectScore[i].score) { stStudentInfo.min = stStudentInfo.vSubjectScore[i].score;}
	}

	//map
	vector <int>vScores;
	for (auto iter = stStudentInfo.mSubjectScore.begin(); iter != stStudentInfo.mSubjectScore.end(); iter++)
	{
		vScores.push_back(iter->second);
	}
	stStudentInfo.calc["√÷º“"] = vScores[0];
	for (size_t i = 1; i < vScores.size(); i++)
	{
		if (stStudentInfo.calc["√÷º“"] > vScores[i]) { stStudentInfo.calc["√÷º“"] = vScores[i]; }
	}

	return stStudentInfo.min;
	//return stStudentInfo.calc["√÷º“"];
}
int StudentScore::GetMax()
{
	stStudentInfo.max = stStudentInfo.vSubjectScore[0].score;
	for (size_t i = 1; i < stStudentInfo.vSubjectScore.size(); i++)
	{
		if (stStudentInfo.max < stStudentInfo.vSubjectScore[i].score) { stStudentInfo.max = stStudentInfo.vSubjectScore[i].score; }
	}

	//map
	vector <int>vScores;
	for (auto iter = stStudentInfo.mSubjectScore.begin(); iter != stStudentInfo.mSubjectScore.end(); iter++)
	{
		vScores.push_back(iter->second);
	}
	stStudentInfo.calc["√÷¥Î"] = vScores[0];
	for (size_t i = 1; i < vScores.size(); i++)
	{
		if (stStudentInfo.calc["√÷¥Î"] > vScores[i]) { stStudentInfo.calc["√÷¥Î"] = vScores[i]; }
	}

	return stStudentInfo.max;
	//return stStudentInfo.calc["√÷¥Î"];
}

void StudentScore::DoCalc()
{
	cout << stStudentInfo.Name << "= ";
	for (size_t i = 0; i < stStudentInfo.vSubjectScore.size(); i++)
	{
		cout <<stStudentInfo.vSubjectScore[i].Subject << ":" << stStudentInfo.vSubjectScore[i].score<<"\t";
	}
	cout << endl;
	cout << "√—«’ = " << stStudentInfo.max << ", ∆Ú±’ = " << stStudentInfo.avg << ", √÷¥Î = " << stStudentInfo.min << ", √÷º“ = " << stStudentInfo.max << endl;

	//map
	for (auto iter = stStudentInfo.calc.begin(); iter != stStudentInfo.calc.end(); iter++)
	{
		cout << iter->first << " => " << iter->second << "\t";
	}
	cout << endl;
}
