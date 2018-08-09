#include <iostream>

int num = 34;
int num2 = 5;
int sum = num * num2;
using namespace std;

string letra = "Dios Gracias";
bool variable;

int main()
{
    float nu = 65.5678975682;
    float xd = (float) nu + num2;
    variable = (num > num2 || sum > num2);

    cout << variable << "\n" << xd/7 << "\n" << nu << "\n"  << num << "\n" <<  num2 << "\n" << sum << "\n" << endl ;

    char c;
    cout << "Escriba una letra" << endl;
    cin >> c;

    switch (c)
    {
        case 'a' :
        case 'e' :
        case 'i' :
        case 'o' :
        case 'u' :
            cout << "Es una vocal \n" << endl;
            break;
        default:
            cout << "Es una consonante" <<endl;
    }


    return 0;
}