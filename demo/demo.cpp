#include <iostream>
#include <iomanip>
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
	
	cout<<"Groceries index 	: "; 	cin>>Groceries;
	cout<<"coli index 		: "; 	cin>>coli;
	cout<<"Rent index	 	: "; 	cin>>RentIndex;
	cout<<"restaurant index	: "; 	cin>>Restaurant;
	cout<<"Purchase index 		: ";	cin>>Purchase;
	
	if(coli>58.87){
			if(RentIndex>40.865){
				result = lm6();		
				cout<<"using model 6 "<<fixed<<setprecision(2)<<result<<endl;
			}else{
				result = lm5();
				cout<<"using model 5 "<<fixed<<setprecision(2)<<result<<endl;
			}
			}else{
			if(Purchase> 64.015){
				result = lm4();
				cout<<"using model 4 "<<fixed<<setprecision(2)<<result<<endl;
			}else if(Purchase> 39.77){
				result = lm3();
			    cout<<"using model 3 "<<fixed<<setprecision(2)<<result<<endl;
			}else if(Purchase> 32.3){
				result = lm2();
				cout<<"using model 2 "<<fixed<<setprecision(2)<<result<<endl;
			}else {
				result = lm1();
				cout<<"using model 1 "<<fixed<<setprecision(2)<<result<<endl;
			}
		}
	
	result = result * 4365.97 / 100;
	
	cout<< "predicted salary is "<<result<<"$"<<endl;
	
}







