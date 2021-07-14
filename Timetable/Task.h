#pragma once
#include <string>
class Task
{
private:
	int date;
	std::string task_name;
	std::string subject_name;
	int progress_parts;

public:
	Task(int d, std::string t_n, std::string s_n, int p_p);
	~Task();
	int Get_Date();
	std::string Get_Task_Name();
	std::string Get_Subject_Name();
	void Progress_Bar();
};

