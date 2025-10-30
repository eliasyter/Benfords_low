
#include <vector> 
#include <iostream>
#include <map>


int benford(const std::vector<int>& number_list){
    int size = number_list.size();
    std::map<int,int> dict; 
    int sum=0; 
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
        dict[number_list[i]]=dict[number_list[i]]+1;
        sum++; 
    }

    std::cout << "The distributions of digits is: " << std::endl; 
    std::cout << "1: " << (float(dict[1])/float(sum))*100 << "%" << std::endl; 
    std::cout << "2: " << (float(dict[2])/float(sum))*100 << "%" << std::endl; 
    std::cout << "3: " << (float(dict[3])/float(sum))*100 << "%" << std::endl; 
    std::cout << "4: " << (float(dict[4])/float(sum))*100 << "%" << std::endl; 
    std::cout << "5: " << (float(dict[5])/float(sum))*100 << "%" << std::endl; 
    std::cout << "6: " << (float(dict[7])/float(sum))*100 << "%" << std::endl; 
    std::cout << "7: " << (float(dict[8])/float(sum))*100 << "%" << std::endl; 
    std::cout << "8: " << (float(dict[9])/float(sum))*100 << "%" << std::endl; 
    std::cout << "9: " << (float(dict[9])/float(sum))*100 << "%" << std::endl; 

    return 1;  
}











