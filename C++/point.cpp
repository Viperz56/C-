#include <iostream>
using namespace std;
int main()
{
    int a=1;
    string sit="this";
    float m;
    double q;

int* nt=&a;
string* ha=&sit;
float* aa=&m;
double* cv=&q;

cout<<nt<<" "<<ha<<" "<<aa<<" "<<cv<<endl;




    return 0;
}