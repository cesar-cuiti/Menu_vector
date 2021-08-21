#include<iostream>
#include<cstdlib>

using namespace std;

void cargar(int vec[], int tam);
void ejercicio1(int vec[], int tam);
void ej2maximovec(int vec[], int tam);
void pocicionmin(int vec[], int tam);
void pocicionMax(int vec[], int tam);
void comprobar(int vec[], int tam, int num);
void posicion(int vec[], int tam, int num);
void repeticion(int vec[], int tam, int num);

int main(){ int vec[10];

            int opc, num;

         while(true){
                system("color 37");
            cout<<"********************************"<<endl<<endl;
            cout<<" 1 MINIMO DEL VECTOR "<<endl;
            cout<<" 2 MAXIMO DEL VECTOR "<<endl;
            cout<<" 3 POSICION DEL MINIMO "<<endl;
            cout<<" 4 POSICION DEL MAXIMO "<<endl;
            cout<<" 5 COMPROBAR SI EXISTE EL NUMERO INGRESADO "<<endl;
            cout<<" 6 DEVUELVE POSICION SI EXISTE EL NUMERO "<<endl;
            cout<<" 7 CANTIDAD DE VECES QUE SE REPITE "<<endl;
            cout<<" 0 SALIR "<<endl<<endl;
            cout<<"********************************"<<endl<<endl;
            cout<<" QUE EJERCICIO QUERES VER? ";
            cin>>opc;
            system("cls");
            switch(opc){
        case 1: cargar(vec,5);
                ejercicio1(vec,5);
                system("pause");
                system("cls");
            break;
        case 2: cargar(vec,5);
                ej2maximovec(vec,5);
                system("pause");
                system("cls");
            break;
        case 3: cargar(vec,5);
                pocicionmin(vec,5);
                system("pause");
                system("cls");
            break;
        case 4: cargar(vec,5);
                pocicionMax(vec,5);
                system("pause");
                system("cls");
            break;
        case 5: cargar(vec,10);
                cout<<" INGRESE EL NUMERO A VERIFICAR: ";
                cin>>num;
                comprobar(vec,10,num);
                system("pause");
                system("cls");
            break;
        case 6: cargar(vec,10);
                cout<<" INGRESE EL NUMERO A VERIFICAR: ";
                cin>>num;
                posicion(vec,10,num);
                system("pause");
                system("cls");
            break;
        case 7: cargar(vec,10);
                cout<<" INGRESE EL NUMERO A VERIFICAR: ";
                cin>>num;
                repeticion(vec,10,num);
                system("pause");
                system("cls");
            break;
        case 0: return 0;
            break;
            }
         }


system ("pause");
return 0;}

void cargar(int vec[], int tam){
 int i, num;
 for(i=0;i<tam;i++){
    cout<<" INGRESAR NUMEROS: ";
    cin>>num;
    vec[i]=num;
   }
}
void ejercicio1(int vec[], int tam){
  int i, posMen=0;
  for(i=1;i<tam;i++){
    if(vec[i]<vec[posMen]){
        posMen=i;
    }
  }
  cout<<" MINIMO DEL VECTOR: "<<vec[posMen]<<endl;
}
void ej2maximovec(int vec[], int tam){
  int i, posMax=0;
  for(i=0;i<tam;i++){
    if(vec[i]>vec[posMax]){
        posMax=i;
    }
  }
  cout<<" EL MAXIMO ES: "<<vec[posMax]<<endl;
}
void pocicionmin(int vec[], int tam){
  int i, posMen=0;
  for(i=1;i<tam;i++){
    if(vec[i]<vec[posMen]){
        posMen=i;
    }
  }
  cout<<" LA POSICION DEL MINIMO ES : "<<posMen+1<<endl;
}
void pocicionMax(int vec[], int tam){
  int i, posMax=0;
  for(i=0;i<tam;i++){
    if(vec[i]>vec[posMax]){
        posMax=i;
    }
  }
  cout<<" LA POSICION DEL MAXIMO ES: "<<posMax+1<<endl;
}
void comprobar(int vec[], int tam, int num){
  int i, compr=false;
  for(i=0;i<tam;i++){
   if(vec[i]==num){
    compr=true;
     }
  }
if(compr==false){cout<<" FALSO "<<endl;}
else{cout<<" VERDADERO "<<endl;}
}
void posicion(int vec[], int tam, int num){
  int i, compr=false, pos;
  for(i=0;i<tam;i++){
   if(vec[i]==num){
    compr=true;
    pos=i;
     }
  }
if(compr==false){cout<<" -1 "<<endl;}
else{cout<<" LA POSICION DE "<<num<<" ES "<<pos+1<<endl;}
}
void repeticion(int vec[], int tam, int num){
  int i, repe=0;
  for(i=0;i<tam;i++){
   if(vec[i]==num){
    repe++;
     }
  } cout<<" EL NUMERO "<<num<<" SE REPITE "<<repe<<" VECES "<<endl;
}
