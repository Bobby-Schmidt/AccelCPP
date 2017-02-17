//
//  main.cpp
//  Ex_3_5
//
//  Created by Bobby Schmidt on 2/16/17.
//  Copyright © 2017 BSchmidt. All rights reserved.
//
//  Assignment:
//      Write a program that will keep track of grades for several students at once.
//          Program could keep two vectors in sync: first should hold students' names,
//          second the final grades that can be computed as input is read.
//      Assume fixed number of homework grades.
//
//      NOTE: Currently does not check if proper number of grades/students were entered.

#include <iostream>
#include <vector>

using namespace std;

int main(int argc, const char * argv[]) {
    
    vector<string> studentNames;
    vector<double> studentGrades;
    string student;
    int homeworks = 5;
    int homeworkGrade;
    
    cout << "Enter Student Name" << endl;
    while (cin >> student) {

        // Stores input into studentNames vector
        studentNames.push_back(student);
        
        cout << "------------------" << endl;
        cout << "Enter the midterm and final grades: " << endl;
        int midtermGrade, finalGrade;
        cin >> midtermGrade;
        cin >> finalGrade;
        
        cout << "Enter the homework grades (" << homeworks << "): " << endl;
        int totalHomework = 0;
        for (int i = 0; i < homeworks; i++) {
            cin >> homeworkGrade;
            totalHomework += homeworkGrade;
        }
        
        double totalGrade = 0;
        
        totalGrade = midtermGrade * 0.3 + finalGrade * 0.3 + (totalHomework / homeworks) * 0.4;
        studentGrades.push_back(totalGrade);
        
        cout << "\n\n";
        cout << "Enter Student Name" << endl;
    }
    
    
    cout << "GRADE REPORT\n\n";
    for (int i = 0; i < studentNames.size(); i++) {
        cout << "STUDENT NAME:\t" << studentNames[i] << endl;
        cout << "FINAL GRADE:\t" << studentGrades[i] << endl;
        cout << "------------------" << endl;
    }


    
    return 0;
}
