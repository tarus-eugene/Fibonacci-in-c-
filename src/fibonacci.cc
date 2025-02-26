#include <iostream>
#include <cmath>

using namespace std;

int fib(int i){
  int buffer1 = 0;
  int buffer2 = 1;
  int loopvar = round(i/2); 

  for(loopvar; loopvar != 0; loopvar--){
    buffer1 = buffer1 + buffer2;
    buffer2 = buffer1 + buffer2;
  }

  if (i%2 == 0){
    return buffer1;
  }else{
    return buffer2;
  }
}
int main(){
  cout << "--------------------------------------" << endl;
  cout << "Use'Ctrl + c' to terminate the program" << endl;
  cout << "--------------------------------------" << endl;

  while (true){
    cout << "Enter your number" << endl;
    int userInput;
    cin >> userInput; 
    cout << fib(userInput) << endl;
  }

  return 0;
}
