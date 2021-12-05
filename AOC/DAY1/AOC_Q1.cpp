#include<iostream>
#include<fstream>
#include<vector>


using namespace std;

int main(void)
{
    //define vars

   
    int kounter = 0;
 
 
    
    ///////////////////////////////////READ TXT FILE START////////
    
    ifstream fin("input.txt");
    
    vector<int> data;
    
    int element;
    while (fin >> element)
    {
        data.push_back(element);
    }


    //displays vector
    /*
    for(auto i: data){

        std::cout << i << std::endl;
    }
    */
    ///////////////////////////////////READ TXT FILE END////////

  

    for(int i = 0; i < data.size(); i++){
     
        if(data[i] > data[i - 1]){
                kounter++;
             
        }

    }   
cout << kounter << endl;

    return 0;
}