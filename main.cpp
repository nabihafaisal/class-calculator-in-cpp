#include<iostream>
#include "calculator.h"
using namespace std;

int main()
{
   calculator simple;//null constructor
   calculator simple2(2,5);//parametrized constructor
   calculator simple3=simple2;//copy constructor
   cout<<simple2.num1<<endl<<simple2.num2;
  
   
   
   return 0;
}
