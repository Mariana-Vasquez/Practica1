#include <iostream>

using namespace std;

int main()
{
    //Declaracion de variables
    int opcion=1;

    //Declaracion de funciones
    void espera();
    void menu();

    while(opcion!=0){

        menu();         //menu principal y eleccion de opcion
        cin>>opcion;

        system("cls");  //limpia la pantalla


        //Estructura del menu

        switch (opcion) {
        case 0:    //Salida del menu
            cout<<"Muchas gracias por haber utilizado hoy nuestros servicios, vuelva pronto. ";
            espera();
            break;

        case 1:
        {
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
            break;}

        case 2:{

            int dinero=0;
            int contador=0;
            int denominacion[]={50000,20000,10000,5000,2000,1000,500,200,100,50};


            cout<<"Ingrese la cantidad de dinero: "<<endl;
            cout<<"Solo ingrese los numeros, sin ningun punto, coma o espacio "<<endl;
            cin>>dinero;

            system("cls");

            cout<<"la denominacion y la cantidad minima de billetes es: "<<endl;

            while(dinero >= 50){
                for(int i=0; i<10; i++)
                {
                    contador = 0;
                    while(dinero>=denominacion[i]){
                        contador +=1;
                        dinero-=denominacion[i];}

                    //salida
                    cout<<denominacion[i] << " = " << contador<< endl;
                }
            }

            if(dinero != 0)
            cout << "Faltante = " << dinero << endl;

            else
            cout <<"Faltante = 0"<<endl;

            espera();
            break;}

        default:  //por defecto cuando se ingresa una opcion invalida
            cout<<"la opcion ingresada no es correcta, intentelo denuevo. ";
            espera();
            break;
        }

    }
    return 0;
}

//Declaracion de la funcion

void menu(){
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
}

void espera(){
    system("pause");
    system("cls");
}
