#include <iostream>
#include <ctime>
#include <cstdlib>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    srand(time(0));
    int num = rand() % 100 + 1;  
    int aletorio;

    do {
        cout << "Adivinha um n�mero entre 1 e 100\n";
        cin >> aletorio;

        if (aletorio < num) {
            cout << "O n�mero que escolheste � maior\n";
        }
        if (aletorio > num) {
            cout << "O n�mero que escolheste � menor\n";
        }
        if (aletorio == num) {  
            cout << "Parab�ns, acertaste!\n";
        }
    } while (aletorio != num);

    
}
