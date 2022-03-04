#include<bits/stdc++.h>
using namespace std;
int main()
{
    int one,two;
    double subtotal,product1,product2;
    cin >>one>>two>>subtotal;
    product1 = two*subtotal;
    cin >>one>>two>>subtotal;
    product2 = two*subtotal;
    subtotal = product1+product2;
    cout << fixed;
    cout << setprecision(2)<< "VALOR A PAGAR: R$ " << subtotal<<endl;
    return 0;
}
