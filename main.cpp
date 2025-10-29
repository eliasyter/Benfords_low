
#include "benford.h"
#include <string.h>
#include <cstdlib>
#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>

using namespace std;

int main() {
    vector<int> number_list; 
    vector<string> string_list; 
    int push_number; 
    string pdfPath = "benford_test.pdf";
    string outputFilePath = "output.txt";

    string command = "pdftotext " + pdfPath + " " + outputFilePath;
    int status = system(command.c_str());

    if (status == 0) {
        cout << "Text extraction successful." << endl;
    } else {
        cout << "Text extraction failed." << endl;
        return 1; // Exit the program with error code
    }

    ifstream outputFile(outputFilePath);
    if (outputFile.is_open()) {
        string textContent;
        string line;
        string word;
        int index;
        while (getline(outputFile, line)) {
            stringstream ss(line);
            while (getline(ss,word,' ')){
                if (isdigit(word[0]) || isdigit(word[1])){
                    try { 
                        if (word[0]=0){
                            index=0; 
                            while (index<word.size()){
                                if (word[index]!=0 && word[index]!='.'){
                                    push_number = word[index]-'0'; 
                                    number_list.push_back(push_number);  
                                }
                                index++; 
                            }
                        }else{

                        push_number = stoi(word); 
                        number_list.push_back(push_number);  
                        }
                    }catch (const std::invalid_argument& e){
                        cout<<"This word is a problem: "<< word<<endl;  
                    }
                }else{
                    string_list.push_back(word);  
                
                }
            }
        }
        outputFile.close();

        // Display the extracted text
        cout << "Text content extracted from PDF document:" << endl;
        //benford(number_list);
        
        cout << "This is the output witch should not contain any numbers"<< endl;
        
        int i; 
        for (i=0;i<string_list.size();i++){
            cout << string_list[i] << endl; 
        }
    } else {
        cout << "Failed to open output file." << endl;
        return 1; // Exit the program with error code
    }

    return 0; // Exit the program successfully
}





















