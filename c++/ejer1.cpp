

#include <iostream>

using namespace std;

int main()
{
    int num1 = 0;
    int num2 = 0;
    int conteoInpares = 0;
    cout<<"ingresa un rango de numeros, se calculara la suma de los numeros inpares dentro de este rango"<<endl;
    cout<<"ingresa el valor de inicio de rango"<<endl;
    cin>>num1;
    cout<<"ingresa el valor de fin de rango"<<endl;
    cin>>num2;
    
    for(int i = num1; i <= num2; i++){
        if(i % 2 != 0){
            conteoInpares += i;
        }
    }
    
    cout<<"la suma de los numeros inpares del rango ["<< num1<< ","<< num2<< "] es: "<<conteoInpares;
    
}
