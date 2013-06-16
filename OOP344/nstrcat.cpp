#include <iostream>
#include <stdarg.h>
using namespace std;
//some comments to test
//one more line
const char* nstrcat(char* to, ...);
int main(){
    char str[100] = "";
    char first[] = "Space";
    char second[] = "Explorer";
    cout<<nstrcat(str, first, " ", second, " HeeHaw", '\0')<<endl;
    return 0;
}
const char* nstrcat( char* to, ...){ //Sample main() to test the program
	char* inTo;
	int i = 0;
	va_list varg;
  va_start(varg, to);
  inTo = va_arg(varg, char*);
  while(*to)to++;
  while(inTo && *inTo){	 //returns '1' if true
  	while(*inTo){
  		to[i] = *inTo;
  		i++;				//keep going through the arguments
  		inTo++;
  	}
  	inTo = va_arg(varg, char*);
  }
	va_end(varg);
	return to;
}
