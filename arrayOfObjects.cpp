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
        cin.ignore();
        getline(cin, studentArray[i].studentName);
        cin >> studentArray[i].studentRoll >> studentArray[i].studentMarks;
    }

    for (int i = 0; i < arraySize; i++)
    {
        cout << studentArray[i].studentName << " " << studentArray[i].studentRoll << " " << studentArray[i].studentMarks << endl;
    }

    return 0;
}