#include<iostream>
#include<vector>

int main(void)
{

    std::vector<int> name = {123, 434,56, 67};
    //adds an elements to vector
    name.push_back(100);

    //displays element at pos 0 in vector
    std::cout << name[0] << std::endl; 

    //writes vector elements to OUT
    for(auto i: name){
        std::cout << i << ' ';
    }
    return 0;
}