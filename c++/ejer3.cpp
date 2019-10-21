#include <iostream>

using namespace std;

int main()
{
    int num = 0;
    int numAmultiplicar = 1;
    cout<<"introduce un numero para saber si es primo"<<endl;
    cout<<"introduce el numero"<<endl;
    cin>>num;
    cout<<"el numero que elegiste es "<<num<<endl;
    for(int i = 1; i < num; i++){
        numAmultiplicar = numAmultiplicar * i;
    }
    numAmultiplicar = numAmultiplicar + 1;
    if(numAmultiplicar % num == 0){
        cout<<"el numero que has ingresado es primo"<<endl;
    }else{
        cout<<"el numero que has no ingresado es primo"<<endl;
    }
    return 0;
}
