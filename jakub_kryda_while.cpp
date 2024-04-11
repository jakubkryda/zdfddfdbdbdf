#include <iostream>
using namespace std;

int cmolas = 1;
int minut = 0;
int a = 1000000000;

int main()
{
    while (cmolas < a)
    {
        minut++;
        cmolas = cmolas * 2;

        cout << "minelo minut: " << minut << ", cmolas: " << cmolas << endl;
    }
    return 0;
}