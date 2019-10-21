

#include <iostream>

using namespace std;

int main()
{
    int num1 = 0;
    int num2 = 0;
    int numeroDeCasos = 0;
    cout<<"ingresa cuantos casos quieres comparar"<<endl;
    cin>>numeroDeCasos;
    for(int i = 1; i <= numeroDeCasos; i++){
        cout<<"caso "<<i<<endl;
        cout<<"ingresa el primer valor"<<endl;
        cin>>num1;
        cout<<"ingresa el segundo valor"<<endl;
        cin>>num2;
        if(num1 > num2){
            cout<<num1<<" > "<<num2<<endl;
        }else if(num1 < num2){
            cout<<num1<<" < "<<num2<<endl;
        }else{
            cout<<num1<<" = "<<num2<<endl;
        }
    }
    
    
}
