#include <iostream>
using namespace std;

int cmolas = 1; 
int minut = 0;

int main()
{
	do
	{
	    minut++;
	    cmolas = cmolas * 2;
	    
	    cout << "minelo minut: " << minut << endl;
	    cout << "liczba bakterii: " << cmolas << endl;
	} while(cmolas<=1000000000);
	
	return 0;
}
