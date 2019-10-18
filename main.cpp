#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string>
#include <math.h>

using namespace std;

// Fonction du menu principale

void Menu_principal(){
    cout << "-------------------------------------------------------------------------------" << endl;
        cout << "[T/t]......................Pour la triangulation d'une matrice." << endl;
        cout << "[P/p]......................Indique si un nombre est premier ou non." << endl;
        cout << "[M/m]......................Construction du caree magique d'ordre paire." << endl;
        cout << "[I/i]......................Information d'etudiant dans un fichier." << endl;
        cout << "[Q/q]......................Quitter le programme." << endl;
    cout << "-------------------------------------------------------------------------------" << endl;
}
//-----------------------------------------------------------------------------------------------------
    // fonction sous menu pour la tiangulation de matrice
void Menu_secondaire1(){
    cout << "Faites un choix entre ces deux chiffres:" << endl;
    cout << "[1]......................Pour une matrice triangulaire superieure." << endl;
    cout << "[2]......................Pour une matrice triangulaire inferieure." << endl;
}
//-----------------------------------------------------------------------------------------------------

    // Fonction Sous menu pour la saisie des informations sur l'etudiant
void Menu_secondaire2(){
    cout << "Faites un choix entre ces deux chiffres:" << endl;
    cout << "[1]......................Saisie d'information." << endl;
    cout << "[2]......................Recherche d un etudiant par son code dans le fichier." << endl;
    cout << "[3]......................Affichage des informations contenues dans le fichier." << endl;
}
//----------------------------------------------------------------------------------------------------
  // fonction pour tester les entrees

  char Test_lettre(char x ){
        return (x == 'T' || x == 't'  ||
                x == 'P' || x == 'p'  ||
                x == 'M' || x == 'm'  ||
                x == 'I' || x == 'i'  ||
                x == 'Q' || x == 'q');

}
//------------------------------------------------------------------------------------------------------



//-------------------------------------------------------------------------------------------------------
char Test_reponse(char z){
    return( z == 'O' || z == 'o' || z == 'N' || z == 'n');
}


//-------------------------------------------------------------------------------------------------------
char Test_sexe(char z){
    return( z == 'F' || z == 'M' || z == 'f' || z == 'm');
}

//------------------------------------------------------------------------------------------------------
 //fonction pour menu secondaire

 int Test_menu_secondaire1(int z){
    return( z == 1 || z == 2);
}
//-------------------------------------------------------------------------------------------------
int Test_menu_secondaire2(int z){
    return( z == 1 || z == 2 || z == 3);
}
//-------------------------------------------------------------------------------------------------

//-------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------

int main()
{
    char choix;
    do{
        system("cls");
        Menu_principal();
        cout << "Pressez la lettre de votre choix: ";
        cin >> choix;

        while( !Test_lettre(choix)){

            cout << "Erreur, vous avez entrez un mauvais lettre" << endl;
             cout << "Pressez la lettre de votre choix: ";
                cin >> choix;
                cin.clear();
                cin.ignore(1000, '\n');
        }
    // Faisons les choix
        cout << endl;
        switch(choix){
            case 'T':
            case 't':{
                Menu_secondaire1();
                  int choix1;
                    cout << "Pressez le chiffre de votre choix: ";
                    cin >> choix1;
                    while( !Test_menu_secondaire1(choix1)){
                        cout << "Erreur, vous avez entrez un mauvais chiffre" << endl;
                        cout << "Svp, faire un nouveau choix stp" << endl;
                            cin >> choix1;
                            cin.clear();
                            cin.ignore(1000, '\n');
                    }
                    // Cas pour matrice Triangulaire superieur
                    switch(choix1){
                        case 1:{
                                    int nbre_ligne,nbre_colonne;
                                //do{
                                    cout << "Entrer le nombre de lignes: " ;
                                        while ( !(cin >> nbre_ligne))
                                        {
                                        cout << "Erreur, entrer une autre valeur" << endl;
                                        cout <<  "Entrer le nombre de lignes "  ;
                                        cin.clear();
                                        cin.ignore (1000, '\n');
                                        }
                                        cout << endl;
                                    cout << "Entrer le nombre de colonnes: ";
                                         while ( !(cin >> nbre_colonne))
                                        {
                                        cout << "Erreur, entrer une autre valeur" << endl;
                                        cout <<  "Entrer le nombre de colonnes "  ;
                                        cin.clear();
                                        cin.ignore (1000, '\n');
                                        }
                               // }
                               // while(nbre_ligne != nbre_colonne);
                                int T[nbre_ligne][nbre_colonne];

                                for(int i = 0; i < nbre_ligne; i++ ){
                                    for(int j = 0; j < nbre_colonne; j++){
                                        cout << "T" << "["<< i << "]["<< j<< "]" << " = " ;
                                        while ( !( cin >> T[i][j]))
                                        {
                                        cout << "Erreur, entrer une autre valeur" << endl;
                                        cout << "T" << "["<< i << "]["<< j<< "]" << " = " ;
                                        cin.clear();
                                        cin.ignore (1000, '\n');
                                        }
                                    }
                                    cout << endl;
                                }
                                cout << "La matrice triangulaire superieure est" << endl;
                                for(int i = 0; i < nbre_ligne; i++ ){
                                    for(int j = 0; j < nbre_colonne; j++){
                                       if(i > j){
                                        T[i][j] = 0 ;
                                       }
                                       else{
                                        T[i][j] = T[i][j];
                                       }
                                       cout << T[i][j] << "  " ;
                                    }
                                    cout << endl;
                                    cout << endl;
                                }
                                break;
                        }
                        // Les instruction pour la Matrice triangulaire inferieur
                        case 2:{
                                    int nbre_ligne1,nbre_colonne1;
                              //  do{
                                    cout << "Entrer le nombre de lignes: " ;
                                        while ( !(cin >> nbre_ligne1))
                                        {
                                        cout << "Erreur, entrer une autre valeur" << endl;
                                        cout <<  "Entrer le nombre de lignes: "  << endl;
                                        cin.clear();
                                        cin.ignore (1000, '\n');
                                        }
                                        cout << endl;
                                    cout << "Entrer le nombre de colonnes: ";
                                         while ( !(cin >> nbre_colonne1))
                                        {
                                        cout << "Erreur, entrer une autre valeur" << endl;
                                        cout <<  "Entrer le nombre de colonnes: "  << endl;
                                        cin.clear();
                                        cin.ignore (1000, '\n');
                                        }
                                //}
                               // while(nbre_ligne1 != nbre_colonne1);

                                int T[nbre_ligne1][nbre_colonne1];

                                for(int i = 0; i < nbre_ligne1; i++ ){
                                    for(int j = 0; j < nbre_colonne1; j++){
                                        cout << "T" << "["<< i << "]["<< j<< "]" << " = " ;
                                        while ( !(cin >> T[i][j]))
                                        {
                                        cout << "Erreur, entrer une autre valeur" << endl;
                                        cout << "T" << "["<< i << "]["<< j<< "]" << " = " ;
                                        cin.clear();
                                        cin.ignore (1000, '\n');
                                        }
                                    }
                                    cout << endl;
                                }
                                cout << "La matrice triangulaire inferieure est:" << endl;
                                for(int i = 0; i < nbre_ligne1; i++ ){
                                    for(int j = 0; j < nbre_colonne1; j++){
                                       if(i < j){
                                        T[i][j] = 0 ;
                                       }
                                       else{
                                        T[i][j] = T[i][j];
                                       }
                                       cout << T[i][j] << "  " ;
                                    }
                                    cout << endl;
                                    cout << endl;
                                }

                        }

                    }
                    break;

            }
            // Fin du premier cas
            // Debut du second cas: Le cas des nombre premiers.. Lollll
            // 12/29/16
            //11 h 33 Am
            case 'P':
            case 'p':{
                            bool premier=true;
                            int i;
                            int n;
                            do{
                            cout << "Entrez un nombre : ";
                            while ( !(cin >> n)){
                              cout << "Erreur, entrer une autre valeur" << endl;
                              cout << "Entrez un nombre premier : ";
                              cin.clear();
                              cin.ignore (1000, '\n');
                            }
                            }while(n < 2);
                            for(i = 2; i <= sqrt(n); i++){
                                if (n % i == 0){
                                    premier = false;
                                    break;
                                }
                            }

                            if(!premier)
                                cout<< n <<" n'est pas premier" << endl;
                            else{
                                cout<< n <<" est un nombre premier" << endl;
                            }
                        }
                        break;

            case 'M':
            case 'm':{
                int n ;
                do {cout <<"Entrez un chiffre pair  et superieur a 2: ";
                    while( !(cin >> n))
                        {
                        cout << "Erreur, vous avez entrez un mauvais chiffre" << endl;
                        cout << "Svp, faire un nouveau choix stp: " ;
                        cin.clear();
                        cin.ignore(1000, '\n');
                    }

            }while (!(n % 2 == 0) || n < 4);

            double carreMagique[n][n];
            for (int i(0); i<n; i++)
            {
                for (int j(0); j<n; j++)
                {
                    carreMagique[i][j]=(n*i)+j+1;
                }

            }
            for (int i(0); i<n; i++)
            {
                for (int j(0); j<n; j++)
                {
                    if (!((i==j) || (i+j==n-1)))
                    {
                        carreMagique[i][j]=(n*n)+1-((n*i)+j+1);
                    }
                    cout <<carreMagique[i][j]<<" ";

                }
                cout <<endl;
            }
        }
         break;

            case 'I':
            case 'i':{
                Menu_secondaire2();
                int choix2;
                cout << "Pressez le chiffre de votre choix: ";
                    cin >> choix2;
                    while( !Test_menu_secondaire2(choix2))
                        {
                        cout << "Erreur, vous avez entrez un mauvais chiffre" << endl;
                        cout << "Svp, faire un nouveau choix stp: " ;
                            cin >> choix2;
                        cin.clear();
                        cin.ignore(1000, '\n');
                    }

                switch(choix2){
                    case 1:{
                        string code;
                       string nom;
                       string prenom;
                        char sexe ;
                        int age;
                        bool already_exist;
                        char reponse;

                        do{

                                do{
                                    cout << "Code: ";
                                    cin >> code;
                                    already_exist = false;
                                    ifstream fichier("record.txt", ios::in);
                                    if(fichier){
                                        string ligne;
                                        while(getline(fichier,ligne)){
                                            string word = ligne.substr(0,5);
                                            string theCode;
                                            if(word == "Code:"){
                                                theCode = ligne.substr(6,ligne.size());
                                                if(theCode == code){
                                                    already_exist = true;
                                                    cout<<"Code exitant"<<endl;
                                                    continue;
                                                }
                                            }
                                        }
                                        fichier.close();
                                    }
                                }while(already_exist);


                                ofstream recording("record.txt", ios::app);
                                if(recording){
                                    recording <<"\n"<<endl;
                                        recording << "Code: " << code<< endl;
                                   cout << "Nom: ";
                                  cin >> nom;
                                        recording << "Nom: " << nom << endl;
                                    cout << "Prenom: " ;
                                        cin >> prenom;
                                        recording << "Prenom: " << prenom << endl;
                                    cout << "Sexe: ";
                                        cin >> sexe;
                                        while( !Test_sexe(sexe)){
                                        cout << "Erreur, vous avez entrez un mauvais chiffre" << endl;
                                        cout << "Svp, entrer le sexe a nouveau svp: " << endl;
                                        cout << "Sexe: ";
                                        cin >> sexe;
                                        cin.clear();
                                        cin.ignore(1000, '\n');
                                        }
                                        recording << "Sexe: " << sexe << endl;
                                        do{
                                            cout << "Age: ";
                                            while ( !(cin >> age))
                                            {
                                             cout << "Erreur, entrer une autre valeur" << endl;
                                              cout <<  "Entrer l'Age: "  ;
                                              cin.clear();
                                              cin.ignore (1000, '\n');
                                             }
                                        }while(age > 150);
                                         recording << "Age: " << age << " an(s)" << endl;
                                        }  else{
                                            cout <<" not Ok";
                            }

                            cout << "Donnee enregistree avec succes !!!" << endl;

                        cout << "Voulez vous enregitrez a nouveau (o/ O ou n/ N) : ";
                                cin >> reponse;
                                 while( !Test_reponse(reponse)){
                                        cout << "Erreur, vous avez entrez un mauvais chiffre" << endl;
                                        cout << "Svp, entrer le sexe a nouveau svp: " << endl;
                                        cout << "Voulez vous enregitrez a nouveau (o/ O ou n/ N) : ";
                                        cin.clear();
                                        cin.ignore(1000, '\n');
                                        }
                    }
                    while(reponse == 'o' || reponse == 'O');
                }
                     break;
               case 2: {
                    string code;
                    bool finding = false;
                    while(!finding){
                        cout << "Entrer le code de l'etudiant: ";
                        cin >> code;
                        ifstream fichier("record.txt", ios::in);
                        if(fichier){
                           string ligne,ligne2,ligne3,ligne4,ligne5;
                           while(getline(fichier,ligne)){
                                if(ligne != ""){
                                    if(ligne.substr(0,5) == "Code:" && ligne.substr(6,ligne.size()) == code){
                                        cout<<ligne<<endl;
                                        getline(fichier,ligne2);
                                        cout<<ligne2<<endl;
                                        getline(fichier,ligne3);
                                        cout<<ligne3<<endl;
                                        getline(fichier,ligne4);
                                        cout<<ligne4<<endl;
                                        getline(fichier,ligne5);
                                        cout<<ligne5<<endl;
                                        finding = true;
                                        break;
                                    }
                                }

                            };
                            fichier.close();

                        }
                        if(!finding){
                            cout<<"Code introuvable"<<endl;
                        }
                    };

                        break;

               }
                    case 3:{
                        ifstream fichier("record.txt", ios::in);
                        if(fichier){
                            string contain;
                            while(getline(fichier,contain)){
                                cout<<contain << endl;
                            };
                            fichier.close();
                        }

                    }

                }

                }
                break;

                    case 'Q':
                    case 'q':{
                             cout << "Pressez n'importe quel touche, pour quitter le programme" << endl;
                            exit(0);

                          }
            }
    }while(choix == 't'|| choix == 'T' || choix == 'P' || choix == 'p' || choix == 'M' || choix == 'm'  || choix == 'I' || choix == 'i');

    return 0;
}

