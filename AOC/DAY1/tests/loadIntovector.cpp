//SUMMARY: This takes an input file and reads it into a vector named data.
//Then it takes the data and prints it out using for loop.
// Example program
#include <iostream>
#include <fstream>
#include <vector>

int main()
{
    std::ifstream fin("input.txt");
    
    std::vector<int> data;
    
    int element;
    while (fin >> element)
    {
        data.push_back(element);
    }


for(auto i: data){

    std::cout << i << std::endl;
}

return 0;
}