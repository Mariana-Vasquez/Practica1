#include <iostream>

using namespace std;

int main()
{
    //Declaracion de variables
    int opcion=1;

    //Declaracion de funciones
    void espera();

    while(opcion!=0){

        //Menu principal

        cout<<"Bienvenid@ al laboratorio 1, por favor ingrese el numero del ejercio que quiere ejecutar: "<<endl;
        cout<<"1. Identificacion de caracter."<<endl;
        cout<<"2. Minima conbinacion de billltes y monedas."<<endl;
        cout<<"3. Conbinacion de mes y dia validos."<<endl;
        cout<<"4. Reloj digital, cuanto tiempo a pasado."<<endl;
        cout<<"5. Patron."<<endl;
        cout<<"6. Serie de Euler."<<endl;
        cout<<"7. Serie de Fibonacci."<<endl;
        cout<<"8. Suma de multiplos menores a un numero ingresado."<<endl;
        cout<<"9. Suma de los cuadrados de los digitos de un numero."<<endl;
        cout<<"10. El n esimo numero primo."<<endl;
        cout<<"11. Minimo comun multiplo."<<endl;
        cout<<"12. Maximo factor primo."<<endl;
        cout<<"13. Suma de los numeros menores a un numero ingresado."<<endl;
        cout<<"14. Numero palindromo."<<endl;
        cout<<"15. Espiral numerico."<<endl;
        cout<<"16. Serie de Collatz."<<endl;
        cout<<"17. Secuencia de numeros triangulares."<<endl;
        cout<<"0. Salir del programa."<<endl;
        cin>>opcion;

        system("cls");  //limpia la pantalla

        //Estructura del menu

        switch (opcion) {
        case 0:
            cout<<"Muchas gracias por haber utilizado hoy nuestros servicios, vuelva pronto. ";
            espera();
            break;

        case 1:

            char car;

            cout<<"ingrese el caracter a identificar: "<<endl;
            cin>>car;

            if (car>=97 and car<=122)
                car-=32;

            if(car>=65 and car<=90)

            {if(car== 65 or car==69 or car==73 or car==79 or car==85){
                    cout<<"El caracter ingresado es una vocal."<<endl;}
                else
                    cout<<"El caracter ingresado es una consonante. "<<endl;}

            else
                cout<<"El caracter ingresado no es una letra. "<<endl;

            espera();
            break;

        default:
            cout<<"la opcion ingresada no es correcta, intentelo denuevo. ";
            espera();
            break;
        }

    }
    return 0;
}

void espera(){
    system("pause");
    system("cls");
}
