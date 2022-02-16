#include <bits/stdc++.h>
using namespace std;
int nrforme,i,x,j,q,k,t,raza,lmica,lmare,laturapatrat,cmica,cmare,aria,umplut,inaltime,totalfrisca,totalgem,ff[101];
char forme[1001],comanda[1001];
int main() {
    cin>>comanda;
    i=1;
    j=i+1;
   while(strcmp(comanda,"STOP")){
       if(!strcmp(comanda,"ADD")){
           cin >> forme;
           if (forme[0] == 'c') {
               cin >> raza;
               cin >> inaltime;
               aria = 3.14 * raza * raza;
               // cout << aria;
               umplut = aria * inaltime;
               totalgem = totalgem+ umplut * 2;
               totalfrisca =totalfrisca+ aria;
               ff[i]=umplut*2;
               ff[j]=aria;
               i++;
               j++;
               //cout<<"Cantitatea totala este"<<" "<<totalgem<<"g/cm^3"<<" "<<totalfrisca<<"g/cm^2";
           }
           if (forme[0] == 'd') {
               cin >> lmica >> lmare;
               cin >> inaltime;
               aria = lmica * lmare;
               umplut = aria * inaltime;
               totalgem = totalgem+ umplut * 2;
               totalfrisca =totalfrisca+ aria;
               ff[i]=umplut*2;
               ff[j]=aria;
               i++;
               j++;
               //cout<<"Cantitatea totala este"<<" "<<totalgem<<"g/cm^3"<<" "<<totalfrisca<<"g/cm^2";
           }
           if (forme[0] == 'p') {
               cin >> laturapatrat;
               cin >> inaltime;
               aria = laturapatrat * laturapatrat;
               umplut = aria * inaltime;
               totalgem = totalgem+ umplut * 2;
               totalfrisca =totalfrisca+ aria;
               ff[i]=umplut*2;
               ff[j]=aria;
               i++;
               j++;
               //cout<<"Cantitatea totala este"<<" "<<totalgem<<"g/cm^3"<<" "<<totalfrisca<<"g/cm^2";
           }
           if (forme[0] == 't') {
               cin >> cmica >> cmare;
               cin >> inaltime;
               aria = (cmica * cmare) / 2;
               umplut = aria * inaltime;
               totalgem = totalgem+ umplut * 2;
               totalfrisca =totalfrisca+ aria;
               ff[i]=umplut*2;
               ff[j]=aria;
               i++;
               j++;
               // cout<<"Cantitatea totala este"<<" "<<totalgem<<"g/cm^3"<<" "<<totalfrisca<<"g/cm^2";
           }
           cout<<totalgem<<" "<<totalfrisca<<" ";
           cin>>comanda;
           if(strcmp(comanda,"TOTAL"))
               cout<<"Cantitatea totala este"<<" "<<totalgem<<"g/cm^3"<<" "<<totalfrisca<<"g/cm^2";
           if(strcmp(comanda,"REMOVE"))
           {
               for(int i=1;i<=2*nrforme;i=i+2)
               {
                   ff[i]=ff[i+2];
                   ff[i+1]=ff[i+3];
               }
           }
           else
               continue;
       }
   }
    return 0;
}
