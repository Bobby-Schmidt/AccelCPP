//
//  main.cpp
//  Ch3_1
//
//  Created by Bobby Schmidt on 2/12/17.
//  Copyright © 2017 BSchmidt. All rights reserved.
//

#include <iomanip>
#include <iostream>
#include <ios>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, const char * argv[]) {
    
    cout << "Enter first name" << endl;
    string name;
    cin >> name;
    
    cout << "Hello " << name << "." << endl;
    
    cout << "Enter midterm and final grades." << endl;
    double midterm, final;
    cin >> midterm >> final;
    
    cout << "Enter all homework grades, followed by end-of-file" << endl;
    
    int count = 0;
    int sum = 0;
    
    double x;
    vector<double> homework;
    
    while (cin >> x) {
//        ++count;
//        sum += x;
        homework.push_back(x);
    }
    
    typedef vector<double>::size_type vec_sz;
    vec_sz size = homework.size();
    
    // Verify there is data:
    if (size == 0) {
        cout << endl << "You must enter your grades. Please try again." << endl;
        return 1;
    }
    
    // Sort data in vector:
    sort(homework.begin(), homework.end());
    
    // Find middle element
    vec_sz mid = size / 2;
    double median;
    
    // If even number of elements, mid + (mid-1) / 2; else use mid
    median = size % 2 == 0 ? (homework[mid] + homework[mid - 1]) / 2 : homework[mid];
    
    streamsize prec = cout.precision();
    cout << "Your final grade is " << setprecision(3)
         << 0.2 * midterm + 0.4 * final + 0.4 * median
    << setprecision(prec) << endl;
    
    
    return 0;
}
