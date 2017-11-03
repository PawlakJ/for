#include <iostream>

using namespace std;

int main()
{
/* int i,j, n, x;
 string s;
 cout << "Podaj liczbe rzedow"<< endl;
 cin>>n;
 cout <<"Podaj liczbe znakow w rzedzie"<< endl;
 cin>>x;
 cout<< "Podaj znak"<< endl;
 cin>>s;

    for (i=1; i<=n; i++){
      for (j=1; j<=x; j++){
        cout<<s<<" ";
      }
cout<<endl;
    }*/

   int a,z;
   cout<<"Podaj wartoœæ pocz¹tkow¹"<< endl;
      cin>>a;
      cout << "Podaj wartoœæ koñcow¹"<< endl;
      cin>>z;
      if(a<z){
      for (a; a<=z; a++){
      if (a%2==0){
            cout<<a<<" parzysta ";
      }else {
      cout<<a<<" nieparzysta";
      }

      }
      }else {
      cout <<"Bledne dane!";}
    return 0;
}
