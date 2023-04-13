#include <iostream>

using namespace std;

int main()
{
    cout << "Informe o valor do indice de acidez (pH): ";
    float p7;
    cin >> p7;

    if (p7 > 7)
    {
        cout << "Basica" << endl;
    }
    else if (p7 < 7)
    {
        cout << "Acida" << endl;
    }
    else
    {
        cout << "Neutra" << endl;
    }
}