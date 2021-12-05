#include<iostream>
#include<fstream>
#include<vector>
#include<string>

using namespace std;

int main(void)
{
    //define vars

   

 
 
    
    ///////////////////////////////////READ TXT FILE START////////
    
    ifstream fin("input.txt");
    
    vector<char> data;

    
    
    string element1,element2;
    while (fin >> element >> element2)
    {
        data.push_back(element1);
        data.push_back(element2);

    }


    //displays vector
    
    for(auto i: data){

        std::cout << i << std::endl;
    }
    
    ///////////////////////////////////READ TXT FILE END////////

  




    return 0;
}