//
//  main.cpp
//  Ex_3_3
//
//  Created by Bobby Schmidt on 2/16/17.
//  Copyright © 2017 BSchmidt. All rights reserved.
//
//  Count how many times each distinct word appears in its input.

#include <iostream>
#include <vector>

using namespace std;

int main(int argc, const char * argv[]) {
    
    // 1.   Get inputs
    // 2.   Store in vec
    // 3.   Nested for-loop to make comparisons of strings
    
    
    cout << "Enter some words" << endl;
    string wordInput;
    vector<string> wordVec;
    
    while (cin >> wordInput) {
        wordVec.push_back(wordInput);
    }
    
    typedef vector<string>::size_type size;
    size vecSize = wordVec.size();

    for (int i = 0; i < vecSize; i++) {
        string word = wordVec[i];
        
        int count = 0;
        for (int j = 0; j < vecSize; j++) {
            if (word == wordVec[j]) {
                count ++;
            }
        }
        
        cout << word << " appeared " << count << " times." << endl;
        
    }
    
    
    return 0;
}
