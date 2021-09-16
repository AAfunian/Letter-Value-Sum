//
//  main.cpp
//  Letter Value Sum
//
//  Created by Amir on 9/16/21.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

//bool is used to determine if input is valid
bool valid = true;
//returns the value of current letter in name
int locate(vector<char> v, char a) {
    int key = -1;
    for (int i = 0; i < v.size(); ++i)
        if (v[i] == a) {
            key = i + 1;
            if (key > 26) key -= 26;
            break;
        }
    if (key == -1) {
        valid = false;
        return -1;
    }
    return key;
}

int main() {
    
    string alpha = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    vector<char> vec;
    
    for (int i = 0; i < alpha.size(); ++i)
        vec.push_back(alpha[i]);
    
    int sum = 0;
    string name;
 
    cout << "Enter a name to get its value: ";
    cin >> name;

    for (int i = 0; i < name.size(); ++i)
        sum += locate(vec, name[i]);
    if (valid == true)
        cout << "Name value: " << sum << '\n';
    if (valid == false)
        cout << "Invalid entry!" << '\n';
    
    return 0;
}
