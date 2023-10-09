#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <experimental/random>
using namespace std;
int main()
{
    char verif;
    int petal;
    string jtm ="je t'aime";
    string jtmp ="je t'aime pas";
    string jtmf ="je t'aime à la folie";
    petal = experimental::randint(9,12);
    // petal = rand() % 12 + 9; //une autre manière de mettre de l'aléatoire
    while(petal>0){
        cout << "appuyer sur une touche" << endl;
        cout << petal << endl;
        cin >> verif;
        if(petal % 2 == 0)
        {
            cout  << jtm<<endl;
        }
        else
        {
            cout << jtmp<<endl;
        }
        petal = petal - 1;
    }
}
