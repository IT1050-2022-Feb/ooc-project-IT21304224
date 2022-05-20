#pragma once
class ExamSchedule {
private:
    char ScheduleID[10];
    double ExamDuration;
    char ExamTime[5];
    char ExamDate[10];
public:
    ExamSchedule();
    ExamSchedule(const char scheduleid[], double examduration, const char examtime[], const char examdate[]);
    void display();
    ~ExamSchedule();
};