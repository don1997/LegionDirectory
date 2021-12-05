#include<iostream>
#include<fstream>
#include<cstdlib>

using namespace std;

int main(void)
{

    char filename[50];          //var
    ifstream obj;               //make eobject

    cin.getline(filename, 50);  //go ahead and enter filename

    obj.open(filename);         //open file

    if(!obj.is_open()){

        exit(EXIT_FAILURE);
    }

    char word[50];
    obj >> word;

    while(obj.good()){

        cout << word << " ";
        obj >> word;        //.good() means as long as arent end to file
    }

    return 0;
}