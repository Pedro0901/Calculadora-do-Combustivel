/* PROGRAMA DE C�LCULO DE COMBUSTIVEIS */

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

using namespace std;

//Fun��o principal do programa
int main(){
	
	//Permite usar acentos
	setlocale(LC_ALL, "");
	
	//Definindo variaveis de calculo do consumo do combustivel
	int distancia, qtCombustivel;										//Variaveis de distancia e quantidade de combustivel
	int Kml;															//Variavel do resultado (Kml significa Km/l)
	
	//Definindo variaveis do c�lculo de Etanol ou Gasolina
	float precoEtanol, precoGasolina;									//Variaveis para os pre�os dos combustiveis
	float EouG;															//Variavel do resultado (EouG significa Etanol ou Gasolina)
	
	//Definindo variaveis do c�lculo do gasto em uma viagem
	float precoCombustivel;												//Variavel para pre�o do combustivel
	int Ql;																//Outra variavel para o Km/L
	float resultado1;													//Variavel para guardar um primeiro resultado
	int distanciaViagem;												//Variavel para distancia da viagem
	float dinheiroGasto;												//Variavel para o resultado do dinheiro gasto na viagem
	
	//Definindo variaveis auxiliares
	int opcao;
	
	//INICIO DO PROGRAMA
	//D� as boas vindas aos usu�rios
	cout << "========== SEJA BEM-VINDO (A) ==========\n";
	
	//Lista de op��es
	cout << "\n---------- LISTA DE OP��ES -------------";
	cout << "\n1 - C�lculo do consumo de combust�vel (km/l).";
	cout << "\n2 - C�lculo de qual vale mais a pena: Etanol ou Gasolina.";
	cout << "\n3 - C�lculo que mostra quanto o usu�rio gastar� em uma viagem.";
	cout << "\n4 - Faz o c�lculo de todas as op��es acima.";
	cout << "\n0 - SAIR DO PROGRAMA.";
	cout << "\n----------------------------------------";
	
	//Usu�rio escolhe uma op��o
	cout << "\nESCOLHA UMA DAS OP��ES: ";
	cin >> opcao;
	
	//Limpar a tela
	system("CLS");
	
	//Menu para escolha
	switch(opcao){
		
		//Op��o para sair do programa
		case 0:
			return 0;
		
		//Op��o 1 - C�lculo do consumo de combust�vel (km/l)
		case 1:
			
			//Mostra a op��o escolhida
			cout << "\nOp��o 1 escolhida!\n";
			
			//Cabe�alho - DICAS
			cout << "\n---------- DICAS ---------------";
			cout << "\nDica 1: Dirigir somente na ESTRADA ou CIDADE.";
			cout << "\nDica 2: Encher o tanque somente com um combust�vel.";
			cout << "\nDica 3: Zere seu od�metro ap�s encher o tanque.";
			
			//Coletando dados e cabe�alho
			cout << "\n\n---------- INSERINDO DADOS -----\n";
			cout << "\nInsira a dist�ncia percorrida (KM) at� o tanque esvaziar: ";
			cin >> distancia;
			cout << "\nInsira a quantidade de combust�vel (L) que foi necess�ria para encher o tanque no 2� abastecimento: ";
			cin >> qtCombustivel;
			
			//Faz o c�lculo 
			Kml = distancia / qtCombustivel;
			
			//Mostra ao usu�rio o resultado
			cout << "\nO seu ve�culo faz: " << Kml << "km/l.";
			
			//Faz um Pause
			cout << "\n";
			system("PAUSE");
			
			//Faz a quebra do caso
			break;
		
		//Op��o 2 - C�lculo de qual vale mais a pena: Etanol ou Gasolina.
		case 2:
			
			//Mostra a op��o escolhida
			cout << "\nOp��o 2 escolhida!\n";
			
			//Coletando dados e cabe�alho
			cout << "\n\n---------- INSERINDO DADOS -----\n";
			cout << "\nInsira o pre�o do litro do etanol: ";
			cin >> precoEtanol;
			cout << "\nInsira o pre�o do litro da gasolina: ";
			cin >> precoGasolina;
			
			//Faz o c�lculo 
			EouG = precoEtanol / precoGasolina;
			
			//Condicional e Mostra ao usu�rio o resultado
			if(EouG <= 0.7){
				cout << "\nRESULTADO: Etanol vale mais a pena!";
			}else{
				cout << "\nRESULTADO: Gasolina vale mais a pena!";
			}
			
			//Faz um pause
			cout << "\n";
			system("PAUSE");
			
			//Faz a quebra do caso
			break;
			
		//C�lculo que mostra quanto o usu�rio gastar� em uma viagem.
		case 3:
			
			//Mostra a op��o escolhida
			cout << "\nOp��o 3 escolhida!\n";
			
			//Coletando dados e cabe�alho
			cout << "\n\n---------- INSERINDO DADOS -----\n";
			cout << "\nInsira o pre�o do combust�vel usado: ";
			cin >> precoCombustivel;
			cout << "\nInsira o Km/L que seu ve�culo faz: ";
			cin >> Ql;
			cout << "\nInsira a dist�ncia dessa viagem: ";
			cin >> distanciaViagem;
			
			//Faz os c�lculos
			resultado1 = precoCombustivel / Ql;
			dinheiroGasto = resultado1 * distanciaViagem;
			cout.precision(3);
			
			//Mostra oo usu�rio o resultado
			cout << "\nO dinheiro gasto em combust�vel nessa viagem ser� de: R$ " << dinheiroGasto << "\n";
			
			//Faz um pause
			system("PAUSE");
			
			//Faz a quebra do caso
			break;
		
		case 4:
			
			//Mostra a op��o escolhida
			cout << "\nOp��o 4 escolhida!\n";
			
			cout << "\nC�LCULO DE TODAS AS OP��ES";
			
			//PARTE DO C�LCULO DO CONSUMO DE COMBUST�VEL
			
			//Diz que c�lculo est� sendo feito
			cout << "\nC�lculo do consumo de combust�vel (km/l)\n";
			
			//Cabe�alho - DICAS
			cout << "\n---------- DICAS ---------------";
			cout << "\nDica 1: Dirigir somente na ESTRADA ou CIDADE.";
			cout << "\nDica 2: Encher o tanque somente com um combust�vel.";
			cout << "\nDica 3: Zere seu od�metro ap�s encher o tanque.";
			
			//Coletando dados e cabe�alho
			cout << "\n\n---------- INSERINDO DADOS -----\n";
			cout << "\nInsira a dist�ncia percorrida (KM) at� o tanque esvaziar: ";
			cin >> distancia;
			cout << "\nInsira a quantidade de combust�vel (L) que foi necess�ria para encher o tanque no 2� abastecimento: ";
			cin >> qtCombustivel;
			
			//Faz o c�lculo 
			Kml = distancia / qtCombustivel;
			
			//Mostra ao usu�rio o resultado
			cout << "\nO seu ve�culo faz: " << Kml << "km/l.";
			
			//SEPARA��O DOS C�LCULOS
			cout << "\n--------------------------------\n";
			
			//PARTE DO C�LCULO DE QUAL VALE MAIS A PENA: ETANOL OU GASOLINA
			
			//Diz que c�lculo est� sendo feito
			cout << "\nC�lculo de qual vale mais a pena: Etanol ou Gasolina.";
			
			//Coletando dados e cabe�alho
			cout << "\n\n---------- INSERINDO DADOS -----\n";
			cout << "\nInsira o pre�o do litro do etanol: ";
			cin >> precoEtanol;
			cout << "\nInsira o pre�o do litro da gasolina: ";
			cin >> precoGasolina;
			
			//Faz o c�lculo 
			EouG = precoEtanol / precoGasolina;
			
			//Condicional e Mostra ao usu�rio o resultado
			if(EouG <= 0.7){
				cout << "\nRESULTADO: Etanol vale mais a pena!";
			}else{
				cout << "\nRESULTADO: Gasolina vale mais a pena!\n";
			}
			
			//SEPARA��O DOS C�LCULOS
			cout << "\n--------------------------------\n";
			
			//PARTE DO C�LCULO QUE MOSTRA QUANTO O USU�RIO GASTAR� EM UMA VIAGEM
			
			//Diz que c�lculo est� sendo feito
			cout << "\nC�lculo que mostra quanto o usu�rio gastar� em uma viagem.";
			
			//Coletando dados e cabe�alho
			cout << "\n\n---------- INSERINDO DADOS -----\n";
			cout << "\nInsira o pre�o do combust�vel usado: ";
			cin >> precoCombustivel;
			cout << "\nInsira o Km/L que seu ve�culo faz: ";
			cin >> Ql;
			cout << "\nInsira a dist�ncia dessa viagem: ";
			cin >> distanciaViagem;
			
			//Faz os c�lculos
			resultado1 = precoCombustivel / Ql;
			dinheiroGasto = resultado1 * distanciaViagem;
			cout.precision(3);
			
			//Mostra oo usu�rio o resultado
			cout << "\nO dinheiro gasto em combust�vel nessa viagem ser� de: R$ " << dinheiroGasto << "\n";
			
			//Faz um pause
			system("PAUSE");
			
			//Faz a quebra do caso
			break;
			
		//Default com mensagens e dicas ao usu�rio
		default:
			cout << "\nOp��o INV�LIDA! Tente novamente.";
			cout << "\nDica: Tente as op��es de 1 a 4, ou 0 para SAIR.";
			
			//Faz a quebra do caso
			break;
	}
	
	//Cr�ditos ao desenvolvedor
	cout << "\n\nDesenvolvido por: Pedro Dantas";
	
	return 0;
}
