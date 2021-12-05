//HELPFULLINKS: https://stackoverflow.com/questions/9270817/c-read-file-until-space

//SUMMARY: Tokenizes input text file and makes and splits it into 
//two variables.


#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main(void)
{
//..........
    ifstream fin;
    fin.open("input.txt", ifstream::in);
    string var1, var2;

    while(fin >> var1 >> var2){

    cout << var1 << " " << var2 << endl;

    }
    
return 0;
}