#include<iostream>
using namespace std;
int main()
{
system("title Algoritmo-TIDIR - Calculo da Dilatação Volumetrica do Ferro Gusa");
system("color 1F");
long double vT, dV, y , v0, t0, tf;
char fechar;
y=0.000035;
    cout<<"Digite o volume inicial do ferro em METROS cubicos:\n";
    cin>>v0;
    //vT= t0 - tf
    do
        {       
            cout<<"\n Digite a temperatura INICIAL\n";
            cin>>t0;

            cout<<" Digite a temperatura FINAL\n";
            cin>>tf;

            system("cls");

              if(t0>tf) {
                cout<<"\n Operacao invalida\n\n";
                system("PAUSE");
                cout<<"\n";
                system("cls");
                }

              } while(t0>tf);

                vT = tf-t0;

                dV = v0*y*vT;

                  cout<<"\nA dilatacao volumetrica absoluta do ferro foi de:";
                  cout<<dV;
                  cout<<"metros cubicos.\n\n";
                  cout<<"\n\n";
              fechar = '\0';
                    while ((fechar != 'f') && (fechar != 'F'))
                        {
                        cout<<"Pressione f ou F para fechar\n";
                        cin>>fechar;}
                return 0;
            }   
