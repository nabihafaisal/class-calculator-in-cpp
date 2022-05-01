#include "calculator.h"
#include<iostream>
   using namespace std; 
    

calculator::calculator(){


    this->num1=0;
    this->num2=0;
}
calculator::calculator(int n1,int n2){


    this->num1=n1;
    this->num2=n2;
}
calculator::calculator(const calculator&numbers){

    num1=numbers.num1;
    num2=numbers.num2;
       



}    

void calculator:: show(){
    cout<< num1 <<"+"<< num2 <<endl;
}










