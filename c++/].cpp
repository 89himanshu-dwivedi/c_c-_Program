#include<stdio.h>

using namespace std;

int div_2(int a){
  if(a%2==0){
  	return 1;
  }
  else{
    return 0;
  }
}

void div_6(int b){
  if( div_2(b)==1 && b%3 == 0 ){
   std::cout << "Yes, the number is divisible by 6." <<std::endl;
  }
  else{
    cout << "No, the number is not divisible by 6." << endl;
  }
}

int main(){
  div_6(12);
  div_6(25);
  return 0;
}
