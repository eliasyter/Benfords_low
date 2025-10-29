
#include <vector> 
#include <iostream>
#include <map>


int benford(const std::vector<int>& number_list){
    int size = number_list.size();
    std::map<int,int> dict; 
    dict[1]=0; 
    dict[2]=0; 
    dict[3]=0; 
    dict[4]=0; 
    dict[5]=0; 
    dict[6]=0; 
    dict[7]=0; 
    dict[8]=0;  
    dict[9]=0; 
    for (int i=0; i <= size-1; i++){
        std::cout << number_list[i] << std::endl; 
    }  
    return 1;  
}











