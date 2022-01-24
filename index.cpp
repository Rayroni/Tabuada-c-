#include <iostream>
using namespace std;
int main()
{
int num, contador , res;
contador=0;
cout<<"Você deseja ver a tabuada de que número? ";
cin>> num;
do
{
res = num * contador;
cout<<num<<"x"<<contador<<"="<<res<<"\n";
contador++;    
}while (contador<=10);

}
    
 
