#include <iostream>
#include <stdlib.h>
using namespace std;
int main()



{
setlocale(LC_ALL,"portuguese");



    int canal, opcao;
    
	do
	{
	cout<<"canais abertos 1,2,3,4:"<<endl;
	cin>>canal;
	
	switch (canal)
	{
		case 1:
			cout<<"TV Faculdade Anhanguera Betim"<<endl;
			break;
		case 2:
			cout<<"TV Rede Brasil"<<endl;
			break;
		case 3:
			cout<<"TV Rede Betim"<<endl;
			break;
        case 4: 
        	cout<<"TV ALP 2023"<<endl;
        	break;
        default: 
            cout<<"canal não existente"<<endl;
	}    
            cout<<"1 - continuar..."<<endl;
            cout<<"2 - sair..."<<endl;
            cin>>opcao;
            
	        system("cls"); 
		
	} 	while(opcao != 2);
	  
	
	
	     system ("pause"); 
         return 0;	
}