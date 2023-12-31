#include <iostream>

using namespace std;

int main()
{
    //Declaracion de variables
    int opcion=1;

    //Declaracion de funciones
    void espera();
    void menu();
    bool esPrimo(int num);
    int Semilla(int k);
    int NTer(int k);
    int Terminos(int jM);

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
            int n;

            cout << "Ingrese un numero impar n: ";
            cin >> n;

            //Se verifica que el numero ingresado sea un numero impar
            if (n % 2 == 0) {
                cout << "El numero ingresado no es impar. Debe ser impar para construir el patron." << endl;
                return 1;           //-> identifica que el numero ingresado no fue impar y devuelve la operacion al comando inicial, es decir, vuelve a cout/cin
            }

            // Imprimir la parte superior del patrón
            for (int i = 1; i <= n / 2 + 1; i++) {          //->se cuenta los espacios en blancos antes de la mitad del numero para acomodar el asterisco; se le suma uno por que el programa toma el numero inferior de la division y necesitamos es la aproximacion al  numero mayor
                // Imprimir espacios en blanco
                for (int j = 1; j <= n / 2 + 1 - i; j++) {
                    cout << " ";
                }
                // Imprimir asteriscos
                for (int j = 1; j <= 2 * i - 1; j++) {      //-> imprime los asteriscos luego de imprimir los espacios; se le multiplica por i y se le resta uno para definir la cantidad de asteriscos que se deben imprimir
                    cout << "*";
                }
                cout << endl;
            }

            /*
             *
             * esta parte del patron debe imprimir un triangulo equilatero con el pico hacia arriba
             *
             * ejemplo n = 5
             *
             *
             *        *
             *       ***
             *      *****
             *
             *
            */

            // Imprimir la parte inferior del patrón
            for (int i = n / 2; i >= 1; i--) {
                // Imprimir espacios en blanco
                for (int j = 1; j <= n / 2 + 1 - i; j++) {
                    cout << " ";
                }
                // Imprimir asteriscos
                for (int j = 1; j <= 2 * i - 1; j++) {
                    cout << "*";
                }
                cout << endl;
            }

            /*
             *
             * esta parte del patron debe imprimir un triangulo equilatero con el pico hacia abajo
             * pero aqui no se imprime a partir del n ingresado si no del n-1 ingresado ya que no se quiere repetir la ultima linea
             *
             * ejemplo n = 5
             *
             *       ***
             *        *
             *
            */


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

        case 8:
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

            for(int i = 1; i < c; i++)      //Sacamos los multiplos del segundo numero
            {
                if(b*i < c)
                {
                    multiploB = b * i;
                    if(multiploB%multiploA!=0)      //Aqui evaluamos si el multiplo de b existe en a, para no imprimir lo dos veces y ignorarlo de la suma
                    {
                        suma += multiploB;
                        cout<<multiploB<<" + ";

                    }
                }
            }

            cout<<" = " << suma<< endl;


            espera();
            break;


            //no se como dejar sin el mas al final, trate de muchas maneras diferentes pero no me dio, pense en un condicional pero daba igual
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

        case 10:
        {

           int n = 0, contador = 0, numero = 2;


           cout<<"Escriba el n esimo numero primo que quiera encontrar: "<<endl;
           cin>>n;

           system("cls");

           cout<<"Tenga encuenta que un numero primo es un numero entero que solo es divisible por 1 y por si mismo"<<endl;
           cout<<"El numero 1 no es considerado primo ya que solo tiene un divisor"<<endl;

           espera();

           // Buscar el enésimo número primo
           while (contador < n) {
                if (esPrimo(numero)) {          //declaramos una funcion especial que nos diga si el numero es primo
                    contador++;
                }
                if (contador < n) {
                    numero++;
                }
           }


           cout<<"El "<< n <<" esimo numero primo es: "<<numero<<endl;
           espera();
           break;}


        case 11:
        {
           int MCM, n, j;
           bool aux = true;     //necesitamos que siga ingresando al ciclo para que busque el MCM, cuado lo halla se cambia a falso

           cout << "Problema 11." << endl << "Ingrese un numero para calcular el MCM de los numeros entre 1 y dicho numero: ";

           cin >> n;
           j = n - 1;           //hallamos el numero inmediatamente menor al limite superior
           MCM = n * j;         //el MCM no debe ser mayor al producto del limite superior y su numero inmediatamente inferior

           while(aux==true)
           {
                for (int i = n; i >= 1; i--)
                {
                    if((MCM % i) !=0)       //Esto quiere decir que el MCM no es el mismo para el numero i que para el resto de los numero, entonces se tiene que cambiar
                    {
                        MCM = n * (n + j);  //En este caso aumentamos el rango cambiando el numero inmediatamente inferior del limite superior
                        j++;
                        break;
                    }
                    if(i == 1)              //Cuando se llegue a uno en i, se deberia encontrar el MCM
                    {
                        cout << "El minimo comun multiplo es: " << MCM << endl;
                        aux = false;        //-> lo cambianmos para salir del while
                    }
                }
           }

            espera();
            break;}

        case 12:
        {
            int fac = 2, num, mayor;

            cout<<"Ingrese el numero para buscar su maximo factor primo: "<<endl;
            cin>>num;

            mayor= num;

            while(fac<=num)
            {
                if(num%fac==0) num = num / fac;

                else
                    fac = fac +1;
            }

            cout<<"El maximo factor primo de "<< mayor << " es " << fac<<endl;

            espera();
            break;}

        case 13:
        {
            int n = 0, contador = 0, numero = 2, suma = 0;


            cout<<"Escriba el n esimo numero primo hasta el que quiera sumar: "<<endl;
            cin>>n;

            cout<<"Tenga encuenta que un numero primo es un numero entero que solo es divisible por 1 y por si mismo"<<endl;
            cout<<"El numero 1 no es considerado primo ya que solo tiene un divisor"<<endl;

            espera();

            // Buscar el enésimo número primo hasta el cual se quiere sumar...              -> lo tomamos del caso 10
            while (contador < n) {
                if (esPrimo(numero)) {          //declaramos una funcion especial que nos diga si el numero es primo
                    contador++;
                    if(numero<n) suma += numero;
                }
                if (contador < n) {
                    numero++;
                }
            }

            cout<<"El resultado de la suma es: "<<suma<<endl;

            espera();
            break;}

        case 14:
        {
            //Programa que calcula las combinaciones de un numero palindromo al multiplicar dos numeros de 3 dígitos.

            int A = 100, B, acumulador2; // Se inicia A en 100 puesto que es el primer numero de 3 dígitos
            bool found;

            cout << "Ingrese un numero palindromo de 3 cifras: ";
            cin >> B;

            while(found==false){
                for(;A<1000;A++){

                    int acumulador = A*B;
                    int auxiliar = acumulador;
                    int C1=0;

                    while(auxiliar>0){

                        //cambiar C por acumulador dado que contiene el valor de la multiplicacion
                        C1 = C1+auxiliar%10;
                        C1 = C1*10;
                        auxiliar = auxiliar/10;

                        if (C1/10==acumulador){
                            found = true;
                            acumulador2 = C1/10;

                            cout << "una de las posibles respuestas es: " << A << "*" << B << "= " <<  acumulador2 << endl;
                        }
                    }
                }
            }

            espera();
            break;}

        case 15:
        {



            espera();
            break;}

        case 16:
        {
            int k = 0, jM = 0, contador1 = 0, opcion2;

            cout<<"Ingrese el termino limite, para buscar la semilla que genere la serie de Collatz mas larga: "<<endl;
            cin>>k;

            jM = Semilla(k);

            contador1 = NTer(k);

            cout<<jM<<" es la semilla mas larga y tiene: "<<contador1<<" terminos"<<endl<<endl;

            cout<<"Quiere saber los terminos de la serie? presione 1 para si y 0 para no "<<endl;
            cin>>opcion2;

            cout<<endl;

            if(opcion2 == 1)
            {
                cout<<jM<< " ";
                Terminos(jM);
            }

            cout<<endl;

            espera();
            break;}

        case 17:
        {
            int k=0;
            cout <<"Ingrese un numero k para calcular el primer numero triangular con k divisores: ";
            cin >> k;

            if (k == 1) cout << "El numero es: " << k << " que tiene " << k << " divisores";

            else
            {
                int i = 2;
                int count = 2;
                int enesimo;
                while (count < k)
                {
                    enesimo = (i * (i + 1)) / 2;  //-> utilizamos la formula del n esimo nuemro triangular
                    int nueve = enesimo / 2;
                    count = 2;
                    for (int j = 2; j <= nueve; j++)
                    {
                        if ((enesimo % j) == 0)
                        {
                            count++;
                        }
                    }

                    i++;
                }
                cout << "El numero es: " << enesimo << " que tiene " << count << " divisores"<<endl;
            }

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

bool esPrimo(int num) {         //Necesitamos saber si el numero es primo o no, por ello necesitamos una respuesta booleana
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {        // i = 2; 2*2 = 4       si 4 <= 2 NO ENTRA EN EL FOR        si 4<=4 ENTRA AL FOR y lo mismo con el resto de los numeros verificando si el residuo sea 0 para los NO primos
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int Semilla(int k){
    int contador, sigterm, contador1 = 0, jM;

    for(int j = 1; j < k; j++)
    {
        sigterm = j;
        contador=1;
        while(sigterm>1)
        {
            if(sigterm % 2 == 0)  //miramos a ver si es par
            {
                sigterm = sigterm /2;
                contador ++;
            }

            else                //si es impar
            {
                sigterm = (3*sigterm)+1;
                contador++;

            }
        }

        if(contador > contador1)
        {
            contador1= contador;
            jM = j;
        }
    }

    return jM;
}

int NTer(int k){
    int contador, sigterm, contador1 = 0;

    for(int j = 1; j < k; j++)
    {
        sigterm = j;
        contador=1;
        while(sigterm>1)
        {
            if(sigterm % 2 == 0)  //miramos a ver si es par
            {
                sigterm = sigterm /2;
                contador ++;
            }

            else                //si es impar
            {
                sigterm = (3*sigterm)+1;
                contador++;

            }
        }

        if(contador > contador1)
        {
            contador1= contador;
        }
    }

    return contador1;
}

int Terminos(int jM){
    int sigterm;

        sigterm = jM;

        while(sigterm>1)
        {
            if(sigterm % 2 == 0)  //miramos a ver si es par
            {
                sigterm = sigterm /2;
                cout<<sigterm<<" ";
            }

            else                //si es impar
            {
                sigterm = (3*sigterm)+1;
                cout<<sigterm<<" ";

            }
        }

    return 0;
}
