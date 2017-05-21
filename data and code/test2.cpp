#include <iostream>
#include <fstream>
#include <string>
using namespace std;

double Groceries,RentIndex,Restaurant,Purchase,coli,ColiPlusRent;

double lm1(){
	double salary =

      0.192  * Groceries +
      0.5657 * RentIndex +
      0.1827 * Restaurant +
      0.3471 * Purchase +
    -25.0892;
    return salary;
}


int main(){
	double result;
	ifstream fin;
	fin.open("test.txt");
	string s;
	while(fin>>Groceries>>coli>>	RentIndex>>	ColiPlusRent>>	Restaurant>>	Purchase){
		result=lm1();
		cout<<result<<endl;
	}
	
}
