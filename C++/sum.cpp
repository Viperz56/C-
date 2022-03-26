#include <iostream>
using namespace std;
int numb(int a,int b)
{
    return(a*b);
}
int main()
{
    int mul;
    int c;
    cin>>c>>mul;
    c=numb(mul,c);
    cout<<c;

}