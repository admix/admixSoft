//  This block of code performs conversion char to int
//  Returning '0' if not a number
//  ascToInt.cpp
//  Created by Alexander on 2013-05-21.
//  Copyright (c) 2013 Alexander. All rights reserved.
//
#include <iostream>

using namespace std;
int ascToInt(const char *ch);

int main(){  //sample main() where you can test the function
  int num;
  num = ascToInt("-32");
  cout<<"number = "<<num<<endl;
  return 0;
}

int ascToInt(const char *ch){
  int out;
  int calc;
  
  out = 0;
  calc = 1;
  while (((*ch) == '+') || ((*ch) == '-')){  //checking the sign
    if (*ch == '-') calc = calc * -1; //if negative
    ch++;
  }
  do{ //converting char by char
    out = (out * 10) + ((*ch) - '0'); //substracting 48 to get the real number
    ch++;
  }while((*ch <= '9') && (*ch >= '0'));  //checking if it’s a number
  
  return (out * calc);
}

//  Would love to get some feedback and suggestions :)
