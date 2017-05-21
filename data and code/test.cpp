#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

double Groceries,RentIndex,Restaurant,Purchase,coli,ColiPlusRent;

double lm1(){
	double salary =
	0.001 * Groceries 
	+ 0.1613 * coli 
	+ 0.1088 * RentIndex 
	+ 0.0226 * Restaurant 
	+ 0.2363 * Purchase 
	- 8.4344;
    return salary;
}
double lm2(){
	double salary = 
	0.001 * Groceries 
	+ 0.1901 * coli 
	+ 0.1088 * RentIndex 
	+ 0.0226 * Restaurant 
	+ 0.1514 * Purchase 
	- 6.46;
    return salary;
}

double lm3(){
	double salary = 
	-0.0394 * Groceries 
	+ 0.2381 * coli 
	+ 0.2631 * RentIndex 
	+ 0.0226 * Restaurant 
	+ 0.2782 * Purchase 
	- 13.3474;
    return salary;
}

double lm4(){
	double salary = 
	0.0145 * Groceries 
	+ 0.3441 * coli 
	+ 0.3059 * RentIndex 
	+ 0.0294 * Restaurant 
	+ 0.2639 * Purchase 
	- 19.2371;
    return salary;
}
double lm5(){
	double salary = 
	0.0111 * Groceries 
	+ 0.3565 * coli 
	+ 0.5736 * RentIndex 
	+ 0.1169 * Restaurant 
	+ 0.4203 * Purchase 
	- 43.3311;
    return salary;
}
double lm6(){
	double salary = 
	0.0111 * Groceries 
	+ 0.6368 * coli 
	+ 0.5094 * RentIndex 
	+ 0.0247 * Restaurant 
	+ 0.5848 * Purchase 
	- 74.3448;
    return salary;
}



int main(){
	double result;
	ifstream fin;
	fin.open("test.txt");
	string s;
	while(fin>>Groceries>>coli>>	RentIndex>>	ColiPlusRent>>	Restaurant>>	Purchase){
		
			if(coli>58.87){
			if(RentIndex>40.865){
				cout<<"lm6 "<<fixed<<setprecision(2)<<lm6()<<endl;
			}else
			cout<<"lm5 "<<fixed<<setprecision(2)<<lm5()<<endl;
			}else{
			if(Purchase> 64.015){
				cout<<"lm4 "<<fixed<<setprecision(2)<<lm4()<<endl;
			}else if(Purchase> 39.77){
			    cout<<"lm3 "<<fixed<<setprecision(2)<<lm3()<<endl;
			}else if(Purchase> 32.3){
				cout<<"lm2 "<<fixed<<setprecision(2)<<lm2()<<endl;
			}else 
			cout<<"lm1 "<<fixed<<setprecision(2)<<lm1()<<endl;
		}
	}
}
