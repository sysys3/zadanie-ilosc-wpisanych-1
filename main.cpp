#include <iostream>

using namespace std;
int i=0,a;

int funkcja(){
 while(a!=9){
   cout << "Liczbe wpisz" <<endl;
   cin >> a;
   if(a==1){
   i = i+a;}

}
    cout << "Wypisales liczbe "<< i << " razy.";
    return 0;
}

int main(){
    funkcja();
}
