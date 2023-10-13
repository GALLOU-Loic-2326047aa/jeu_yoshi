#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    float pvj1 (150);
    float pvj2 (150);
    int popo (60); 
    int nbj1popo (3);
    int nbj2popo (3);
    int attackj1 (40);
    int attackj2 (40);
    float attack;
    float defensej1 (0);
    float defensej2 (10);
    char (j1);
    char (j2);
    string (nomjoueur1);
    string (nomjoueur2);
   cout << "entrez votre nom joueur 1" << endl;
   cin >> nomjoueur1;
   cout << "entrez votre nom joueur 2"<<endl;
   cin >> nomjoueur2;
       while(pvj1> 0 && pvj2>0)
   {
    cout << '\n' << '\n' << '\n' << '\n' << '\n' << '\n' << '\n' << '\n' << '\n' << '\n' <<"Tour de "<<nomjoueur1<< '\n' << '\n';
    cout <<"stat de "<<nomjoueur1<< "  point de vie : " << pvj1 <<'\t'<<"attack "<<attackj1<< "  defense: " << 100*defensej1/(defensej1+100)<<"%" <<'\t'<< "  nombre de potion: "<<nbj1popo << endl;
    cout <<"stat de "<<nomjoueur2<< "  point de vie : " << pvj2 <<'\t'<<"attack "<<attackj2<< "  defense: " << 100*defensej2/(defensej2+100)<<"%" <<'\t'<< "  nombre de potion: "<<nbj2popo <<'\n'<< endl;
    cout <<"que voulez vous faire: " <<'\n'<< "attaquer: 1"<< '\n'<<"prendre une potion: 2"<<'\n'<<"se renforcer: 3"<<'\n'<<"aiguiser sa lame 4"<<endl;
    cin >> j1 ;
             switch ( j1 )
     {
         case '1':
           attack= attackj1*(1-(defensej2/(defensej2+100)));
            pvj2 = pvj2 - attack;
            break;
         case '2':
         if (nbj1popo<=0)
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
            defensej1 = defensej1 + 15;
            break;
            case '4':
            attackj1 = attackj1 +5;
            break;
         default:
         cout <<"erreur mauvais caractère entré"<<endl;
     }
if (pvj2<=0)
{
      cout << "le Joueur 1 a gagné"<<endl;
   break;}


      cout << '\n' << '\n' << '\n' << '\n' << '\n' << '\n' << '\n' << '\n' << '\n' << '\n' <<"Tour de "<<nomjoueur2<< '\n' << '\n';
      cout <<"stat de "<<nomjoueur1<< "  point de vie : " << pvj1 <<'\t'<<"attack "<<attackj1<< "  defense: " << 100*defensej1/(defensej1+100)<<"%" <<'\t'<< "  nombre de potion: "<<nbj1popo << endl;
      cout <<"stat de "<<nomjoueur2<< "  point de vie : " << pvj2 <<'\t'<<"attack "<<attackj2<< "  defense: " << 100*defensej2/(defensej2+100)<<"%" <<'\t'<< "  nombre de potion: "<<nbj2popo <<'\n'<< endl;
      cout <<"que voulez vous faire: " <<'\n'<< "attaquer: 1"<< '\n'<<"prendre une potion: 2"<<'\n'<<"se renforcer: 3"<<'\n'<<"aiguiser sa lame 4"<<endl;
      cin >> j2 ;
             switch ( j2 )
     {
         case '1':
            attack= attackj2*(1-(defensej1/(defensej1+100)));            pvj1 = pvj1 - attack;
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
              defensej2 = defensej2 +15;
            break;
            case '4':
            attackj2 = attackj2 +5;
            break;
         default:
         cout <<"erreur mauvais caractère entré"<<endl;
     }

   }
    }
   if (pvj2<=0)
{
   cout << "le Joueur 2 a gagné"<<endl;
   break;
}
