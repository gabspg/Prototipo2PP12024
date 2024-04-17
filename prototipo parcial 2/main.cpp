//Incluimos librerias
#include <iostream>
#include <usuario.h>
#include<menuG.h>
using namespace std;

int main()
{
    //Aquí se ven las variables de la contraseña y usuario
    string user,contrasena;

    usuario ingreso(user,contrasena);


     string id, nombre, precio, cantidad;
        menuG catalogos(id, nombre, precio, cantidad);

    //Creacion de bool
    bool UsuarioCorrecto=ingreso.VerificarUsuario();


    if(UsuarioCorrecto)
    {
        int opcion;
        char  x;
        do
        {
        	system("cls");

     cout <<"\t\t\t **********************************"<<endl;
    cout <<"\t\t\t *          MENU PRINCIPAL        *"<<endl;
    cout <<"\t\t\t * Nombre: Gabriela Pinto Garcia  *"<<endl;
    cout <<"\t\t\t * Carne: 9959 23 1087            *"<<endl;
    cout <<"\t\t\t **********************************"<<endl;
	cout<<"\t\t\t Opcion 1. Menu de Usurios"<<endl;
	cout<<"\t\t\t Opcion 2. Menu de Catalogos"<<endl;
	cout<<"\t\t\t Opcion 3. Salir"<<endl;

	cout << " ";
	cout << " ";
	cout<<"\t\t\t******************************"<<endl;
	cout<<"\t\t\t*     Elegir una opcion      *"<<endl;
	cout<<"\t\t\t*******************************"<<endl;
	cout<<"Ingresa tu Opcion: ";
    cin>>opcion;


    switch(opcion){
    case 1:
        ingreso.MenuUser();//menu de usuarios
        break;
    case 2:
        catalogos.menuPrincipal();//submenu del catalogos
        break;
    case 3:
        exit(0);
	default:
		cout<<"\n\t\t\t -OPCION INVALIDA- ";
        break;}
        }while(opcion!= 3);

    }
    return 0;
}
