#include <iostream>

using namespace std;
int ascToInt(const char *num);

int main(){
  int num;
  num = ascToInt("32");
  cout<<"number = "<<num<<endl;
  return 0;
}
int ascToInt(const char *num){
  int no;
  no = 0;
  while(*num != 0){
    if(*num >= '0' && *num <= '9'){
      no = no*10+ (*num-48);  // 48 == '0'
      num++;     // to the next address of the character(the number)
    }
    else{
      cout<<"num is not NUMBER"<<endl;
      return 0;
    }
  }
  return no;
}