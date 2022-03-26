#include <iostream>
using namespace std;
int main()
{
    int salary;
    cout<<"salary:";
    cin>>salary;
    int total;
    total=((33%(salary))+(30%(salary))+(10%(salary))+salary);
    
    cout<<"total salary"<<total<<endl;
    int tax;
    tax=(0.33*(total));

    cout<<"total tax:"<<tax<<endl;
    int tsal;
    tsal=(total+tax);
    cout<<"total salary after tax:"<<tsal<<endl;
    if (tax<=10000);
    {
        cout<<"no tax"<<endl;

    }


    return 0;
}