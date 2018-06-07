#include <iostream>
#include <ctime> 
#include <cstdlib> 
const int N = 100000;
using namespace std;

int racunanje (int min, int max){
	int razlika;
 	if(min > max) {
	razlika = min - max;
	}else {
		razlika = max - min;
   }
   return razlika;
}
 
int main () {
   int stevilo, min, max, z;
   int polje[N];
   int nula=0, prva=0, druga=0, tretja=0, cetrta=0, peta=0, sesta=0, sedma=0, osma=0, deveta=0;
   
   
         cout << "vnesite vrednost: " << endl;
         cin >> stevilo;
         
	srand(time(0));
   	for( int a = 0; a < stevilo; a++ ) {
		min=rand()%10; 
		max=rand()%10;

	z = racunanje (min,max);
		
	polje[a] = z;
	}

	for (int i=0; i < stevilo; i++)
		  {
		  	if (polje[i] == 0)
		  	 nula++;
		  	else if (polje[i] == 1)
			   prva++;
		  	else if (polje[i] == 2)
		  	 druga++;
		  	else if (polje[i] == 3)
		  	 tretja++;
		  	else if (polje[i] == 4)
		  	 cetrta++;
		  	else if (polje[i] == 5)
		  	 peta++;
		  	else if (polje[i] == 6)
		  	 sesta++;
		  	else if (polje[i] == 7)
		  		sedma++;
		  	else if (polje[i] == 8)
		  	 osma++;
		  	else if (polje[i] == 9)
		  	 deveta++;

  			} 
   
  cout << "stevilke so se ponavljaje" << endl;
  cout << "stevilka 0 se je ponovila: " << nula<<" krat."<<endl;
  cout << "stevilka 1 se je ponovila: " << prva<<" krat."<<endl;
  cout << "stevilka 2 se je ponovila: " << druga<<" krat."<<endl;
  cout << "stevilka 3 se je ponovila: " << tretja<<" krat."<<endl;
  cout << "stevilka 4 se je ponovila: " << cetrta<<" krat."<<endl;
  cout << "stevilka 5 se je ponovila: " << peta<<" krat."<<endl;
  cout << "stevilka 6 se je ponovila: " << sesta<<" krat."<<endl;
  cout << "stevilka 7 se je ponovila: " << sedma<<" krat."<<endl;
  cout << "stevilka 8 se je ponovila: " << osma<<" krat."<<endl;
  cout << "stevilka 9 se je ponovila: " << deveta<<" krat."<<endl;
  
 return 0;
}		
