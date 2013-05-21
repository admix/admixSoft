#include <cstdio>
#include <cstring>
#include <iostream>

using namespace std;
int AscToInt(const char* num);
int AscToInt(const char* num){
int len = strlen(num);
int valid = 0;
char sign = 'n';
int intNum = 0;
if(len != 0){
valid = 1;
for(int i = 0; i < len; i++) valid *= (num[i] >= '0' && num[i] <= '9');
if(!valid && (num[0] == '+' || num[0]  == '-')){
valid = 1;
for (int i = 1; i < len; i++) valid *= (num[i] >= '0' && num[i] <= '9');
if(valid){
sign = num[0];
}
}
}

if(valid && sign == 'n'){
	intNum = num[0] – '0';
	for(int i = 1; i < len; i++ ) intNum = intNum * 10 + (num[i] – '0');
}
else if (valid && (sign == '+' || sign == '-')){
intNum = num[1] – '0';
for(int i = 2;  i < len; i++) intNum = intNum * 10 + (num[i] – '0');
if(sign == '-') intNum = -intNum;
}
return intNum;
}

int main(){
  int num;
  num = AscToInt("34");
  cout<<num<<endl;
return 0;
}