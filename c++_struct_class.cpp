#include "class_calc/Calc.h"

int main() {
	Calc calc(0, 0, '+');
	_stStudentInfo student;
	student.Name = "JYH";
	student.scores[eEnglish] = 90;
	student.scores[eMath] = 95;
	student.scores[eKorean] = 92;
	student.sum = calc.sum(student.scores, eClassMax);
	student.average = calc.average(student.scores, eClassMax, (float)student.sum);
	student.min = calc.min(student.scores, eClassMax);
	student.max = calc.max(student.scores, eClassMax);
	calc.in_Calc(&student);
	calc.display(&student);

	int input_scores[eClassMax] = { 0, };
	char input_CQ;

	std::vector<_stStudentInfo> vStudents;

	do {
		_stStudentInfo newStudent;

		std::cout << "input_Name => ";
		std::cin >> newStudent.Name;
		std::cout << "input_scores(english/math/korean) : ";
		for (size_t i = 0; i < eClassMax; i++)
		{
			std::cin >> input_scores[i];
			newStudent.scores[i] = input_scores[i];
		}
		calc.in_Calc(&newStudent);

		vStudents.push_back(newStudent);

		std::cout << "Continue : C, Quit : Q => ";
		std::cin >> input_CQ;

	} while (input_CQ != 'Q');



	for (size_t i = 0; i < vStudents.size(); i++)
	{
		_stStudentInfo* pStudent = &vStudents[i];
		calc.display(pStudent);
	}

	if (input_CQ == 'Q')
	{
		vStudents.clear();
	}
	return 0;
}