/*
Scrivere un programma che stampi "n" volte la stringa "Bada come la fuma"  con "n" dato in input dall'utente.

Alex Degl'innocenti 30/03/2023
*/

# include <iostream>
using namespace std;
int main()
{
  int i=0 ,n;
  cout<<"Quante volte vuoi stampare la frase? \n";
  cin>>n;
  while (i<n)
  {
   cout<<"Bada come la fuma"<<endl; 
  }
  system("pause");
}
