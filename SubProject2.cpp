//
//  SubProject2.cpp
//  Project 3 - CSCI 375
//
//  Created by Erick Jean Reyes on 12/13/17.
//  Copyright © 2017 Erick Jean Reyes. All rights reserved.
//

#include<iostream>
#include<stdlib.h>
#define PAGESIZE 4096 //defines page size for 4kb
using namespace std;
int main(int argc,char **argv){
    int address;
    
    cout<<"Please enter the address\n";
    cin>>address; //Gets address from user
    
    int pagenumber = address / PAGESIZE; //Calculates page number and sets value to variable
    
    int offset = address % PAGESIZE; //Calculates offset and sets value to variable
    
    cout <<"The address " << address << " has the following values: \n";
    cout<<"The page number is " << pagenumber << "\n";
    cout<<"The offset is " << offset << "\n";
    

    
}


