#include<iostream>

int main(int argc, char **argv){

      double a=0.0;

      for(int i=0;i<10;i++){
	a = a+0.1;

      }
      //a= 0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1;
      std::cout.precision(17);
      std::cout.setf(std::ios::scientific);
      std::cout<<a<<std::endl;

      return 0;

 }
