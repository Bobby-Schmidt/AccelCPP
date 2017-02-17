//
//  main.cpp
//  Ex_3_4
//
//  Created by Bobby Schmidt on 2/16/17.
//  Copyright © 2017 BSchmidt. All rights reserved.
//
// Report the length of the longest and shortest string in input.

#include <iostream>
#include <vector>

using namespace std;

int main(int argc, const char * argv[]) {
    
    string input;
    vector<string> inputVec;
    
    typedef vector<string>::size_type stringVecSize;
    
    vector<stringVecSize> vecMinMax;
    
    // Placeholders set in vecMinMax
    //
    // vecMinMax[0] -> min
    // vecMinMax[1] -> max
    vecMinMax = {0, 0};
    
    
    cout << "Make some entries" << endl;
    // Loops until invalid input
    while (cin >> input) {
        
        // Stores all entries in vector
        inputVec.push_back(input);
        
        // If first entry, store in max position
        if (vecMinMax[1] == 0) {
            vecMinMax[1] = input.size();
            
        // If second entry, check if greater than max and store in
        //      appropriate position
        } else if (vecMinMax[0] == 0) {
            if (input.size() >= vecMinMax[1]) {
                vecMinMax[0] = vecMinMax[1];
                vecMinMax[1] = input.size();
            } else {
                vecMinMax[0] = input.size();
            }
        // If entry > 2, make checks and store in appropriate location
        } else {
            if (input.size() < vecMinMax[0]) {
                vecMinMax[0] = input.size();
            } else if (input.size() >= vecMinMax[1]) {
                vecMinMax[1] = input.size();
            }
        }
        
    }
    
    
    
    // Print out resulting min/max
    cout << "Minimum string size: " << vecMinMax[0] << endl;
    cout << "Maximum string size: " << vecMinMax[1] << endl;
    
    
    
    return 0;
}
