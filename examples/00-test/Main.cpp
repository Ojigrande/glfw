#include <iostream>

using namespace std;

//uint dd = 1920*1080;
uint dd = 1920*1080/4;


int main()
{
    uint zz = 1;
    while ( !(dd & zz) ) {
      zz <<= 1;
    }

    cout << zz << endl;

    return 0;
}
