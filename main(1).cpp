#include <iostream>
#include <usuario.h>
#include<menuG.h>
using namespace std;

int main()
{
    //variables de user y contraseñan
    string user,contrasena;
    //llmamos al objeto e ingresamos los parametros
    usuario ingreso(user,contrasena);


     string id, nombre, precio, cantidad;
        menuG catalogos(id, nombre, precio, cantidad);

    //creamos un bool  que verifique y despliegue el metodo verificarUsuario
    bool UsuarioCorrecto=ingreso.VerificarUsuario();


    //luego de ingresar con usuario y contraseña se nos desplega otro menu
    if(UsuarioCorrecto)
    {
        int opcion;
        char  x;
        do
        {
        	system("cls");

    cout <<"\t\t\t--------------------------------------------"<<endl;
    cout <<"\t\t\t |       BIENVENIDO AL MENU PRINCIPAL      |"<<endl;
    cout <<"\t\t\t |Nombre:Gabriela Pinto Garcia             |"<<endl;
    cout <<"\t\t\t |Carne: 9959 23 1087                      |"<<endl;
    cout <<"\t\t\t--------------------------------------------"<<endl;
    cout << " ";
	cout<<"\t\t\t 1. Menu de Usurios"<<endl;
	cout<<"\t\t\t 2. Menu de Catalogos"<<endl;
	cout<<"\t\t\t 3. Salida"<<endl;

	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\tEscoger opcion:"<<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"Ingresa tu Opcion: ";
    cin>>opcion;
    switch(opcion){
    case 1:
        ingreso.MenuUser();//ingresa al menu de usuarios
        break;
    case 2:
        catalogos.menuPrincipal();//ingresa el submenu del catalogos
        break;
    case 3:
        exit(0);
	default:
		cout<<"\n\t\t\t OPCION INVALIDA";
        break;}
        }while(opcion!= 3);

    }
    return 0;
}
