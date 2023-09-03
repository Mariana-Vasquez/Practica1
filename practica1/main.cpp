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

        case 4:
        {
            int A , B , hh , mm;

            //se le piden los datos al usuario
            cout<<"Ingrese el primr numero: "<<endl;
            cin>>A,

            system("cls"); //--> vamos limpiando la pantalla para no sobre cargar

            cout<<"Ingrese el segundo numero: "<<endl;
            cin>>B;

            system("cls");

            //se hace la validacion de los tiempos
            if(A/100 >=24 and A%100>=60)
                cout<<A<<" es un tiempo invalido"<<endl;
            else if(B/100 >=24 and B%100>=60)
                cout<<B<<" es un tiempo invalido"<<endl;

            else
            {
                hh=((A/100)+(B/100));
                mm=((A%100)+(B%100));

                if(mm>=60)
                {
                    hh +=mm/60;
                    mm = mm%60;
                }

                cout<<"La hora es: "<<hh<<" : "<<mm<<endl;
            }

            espera();
            break;
        }

        case 5:
        {



            espera();
            break;}

        case 6:
        {
            //declaramos variables que nos pueden ayudar hacer el ejercicio
            int Num, contador = 0, denominador = 1;
            float suma = 0, aux = 0;

            //le pedimos al usuario que ingrese la cantidad de terminos de la aproximcion
            cout<<"Ingrese la cantidad de terminos de la aproximacion: "<<endl;
            cin>>Num;

            system("cls");                              //--->limpiamos la pantalla

            for(int i = 0; i < Num; i++)                //Hacemos las fraciones
            {
                if(contador == 0)
                    aux= 1 ;
                else
                {   while(contador!=0)                  //aqui hacemos los factoriales
                    {
                        denominador = contador * denominador;
                        contador-=1;
                    }
                    aux = (float)1.0 / denominador;
                }

                suma += aux;                            //vamos sumando los resultados de las fracciones
                contador = i+1;
            }

            cout<<"e es aproximadamente: "<<suma<<endl;

            espera();
            break;
        }

        case 7:
        {
            int suma=0, a=1, b=1, c, Num;

            cout<<"Ingrese un numero de terminos de la serie de fibonaci: "<<endl;
            cin>>Num;

            for(int i = 0; i < Num; i++)
            {
                c=a+b;
                a=b;
                b=c;

                if(c%2==0)
                    if(c<Num)
                        suma+=c;
            }

            cout<<"El resultado de la suma es: "<<suma<<endl;

            espera();
            break;
        }

        case 8:      // terminar -> casi listo falta imprimer primero los multiplos de a y luego los de b
        {
            int a = 0, b = 0, c = 0, suma = 0;
            int multiploA = 0 , multiploB = 0;

            cout<<"Ingrese los numeros segun corresponda: "<<endl;
            cout<<"Primer numero: ";
            cin>>a;
            cout<<endl;
            cout<<"Segundo numero: ";
            cin>>b;
            cout<<endl;
            cout<<"Tercer numero: ";
            cin>>c;

            system("cls");

            for(int i = 1; i < c; i++)        //Sacamos los multiplos del primer numero
            {
                if(a*i < c)
                {
                    multiploA = a * i;
                    suma += multiploA;

                    cout<<multiploA<<" + ";
                }
            }

            for(int i = 1; i < c; i++)
            {
                if(b*i < c)
                {
                    multiploB = b * i;
                    if(multiploB%multiploA!=0)
                    {
                        suma += multiploB;
                        cout<<multiploB<<" + ";

                    }
                }
            }

            cout<<" = " << suma<< endl;


            espera();
            break;
        }

        case 9:
        {
            int n = 0, cifras = 0, suma = 0, aux =0;


            cout<<"Ingrese un numero entero: "<<endl;
            cin>>n;

            system("cls");

            while(n >0){
                cifras = n % 10;
                n = n /10;

                aux = 0;

                if(cifras%2==0)
                {
                    for(int i = 1; i < cifras; i++)
                    {aux +=  cifras * cifras;}
                }

                else
                {
                    for(int i = 1; i <= cifras; i++)
                    {aux +=  cifras * cifras;}
                }

                suma = suma + aux;
            }

            cout<<"La suma de todos los digitos elevados a si mismos del nunmero que ingreso es: "<<suma<<endl;

            espera();
            break;}

        case 10:    //terminar
        {

           int n = 0, numero = 2, contador = 1, primo = 0;


           cout<<"Escriba el n esimo numero primo que quiera encontrar: "<<endl;
           cin>>n;

           system("cls");

           cout<<"Tenga encuenta que un numero primo es un numero entero que solo es divisible por 1 y por si mismo"<<endl;
           cout<<"El numero 1 no es considerado primo ya que solo tiene un divisor"<<endl;

           espera();

           while(contador != n){
                bool primos = false;

                for(int j = 2; j < numero; j++)
                {
                    if(numero%j!=0)
                    {
                        primos = true;
                        primo=numero;
                        contador += 1;
                    }
                }
                numero++;

           }

           cout<<"El "<< n <<" esimo numero primo es: "<<primo<<endl;
           espera();
           break;}

        case 11:
        {



            espera();
            break;}

        case 12:
        {



            espera();
            break;}

        case 13:
        {



            espera();
            break;}

        case 14:
        {



            espera();
            break;}

        case 15:
        {



            espera();
            break;}

        case 16:
        {



            espera();
            break;}

        case 17:
        {



            espera();
            break;}

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
