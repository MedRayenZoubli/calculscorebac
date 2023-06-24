#include <iostream>
#include <stdlib.h>
#include <cstring>
using namespace std;
int main(){
    system("cls");
    float m,phy,info,sc,philo,ar,en,fr,tech,ttp,g,e,hg,al,sti,sb,st,ep,sp,edp,opt,mg;
    char sec;
    cout << "choisir votre section: " <<endl;
    cout << "-math(m)"<<endl;
    cout << "-sc(s)"<<endl;
    cout << "-info(i)"<<endl;
    cout << "-tech(t)"<<endl;
    cout << "-lettres(l)"<<endl;
    cout << "-ecoges(e)"<<endl;
    cout << "-sport(p)"<<endl;
    cin >> sec;
    system("cls");
    switch (sec)
    {
    case 'm':
        cout << "votre moy general";
        cin >> mg;
        cout << "math: ";
        cin >> m;
        cout << "physique: ";
        cin >> phy;
        cout << "sciences: ";
        cin >> sc;
        cout << "francais: ";
        cin >> fr;
        cout << "arabe: ";
        cin >> ar;
        cout << "informatique: ";
        cin >> info;
        cout << "philosophie: ";
        cin >> philo;
        cout << "anglais: ";
        cin >> en;
        cout << "votre FG est: "<< 4*mg + 2*m + 1.5*phy + 0.5*sc + fr + en;
    
        break;
    case 's':
        cout << "votre moy general";
        cin >> mg;
        cout << "math: ";
        cin >> m;
        cout << "physique: ";
        cin >> phy;
        cout << "sciences: ";
        cin >> sc;
        cout << "francais: ";
        cin >> fr;
        cout << "anglais: ";
        cin >> en;
        cout << "votre FG est: "<< 4*mg + 1*m + 1.5*phy + 1.5*sc + fr + en;
        break;
    case 'l':
        cout << "votre moy general";
        cin >> mg;
        cout << "francais: ";
        cin >> fr;
        cout << "arabe: ";
        cin >> ar;
        cout << "philosophie: ";
        cin >> philo;
        cout << "anglais: ";
        cin >> en;
        cout << "histoire est geographie: ";
        cin >> hg;
        cout << "votre FG est: "<< 4*mg + 1.5*ar + 1.5*philo + hg + fr + en;
    
        break;
    case 'e':
        cout << "votre moy general";
        cin >> mg;
        cout << "math: ";
        cin >> m;
        cout << "economie: ";
        cin >> e;
        cout << "gestion: ";
        cin >> g;
        cout << "francais: ";
        cin >> fr;
        cout << "anglais: ";
        cin >> en;
        cout << "histoire est geographie: ";
        cin >> hg;
        cout << "votre FG est: "<< 4*mg + 1.5*e + 1.5*g + 0.5*m+ 0.5*hg + fr + en;
    
        break;
    case 't':
        cout << "votre moy general";
        cin >> mg;
        cout << "technique: ";
        cin >> tech;
        cout << "math: ";
        cin >> m;
        cout << "physique: ";
        cin >> phy;
        cout << "francais: ";
        cin >> fr;
        cout << "anglais: ";
        cin >> en;
        cout << "votre FG est: "<< 4*mg + 1.5*tech + 1.5*m+ phy + fr + en;
    
        break;
    case 'i':
        cout << "votre moy general";
        cin >> mg;
        cout << "algorithmique: ";
        cin >> al;
        cout << "sti: ";
        cin >> sti;
        cout << "math: ";
        cin >> m;
        cout << "physique: ";
        cin >> phy;
        cout << "francais: ";
        cin >> fr;
        cout << "anglais: ";
        cin >> en;
        cout << "votre FG est: "<< 4*mg + 1.5*m + 1.5*al + 0.5*phy+ 0.5*sti + fr + en;
        break;
    case 'o':
        cout << "votre moy general: ";
        cin >> mg;
        cout << "sc.bio: ";
        cin >> sb;
        cout << "sp.sport: ";
        cin >> sp;
        cout << "education physique: ";
        cin >> ep;
        cout << "physique: ";
        cin >> phy;
        cout << "philosophie: ";
        cin >> philo;
        cout << "francais: ";
        cin >> fr;
        cout << "anglais: ";
        cin >> en;
        cout << "votre FG est: "<< 4*mg + 1.5*sb+ sp+ 0.5*ep +0.5*phy+ fr + en;
        
    default:
        cout << "section invalid";
        break;
    }
    


}