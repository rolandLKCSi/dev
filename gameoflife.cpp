/*
* A Game of Life implementation from:
* Roland Lukácsi
*/

#include<iostream>

int initialize();

int main(){

  int input;
  
  std::cout << "Game of Life!!\n\n\n";
  std::cout << "Press any key...";
  std::cin  >> input;

  int init = 1;
  if(init = initialize())
    std::cout << "Successful init";
  else
    std::cout << "Something went wrong at init : "<<init<<std::endl;

  return 0;
}

int initialize(){
  /*Init field for example*/
  return 1;
}
