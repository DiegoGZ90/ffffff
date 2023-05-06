/*#include <iostream>

using namespace std;
int main() {
    int numero;
    cout<<"Nos digite un numero entre 1-5";cin>>numero;

    switch (numero) {
        case 1: cout<<"Es el Numero 1: ";break;
        case 2: cout<<"Es el Numero 2 :";break;
        case 3: cout<<"Es el numero 3 :";break;
        case 4: cout<<"Es el numero 4 :";break;
        case 5: cout<<"Es el numero 5 :";break;
        default: cout<<"No esta en el rango pedido1,-5 ";break;



    }
    return 0;
}*/

/*#include <iostream>

using namespace std;

int main (){
    int n1,n2;

    cout<<"Digite 2 Numeros : ";cin>>n1>>n2;

    if(n1==n2){
        cout<<"Los Numero son iguales ";n1<<n2;
    }
    else if(n1>n2){
        cout<<"El Numero mayor es "<<n1;
    }
    else {
        cout<<"El mayor ahora es  "<<n2;
    }



    return 0;
}*/

#include <iostream>

using namespace std;
int main(){
    int n1,n2,n3;

    cout<<"Digite 3 Numeros : ";cin>>n1>>n2>>n3;

    if((n1>n2)&(n2>n3)){
        cout<<" El Numero Mayor :"<<n1;
    }
    else if ((n2>>n1)&(n1>n3)){
        cout<<"El Numero mayor ahora es :"<<n2;
    }
    else{
        cout<<"El Numero mayor ahora es : "<<n3;
    }

    return 0;
}

