#include <iostream>
using namespace std;

struct StudentGrading {
    char name[50];
    int sapid;
    char address[100];
    char department[50];
    float mrk1, mrk2;
    float totalMarks; // To store the total marks
};

int main() {
   
    StudentGrading students[2];
    int topper = 0;
    float maxTotalMarks = 0;

   
    for (int i = 0; i < 2; i++) {
        cout << "------------------Enter details for Student " << i + 1 << "-----------------" << endl;
        cout << "Enter student's name: ";
        cin.ignore();
        cin.getline(students[i].name, 50);
        cout << "Enter SAP ID: ";
        cin >> students[i].sapid;
        cin.ignore(); 
        cout << "Enter address: ";
        cin.getline(students[i].address, 100);
        cout << "Enter department: ";
        cin.getline(students[i].department, 50);
        cout << "Enter marks for subject 1: ";
        cin >> students[i].mrk1;
        cout << "Enter marks for subject 2: ";
        cin >> students[i].mrk2;

        
        students[i].totalMarks = students[i].mrk1 + students[i].mrk2;

       
        if (students[i].totalMarks > maxTotalMarks) {
            maxTotalMarks = students[i].totalMarks;
            topper = i;
        }

        cout << "-------------------------------" << endl;
    }

    
    cout << "Student with the highest marks:" << endl;
    cout << "Name: " << students[topper].name << endl;
    cout << "SAP ID: " << students[topper].sapid << endl;
    cout << "Address: " << students[topper].address << endl;
    cout << "Department: " << students[topper].department << endl;
    cout << "Total Marks: " << students[topper].totalMarks << endl;

    return 0;
}