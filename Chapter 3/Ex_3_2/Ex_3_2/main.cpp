//
//  main.cpp
//  Ex_3_2
//
//  Created by Bobby Schmidt on 2/16/17.
//  Copyright © 2017 BSchmidt. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, const char * argv[]) {
    
    cout << "This program will accept integer values and calculate the quartiles\n";
    
    int x;
    vector<int> inputArray;
    
    cout << "Enter integers for calculation" << endl;
    while (cin >> x) {
        inputArray.push_back(x);
    }
    
    typedef vector<int>::size_type size_vec;
    size_vec size = inputArray.size();
    
    if (size == 0) {
        cout << "Please try again" << endl;
        return 1;
    }
    
    double quartOne, quartThree;
    double median;
    double average;
    
    sort(inputArray.begin(), inputArray.end());
    
    int mid = size / 2;
    
    
    median = (size % 2 == 0 ? (inputArray[mid] - inputArray[mid - 1] / 2) : inputArray[size/2]);
    quartOne = size % 4 == 0 ? (median - inputArray[0] / 2) : inputArray[size / 4];
    quartThree = size % 4 == 0 ? (inputArray[size] - median / 2) : inputArray[size - size / 4];
    
    cout << "Q1:\t" << quartOne << endl;
    cout << "Median:\t" << median << endl;
    cout << "Q3:\t" << quartThree << endl;
    
    
    
    return 0;
}
