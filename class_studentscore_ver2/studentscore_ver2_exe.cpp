#include "StudentScore_2.h"


int main()
{
	if (false) {
		//name, scorekor, eng, math
		string strName;
		int scoreKor, scoreEng, scoreMath;

		cout << "Input Student Name : ";
		cin >> strName;

		cout << "Input Student Subject {Kor, Eng, Math} Score : ";
		cin >> scoreKor >> scoreEng >> scoreMath;

		StudentScore_2 ss;
		ss.SetStudentName(strName);
		ss.SetSubjectScore("kor", scoreKor);
		ss.SetSubjectScore("ENG", scoreEng);
		ss.SetSubjectScore("Math", scoreMath);
		ss.DoCalc();
	}

	string strName;
	string inSubject;
	int inScore;
	char inCQ;
	vector<StudentScore_2> vSS;
	StudentScore_2 ss;

	do {
		cout << "Input Student Name : ";
		cin >> strName;
		ss.SetStudentName(strName);
		while (1)
		{
			cout << "input (Subject, Score) => ";
			cin >> inSubject;
			if (inSubject == "Q"||inSubject=="q") 
			{
				ss.DoCalc();
				break;
			}
			cin >> inScore;
			ss.SetSubjectScore(inSubject, inScore);
		}		

		cout << "Continue : C / Quit : Q => ";
		cin >> inCQ;
		inCQ=toupper(inCQ);
		vSS.push_back(ss);
		//ss.Clear();
	} while (inCQ != 'Q');

	for (size_t i = 0; i < vSS.size(); i++)	{vSS[i].DoCalc();}

	vSS.clear();
	
		
	return 1;
}