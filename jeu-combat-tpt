#include <iostream>
#include <stdio.h>
#include <stdlib.h>     /* srand, rand */
#include <experimental/random>
using namespace std;
int main()
{
    float pvj1 (150);
    float pvj2 (150);
    int popo (60); 
    int nbj1popo (3);
    int nbj2popo (3);
    int attackbrute (40);
    float attack;
    float defensej1 (0.90);
    float defensej2 (0.90);
    char (j1);
    char (j2);

    while(pvj1> 0 && pvj2>0)
   {
    cout << "point de vie du joueur 1: " << pvj1 << "  defense du joueur 1: " << (1-defensej1)*100<<"%" << " nombre de potion: "<<nbj1popo << endl;
    cout << "point de vie du joueur 2: " << pvj2 << "  defense du joueur 2: " << (1-defensej2)*100 <<"%" << " nombre de potion: "<<nbj2popo << endl;
    cout <<"que voulez vous faire: " <<'\n'<< "attaquer: 1"<< '\n'<<"prendre une potion: 2"<<'\n'<<"se renforcer: 3"<<'\n' ;
    cin >> j1 ;
             switch ( j1 )
     {
         case '1':
           attack= attackbrute*defensej2;
            pvj2 = pvj2 - attack;
            break;
         case '2':
         if (nbj2popo<=0)
            {
               cout << "vous n'avez plus de potion vous perdez votre tour."<<'\n' ;
               break;
            }
            pvj1 = pvj1 + popo;
            nbj1popo = nbj1popo -1;
            cout << "vous avez maintenant " << pvj1 << "point de vie"<<'\n' << endl;
            break;
            case '3':
            cout<<"se renforcer"<<endl;
            defensej1 = defensej1 - 0.10;
            break;
         default:
         cout <<"erreur mauvais caractère entré"<<endl;
     }
if (pvj2<=0)
{
      cout << "le Joueur 1 a gagné"<<endl;
   break;}
{
   /* code */
}

    cout << "point de vie du joueur 1: " << pvj1  << '\t' << "  defense du joueur 1: " << (1-defensej1)*100 << '\t' << "%" << " nombre de potion: "<<nbj1popo << endl;
    cout << "point de vie du joueur 2: " << pvj2 << "  defense du joueur 2: " << (1-defensej2)*100<<"%" << " nombre de potion: "<<nbj2popo << endl;
    cout <<"que voulez vous faire: " <<'\n'<< "attaquer: 1"<< '\n'<<"prendre une potion: 2"<<'\n'<<"se renforcer: 3"<<'\n' ;
    cin >> j2 ;
             switch ( j2 )
     {
         case '1':
         attack= attackbrute*defensej1;
            pvj1 = pvj1 - attack;
            break;
         case '2':
            if (nbj2popo<=0)
            {
               cout << "vous n'avez plus de potion vous perdez votre tour." << endl ;
               break;
            }
            pvj2 = pvj2 + popo;
            nbj2popo = nbj2popo -1;
            cout << "vous avez maintenant " << pvj1 << "point de vie"<< '\n'<<endl;
            break;
            case '3':
              defensej2 = defensej2 - 0.10;
            break;
         default:
         cout <<"erreur mauvais caractère entré"<<endl;
     }
   if (pvj2<=0)
{
   cout << "le Joueur 2 a gagné"<<endl;
   break;
   }










    }

}
