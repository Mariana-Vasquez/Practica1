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

        case 3:
        {
            int mes = 0;
            int dia = 0;
            int meses31[]={1,3,5,7,8,10,12};
            int meses30[]={4,6,9,11};

            //ingresar el mes
            cout<<"Por favor, ingrese el mes: "<<endl;
            //cout<<"Si el mes es de solo un digito, digite un 0 primero y luego el numero del mes; ejemplo: Mayo seria 05 "<<endl;
            cin>>mes;

            system("cls");

            //validacion del mes
            if(mes>12)
            cout<<mes<<" El mes ingresado no es valido"<<endl;

            //ingresar el dia
            else
            {
                cout<<"Por favor ingrese el dia: "<<endl;
                cout<<"Si el dia es de solo un digito, digite un 0 primero y luego el numero del dia; ejemplo: el quinto dia seria 05 "<<endl;
                cin>>dia;

                system("cls");

                if(dia>31)
                    cout<<dia<<" es un dia invalido"<<endl;

                else{
                    //caso especial: mes de febrero
                    if(mes==02){
                        if(dia==29)
                            cout<<dia<<"/"<<mes<<" es valido en ano bisiesto"<<endl;
                        else
                        {
                            if(dia>28)
                                cout<<dia<<"/"<<mes<<" es una fecha invalida"<<endl;
                            else
                                cout<<dia<<"/"<<mes<<" es una fecha valida"<<endl;
                        }
                    }


                    for(int i = 0; i < 7; i++)
                    {
                        //meses con 31 dias
                        if(mes==meses31[i])
                        cout<<dia<<"/"<<mes<<" es una fecha valida"<<endl;
                    }

                    for(int i = 0; i < 4; i++){
                        //meses con 30 dias
                        if(mes==meses30[i])
                        {
                            if(dia > 30)
                            cout<<dia<<"/"<<mes<<" es una fecha invalida"<<endl;
                            else
                            cout<<dia<<"/"<<mes<<" es una fecha valida"<<endl;
                        }
                    }

                }
            }

            espera();
            break;
        }

        default:  //por defecto cuando se ingresa una opcion invalida
            {cout<<"la opcion ingresada no es correcta, intentelo denuevo. ";
            espera();
            break;}

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
