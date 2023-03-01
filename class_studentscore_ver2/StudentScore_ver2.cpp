#include "StudentScore_2.h"

StudentScore_2::StudentScore_2()
{
	cout<<"Ctor"<<endl;
}
StudentScore_2::~StudentScore_2()
{
	cout<<"Dtor"<<endl;
}

int StudentScore_2::GetSum()
{	
	/* return (studentinfo.kor +
		studentinfo.eng+
		studentinfo.math); */
		
	int sum = 0;
	//using map {key, value}
	//vlaues
	vector<int> vScores;
	for(auto iter = studentinfo.mTable.begin() ; iter != studentinfo.mTable.end() ; iter++)
	{
		vScores.push_back(iter->second);
		//sum += *iter; //*iter:value
	}
	
	return sum;
}
float StudentScore_2::GetAvg()
{
	// return GetSum()/3.0;
	return (float)GetSum()/(float)studentinfo.mTable.size();
	
	
}
int StudentScore_2::GetMin()
{
/* 	int score[3] = {studentinfo.kor,
				studentinfo.eng,
				studentinfo.math };
	int min = score[0];
	for(size_t i=0; i<3; i++)
	{
		if(min>score[i])
			min=score[i];
	}
	//sort
	//오름차순 [작은거]......[큰수]
	std::sort(score, score+3);//score.begin(), score.end()
	return score[0]; */
	
	//using map {key, value}
	//vlaues
	vector<int> vScores;
	for(auto iter = studentinfo.mTable.begin() ;
		iter != studentinfo.mTable.end();
		iter++)
	{
		vScores.push_back(iter->second);
		//sum += *iter; //*iter:value
	}
	
	std::sort(vScores.begin(), vScores.end());
	//vScores.end() = vScores.begin() + vScores.size()
	return vScores[0];
	
}
int StudentScore_2::GetMax()
{
/* 	int score[3] = {studentinfo.kor,
				studentinfo.eng,
				studentinfo.math };
	int max = score[0];
	for(size_t i=0; i<3; i++)
	{
		if(max<score[i])
			max=score[i];
	}
	//sort
	//오름차순 [작은거]......[큰수]
	std::sort(score, score+3);//score.begin(), score.end()
	return score[3 - 1]; */
	
	vector<int> vScores;
	for(auto iter = studentinfo.mTable.begin() ;
		iter != studentinfo.mTable.end();
		iter++)	{vScores.push_back(iter->second);}
	
	std::sort(vScores.begin(), vScores.end());
	return vScores[vScores.size()-1];
}

int StudentScore_2::SetStudentName(string name)
{
	studentinfo.name = name;
	studentinfo.mTable.clear();

	return 0;
}

int StudentScore_2::SetSubjectScore(string subject, int score)
{
	
	string str = subject;
	//대소문자 convert해서 통일
	//lower -> topper
	//1)c_style
	for(size_t i=0 ; i<str.size(); i++)
	{
		str[i] = std::toupper(str[i]);
	}
	//2)c++_style :: lambda expresstion
	std::transform(str.begin(), 
				str.end(), 
				str.begin(), [](uchar c){return toupper(c);});
	
	// if(str == "KOR")
		// studentinfo.kor = score;
	// else if(str == "ENG")
		// studentinfo.eng = score;
	// else if(str == "MATH")
		// studentinfo.math = score;
	// else
		// cout<<"Subject (Kor/Eng/Math) Only"<<endl;
	if(studentinfo.mTable.find(subject) != studentinfo.mTable.end())
	{
		cout << "same subject found" <<endl;
		return 0;
	}
	
	studentinfo.mTable.insert({subject, score});

	return 0;
}

int StudentScore_2::DoCalc()
{
	cout<<studentinfo.name<<"=>";
	
	string strSubjectReport;	
	for(auto iter = studentinfo.mTable.begin() ;
		iter != studentinfo.mTable.end();
		iter++)
	{
		strSubjectReport += iter->first;
		strSubjectReport += " : ";
		strSubjectReport += std::to_string(iter->second);
		strSubjectReport += "\t";
	}	

	cout << strSubjectReport<<endl
	/* for(auto iter = studentinfo.mTable.begin() ;
		iter != studentinfo.mTable.end();
		iter++)
	{
		cout<<iter->first->" : "<<iter->second<<" | "
	}	
	 */
	<<"| SUM : " << GetSum()<<" \t "
	<<"| AVG : " << GetAvg()<<" \t "
	<<"| MIN : " << GetMin()<<" \t "
	<<"| MAX : " << GetMax()<<endl;
	
	
	return 0;
}

void StudentScore_2::Clear()
{
	studentinfo.mTable.clear();
}

