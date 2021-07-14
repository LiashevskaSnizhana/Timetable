#include "Task.h"
Task::Task(int d, std::string t_n, std::string s_n, int p_p){
	this->date = d;
	this->task_name = t_n;
	this->subject_name = s_n;
	this->progress_parts = p_p;
}

int Task::Get_Date() {
	return this->date;
}

std::string Task::Get_Task_Name() {
	return this->task_name;
}

std::string Task::Get_Subject_Name(){
	return this->subject_name;
}

