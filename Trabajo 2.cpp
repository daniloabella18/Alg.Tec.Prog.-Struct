///Danilo Abellá
///LCC - USACH
///Profesora: Rosa Berrera
///Compilador: Codeblocks 13.12
///SO: Win 8.0

#include <iostream>
#include <fstream>
#define MAX 100

using namespace std;

///Declaración de TDA///
struct complejo
{
    int puesto;
    float r;
    float i;
};

///Declaración de funciones///
void Suma (float ar,float ai,float cr,float ci);
void Resta (float ar,float ai,float cr,float ci);
void Multiplicacion (float ar,float ai,float cr,float ci);
void Division (float ar,float ai,float cr,float ci);
int NumeroR(complejo x , int f);
int NumeroI(complejo x , int f);
void mostrar(complejo x);
void EscribirDatos1(complejo p);
void EscribirDatos2(complejo p);


int main()
{

/// Declaración de variables ///-------------------------------------------------------------------------///

    complejo x;
    complejo a;
    complejo c;
    ifstream f1;
    ofstream f2;
    int h,y;
    int s,r,m,d;
    int i,t;
    int f,q;
    float Rf,If,Rq,Iq;
    char aux;

/// Menú Principal ///------------------------------------------------------------------------------------///

    cout<<"Bienvenido a la calculadora de numeros complejos!"<<endl;
    h=1;
    cout<<"Tareas:"<<endl;
    cout<<"(1)Sumar."<<endl;
    cout<<"(2)Restar."<<endl;
    cout<<"(3)Multiplicar."<<endl;
    cout<<"(4)Division."<<endl;
    cout<<"(5)Agrengar numeros complejos al archivo binario."<<endl;
    cout<<"(6)Ver numeros de archivo binario."<<endl;
    cout<<"(7)Salir"<<endl;
    while (h!=0)
    {   cout<<"\nQue tarea desea realizar ahora?... ingrese numero correspondiente segun tarea:"<<endl;
        cout<<"(Para ver las Tareas nuevamente ingrese 8)"<<endl;
        cout<<"Tarea Numero:";
        cin>>y;
        cout<<""<<endl;
        switch (y)
        {

    /// Suma ///------------------------------------------------------------------------------------///

            case 1:
                cout<<"Suma: \n\nDe donde quiere sacar sus datos?"<<endl;
                cout<<"(1)Ingresando via teclado"<<endl;
                cout<<"(2)Extraer datos de archivo binario"<<endl;
                cout<<"(3)Atras"<<endl;
                cout<<"\nOpcion:";
                cin>>s;
                if (s==1)
                {
                    cout<<"\nIngrese numero complejo(a+bi):\n"<<endl;
                    cin>>a.r;
                    cin>>aux;
                    cin>>a.i;
                    cin>>aux;
                    cout<<"\nPara segundo numero:"<<endl;
                    cout<<"\nIngrese numero complejo(a+bi):\n"<<endl;
                    cin>>c.r;
                    cin>>aux;
                    cin>>c.i;
                    cin>>aux;
                    Suma(a.r, a.i, c.r, c.i);
                }
                if (s==2)
                {
                    cout<<"\nNOTA:En el Archivo Binario creado por este programa \ncada numero complejo tiene un puesto especifico asignado\n(en el caso del archivo adjunto hay numeros desde el puesto 1 al 100)."<<endl;
                    cout<<"\nIngrese puesto del primer numero complejo:";
                    cin>>f;
                    Rf = NumeroR(x,f);
                    If = NumeroI(x,f);
                    cout<<"\nIngrese puesto del segundo numero complejo:";
                    cin>>q;
                    Rq = NumeroR(x,q);
                    Iq = NumeroI(x,q);
                    Suma(Rf, If, Rq, Iq);
                }
                else
                {
                    break;
                }
                break;

    /// Resta ///------------------------------------------------------------------------------------///

            case 2:
                cout<<"Resta: \n\nDe donde quiere sacar sus datos?"<<endl;
                cout<<"(1)Ingresando via teclado"<<endl;
                cout<<"(2)Extraer datos de archivo binario"<<endl;
                cout<<"(3)Atras"<<endl;
                cout<<"\nOpcion:";
                cin>>r;
                if (r==1)
                {
                    cout<<"\nPara primer numero:"<<endl;
                    cout<<"\nIngrese numero complejo(a+bi):\n"<<endl;
                    cin>>a.r;
                    cin>>aux;
                    cin>>a.i;
                    cin>>aux;
                    cout<<"\nPara segundo numero:"<<endl;
                    cout<<"\nIngrese numero complejo(a+bi):\n"<<endl;
                    cin>>c.r;
                    cin>>aux;
                    cin>>c.i;
                    cin>>aux;
                    Resta(a.r, a.i, c.r, c.i);
                }
                if (r==2)
                {
                    cout<<"\nNOTA:En el Archivo Binario creado por este programa \ncada numero complejo tiene un puesto especifico asignado\n(en el caso del archivo adjunto hay numeros desde el puesto 1 al 100)."<<endl;
                    cout<<"\nIngrese puesto del primer numero complejo:";
                    cin>>f;
                    Rf = NumeroR(x,f);
                    If = NumeroI(x,f);
                    cout<<"\nIngrese puesto del segundo numero complejo:";
                    cin>>q;
                    Rq = NumeroR(x,q);
                    Iq = NumeroI(x,q);
                    Resta(Rf, If, Rq, Iq);
                }
                else
                {
                    break;
                }
                break;

    /// Multiplicacion ///------------------------------------------------------------------------------------///

            case 3:
                cout<<"Multiplicacion: \n\nDe donde quiere sacar sus datos?"<<endl;
                cout<<"(1)Ingresando via teclado"<<endl;
                cout<<"(2)Extraer datos de archivo binario"<<endl;
                cout<<"(3)Atras"<<endl;
                cout<<"\nOpcion:";
                cin>>m;
                if (m==1)
                {
                    cout<<"\nPara primer numero:"<<endl;
                    cout<<"\nIngrese numero complejo(a+bi):\n"<<endl;
                    cin>>a.r;
                    cin>>aux;
                    cin>>a.i;
                    cin>>aux;
                    cout<<"\nPara segundo numero:"<<endl;
                    cout<<"\nIngrese numero complejo(a+bi):\n"<<endl;
                    cin>>c.r;
                    cin>>aux;
                    cin>>c.i;
                    cin>>aux;
                    Multiplicacion(a.r, a.i, c.r, c.i);
                }
                if (m==2)
                {
                    cout<<"\nNOTA:En el Archivo Binario creado por este programa \ncada numero complejo tiene un puesto especifico asignado\n(en el caso del archivo adjunto hay numeros desde el puesto 1 al 100)."<<endl;
                    cout<<"\nIngrese puesto del primer numero complejo:";
                    cin>>f;
                    Rf = NumeroR(x,f);
                    If = NumeroI(x,f);
                    cout<<"\nIngrese puesto del segundo numero complejo:";
                    cin>>q;
                    Rq = NumeroR(x,q);
                    Iq = NumeroI(x,q);
                    Multiplicacion(Rf, If, Rq, Iq);
                }
                else
                {
                    break;
                }
                break;

    /// Division ///------------------------------------------------------------------------------------///

            case 4:
                cout<<"Division: \n\nDe donde quiere sacar sus datos?"<<endl;
                cout<<"(1)Ingresando via teclado"<<endl;
                cout<<"(2)Extraer datos de archivo binario"<<endl;
                cout<<"(3)Atras"<<endl;
                cout<<"\nOpcion:";
                cin>>d;
                if (d==1)
                {
                    cout<<"\nPara primer numero:"<<endl;
                    cout<<"\nIngrese numero complejo(a+bi):\n"<<endl;
                    cin>>a.r;
                    cin>>aux;
                    cin>>a.i;
                    cin>>aux;
                    cout<<"\nPara segundo numero:"<<endl;
                    cout<<"\nIngrese numero complejo(a+bi):\n"<<endl;
                    cin>>c.r;
                    cin>>aux;
                    cin>>c.i;
                    cin>>aux;
                    Division(a.r, a.i, c.r, c.i);
                }
                if (d==2)
                {
                    cout<<"\nNOTA:En el Archivo Binario creado por este programa \ncada numero complejo tiene un puesto especifico asignado\n(en el caso del archivo adjunto hay numeros desde el puesto 1 al 100)."<<endl;
                    cout<<"\nIngrese puesto del primer numero complejo:";
                    cin>>f;
                    Rf = NumeroR(x,f);
                    If = NumeroI(x,f);
                    cout<<"\nIngrese puesto del segundo numero complejo:";
                    cin>>q;
                    Rq = NumeroR(x,q);
                    Iq = NumeroI(x,q);
                    Division(Rf, If, Rq, Iq);
                }
                else
                {
                    break;
                }
                break;

    /// Agendar ///----------------------------------------------------------------------------------///

            case 5:
                cout<<"\nIngrese la cantidad de numeros complejos ha agendar:";
                cin>>t;
                cout<<"\nNOTA:En el Archivo Binario creado por este programa \ncada numero complejo tiene un puesto o lugar especifico asignado\n(en el caso del archivo adjunto hay numeros desde el puesto 1 al 100).\n"<<endl;
                f2.open("Datos.txt", ios::binary | ios::app);
                for (i=1; i<(t+1) ; i++)
                {
                    cout<<"Para numero "<<i<<":"<<endl;
                    cout<<"Ingrese el puesto del numero:";
                    cin>>x.puesto;
                    cout<<"Ingrese la parte real:";
                    cin>>x.r;
                    cout<<"Ingrese la parte imaginaria:";
                    cin>>x.i;
                    f2.write((char *)(&x),sizeof(complejo));
                }
                f2.close();
                break;

    /// Mostrar Archivo Binario ///----------------------------------------------------------------------///

            case 6:
                mostrar(x);
                break;

    /// Ver Opciones Nuevamente ///----------------------------------------------------------------------///

            case 8:
                cout<<"Tareas:"<<endl;
                cout<<"(1)Sumar."<<endl;
                cout<<"(2)Restar."<<endl;
                cout<<"(3)Multiplicar."<<endl;
                cout<<"(4)Division."<<endl;
                cout<<"(5)Agendar numeros en archivo binario."<<endl;
                cout<<"(6)Ver numeros de archivo binario."<<endl;
                cout<<"(7)Salir"<<endl;
                break;

/// Salir ///----------------------------------------------------------------------------------------///

            default:
                h=0;
                break;
        }
    }
    return 0;
}

/// Funciones ///-------------------------------------------------------------------------------------///

/// Operaciones ///-----------------------------------------------------------------------------------///

///Funcion 1///

void Suma (float ar,float ai,float cr,float ci)
{
    cout<<"\nLa suma de ("<<ar<<"+"<<ai<<"i)"<<" + "<<"("<<cr<<"+"<<ci<<"i) es igual a: ";
    cout<<"("<<(ar+cr)<<"+"<<(ai+ci)<<"i)\n"<<endl;
}

///Funcion 2///

void Resta (float ar,float ai,float cr,float ci)
{
    cout<<"\nLa resta de ("<<ar<<"+"<<ai<<"i)"<<" - "<<"("<<cr<<"+"<<ci<<"i) es igual a: ";
    cout<<"("<<(ar-cr)<<"+"<<(ai-ci)<<"i)\n"<<endl;
}

///Funcion 3///

void Multiplicacion (float ar,float ai,float cr,float ci)
{
    cout<<"\nLa multiplicacion de ("<<ar<<"+"<<ai<<"i)"<<" x "<<"("<<cr<<"+"<<ci<<"i) es igual a: ";
    cout<<"("<<((ar*cr)- (ai*ci))<<"+"<<((ar*ci)- (ai*cr))<<"i)\n"<<endl;
}

///Funcion 4///

void Division (float ar,float ai,float cr,float ci)
{
    cout<<"\nLa division de:\n\n ("<<ar<<"+"<<ai<<"i)"<<"\n------------\n"<<" ("<<cr<<"+"<<ci<<"i) \n\nEs igual a: ";
    cout<<"("<<((ar*cr)+(ai*ci))/((cr*cr)+(ci*ci))<<"+"<<((cr*ai)- (ci*ar))/((cr*cr)+(ci*ci))<<"i)\n"<<endl;
}

///Funciones con Archivos Binarios ///-------------------------------------------------------------------------///

///Funcion 5///---/// Retorna el valor de la parte real de un número complejo en el Archivo Binario ///

int NumeroR(complejo x , int f)
{   float Rx;
    ifstream f1;
    f1.open("Datos.txt", ios::binary);
    if (f1.fail())
    {
        cout<<"\n\n   - Archivo no encontrado -";
    }
    else
    {
        f1.read((char *)(&x),sizeof(complejo));
        while (!f1.eof())
        {
            if (x.puesto == f)
            {
                Rx = x.r;
            }
            f1.read((char *)(&x),sizeof(complejo));
        }
    }
    f1.close();
    return Rx;
}

///Funcion 6///---/// Retorna el valor de la parte imaginaria de un número complejo en el Archivo Binario ///

int NumeroI(complejo x , int f)
{   float Ix;
    ifstream f1;
    f1.open("Datos.txt", ios::binary);
    if (f1.fail())
    {
        cout<<"\n\n   El Archivo Datos.txt no se encuentra en la misma \n   carpeta que el programa.\n";
    }
    else
    {
        f1.read((char *)(&x),sizeof(complejo));
        while (!f1.eof())
        {
            if (x.puesto == f)
            {
                Ix = x.i;
            }
            f1.read((char *)(&x),sizeof(complejo));
        }
    }
    f1.close();
    return Ix;
}


///Funcion 7///----// Lee el archivo binario //

void mostrar(complejo x)
{   ifstream f1;
    int g;
    cout<<"Ver los numeros..."<<endl;
    cout<<"(Ingrese 1) Del 1 al 49."<<endl;
    cout<<"(Ingrese 2) Del 50 en adelante."<<endl;
    cout<<"(Ingrese 3) Atras."<<endl;
    cout<<"Opcion:";
    cin>>g;
    switch (g)
    {

/// Para Puestos: 1 - 49 ///---------------------------------------------------------///

        case 1:

            f1.open("Datos.txt", ios::binary);
            if (f1.fail())
            {
                cout<<"\n\n    Archivo no encontrado\n";
            }
            else
            {
                f1.read((char *)(&x),sizeof(complejo));
                while (!f1.eof())
                {
                    EscribirDatos1(x);
                    f1.read((char *)(&x),sizeof(complejo));
                }
            }
            f1.close();
            break;

/// Para Puestos: 50 - 100(o más) ///---------------------------------------------------------///

        case 2:

            f1.open("Datos.txt", ios::binary);
            if (f1.fail())
            {
                cout<<"\n\n     Archivo no encontrado\n";
            }
            else
            {
                f1.read((char *)(&x),sizeof(complejo));
                while (!f1.eof())
                {
                    EscribirDatos2(x);
                    f1.read((char *)(&x),sizeof(complejo));
                }
            }
            f1.close();
            break;
    }
}

/// Funcion 8///----// Muestra en Pantalla los números complejos del  archivo binario (solo del 1 al 49) //

void EscribirDatos1(complejo p)
{
    if (p.puesto <= 49)
    {
        cout<<"\nNumero:"<<p.puesto<<endl;
        cout<<"("<<p.r<<"+"<<p.i<<"i)"<<endl;
        cout<<"--------------------------------//"<<endl;
    }
}

/// Funcion 9 ///----// Muestra en Pantalla los números complejos del  archivo binario (solo del 50 en adelante) //

void EscribirDatos2(complejo p)
{   if (p.puesto >= 50)
    {
        cout<<"\nNumero:"<<p.puesto<<endl;
        cout<<"("<<p.r<<"+"<<p.i<<"i)"<<endl;
        cout<<"--------------------------------//"<<endl;
    }
}
