#include <stdio.h>
#include <string.h>
#include <math.h>
#include <iostream>
 
using namespace std;
 
int AscToInt(const char* num) {
char fromString[500];
strcpy(fromString, num);
int i;
int returnInt=0;
bool toNeg=false;
int writePos=1;
int readPos=0;
int stringLength = strlen(fromString);
//Sets a flag if the first char is a minus sign. Also decreases stringlen and increases readpos to accomadate the space the – sign takes.
if (fromString[0] == '-'){
   toNeg = true;
   readPos++;
   stringLength–-;
}
//Perform a loop to convert the string to an int.
do {
   //should only convert if the character is a number (check ascii range)
   if ((fromString[readPos] > 47) && (fromString[readPos] < 58)){
   //If it is a number, add the number to the appropriate position in the int by using powers of       10.
   returnInt += (fromString[readPos]-48)*(pow(10,(stringLength-writePos)));
   writePos++;
   readPos++;
}
   //If ever it encounters something that isnt a number, return 0. This number cant be converted.
   else {
   return 0;
}
//Only happens until nul byte is reached.
} while(fromString[readPos] != "");
 
//If the negativeflag was set,convert int to negative.
if (toNeg==true){
returnInt = returnInt * (-1);
}
//return the converted int.
return returnInt;
}
 
int main(){
char holderArray[500];
cout << "Please enter a number." << endl;
scanf("%s", &holderArray);
cout << "After converting to an int, the result is: " << AscToInt(holderArray) << endl;
}