#include "ExamSchedule.h"
#include <iostream>
#include <cstring>

using namespace std;

ExamSchedule::ExamSchedule() {
        strcpy(ScheduleID, "");
        ExamDuration = 0;
        strcpy(ExamTime, "");
        strcpy(ExamDate, "");
}

ExamSchedule::ExamSchedule(const char scheduleid[], double examduration, const char examtime[], const char examdate[]) {
        strcpy(ScheduleID, scheduleid);
        ExamDuration = examduration;
        strcpy(ExamTime, examtime);
        strcpy(ExamDate, examdate);
    }

void ExamSchedule::display() {
        cout << "Exam Schedule ID: " << ScheduleID << endl;
        cout << "Exam Duration: " << ExamDuration << endl;
        cout << "Exam Time: " << ExamTime << endl;
        cout << "Exam Date: " << ExamDate << endl;        
    }

ExamSchedule::~ExamSchedule() {
        cout << "Exam Schedule delete" << endl;
    }