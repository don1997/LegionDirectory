#include<iostream>
#include<fstream>
#include<vector>

using namespace std;

int main(void)
{
    
    ifstream infile ("input.txt");
    
    vector<int> names;
    int input;
    while(infile >> input ){

        names.push_back(input);

    }

    for(int name : names){

        cout << name << endl;
    }
    
    return 0;
}