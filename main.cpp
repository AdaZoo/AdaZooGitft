#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cout<<"Podaj liczbe: "<<endl;
    cin>>n;
    for (int i=1; i<n+1; i=i+1)
    {
        cout<<i<<endl;
    }
    cout<<"Odwrotna kolejnosc:"<<endl;
    for (int i=n; i>0; i=i-1)
    {

        cout<<i<<endl;
    }
    cout<<"Nieparzyste mniejsze od n: "<<endl;
    for (int i=1; i<n; i+=2)
    {
        cout<<i<<endl;
    }
    cout<<"Parzyste mniejsze od n, n&3=2:"<<endl;
    for (int i=0; i<n; i+=1)//przelec kazda licze od 0, mniejsza od n, i nastepena wez o 1 wieksza

    {
        if (i%3==2 && i%2==0)
        {
        cout<<i<<endl;
        }


    }



    return 0;
}

