#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string studentName;
    int studentRoll;
    int studentMarks;
};

int main()
{
    int arraySize;
    cin >> arraySize;

    Student studentArray[arraySize];

    for (int i = 0; i < arraySize; i++)
    {
        cin >> studentArray[i].studentName >> studentArray[i].studentRoll >> studentArray[i].studentMarks;
    }

    Student minimumMarks;
    minimumMarks.studentMarks = INT_MAX;

    for (int i = 0; i < arraySize; i++)
    {
        if (studentArray[i].studentMarks < minimumMarks.studentMarks)
        {
            minimumMarks = studentArray[i];
        }
    }

    cout << minimumMarks.studentName << " " << minimumMarks.studentRoll << " " << minimumMarks.studentMarks << endl;

    return 0;
}