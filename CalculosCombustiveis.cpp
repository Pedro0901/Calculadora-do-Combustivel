/* PROGRAMA DE CÁLCULO DE COMBUSTIVEIS */

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

using namespace std;

//Função principal do programa
int main(){
	
	//Permite usar acentos
	setlocale(LC_ALL, "");
	
	//Definindo variaveis de calculo do consumo do combustivel
	int distancia, qtCombustivel;										//Variaveis de distancia e quantidade de combustivel
	int Kml;															//Variavel do resultado (Kml significa Km/l)
	
	//Definindo variaveis do cálculo de Etanol ou Gasolina
	float precoEtanol, precoGasolina;									//Variaveis para os preços dos combustiveis
	float EouG;															//Variavel do resultado (EouG significa Etanol ou Gasolina)
	
	//Definindo variaveis do cálculo do gasto em uma viagem
	float precoCombustivel;												//Variavel para preço do combustivel
	int Ql;																//Outra variavel para o Km/L
	float resultado1;													//Variavel para guardar um primeiro resultado
	int distanciaViagem;												//Variavel para distancia da viagem
	float dinheiroGasto;												//Variavel para o resultado do dinheiro gasto na viagem
	
	//Definindo variaveis auxiliares
	int opcao;
	
	//INICIO DO PROGRAMA
	//Dá as boas vindas aos usuários
	cout << "========== SEJA BEM-VINDO (A) ==========\n";
	
	//Lista de opções
	cout << "\n---------- LISTA DE OPÇÕES -------------";
	cout << "\n1 - Cálculo do consumo de combustível (km/l).";
	cout << "\n2 - Cálculo de qual vale mais a pena: Etanol ou Gasolina.";
	cout << "\n3 - Cálculo que mostra quanto o usuário gastará em uma viagem.";
	cout << "\n4 - Faz o cálculo de todas as opções acima.";
	cout << "\n0 - SAIR DO PROGRAMA.";
	cout << "\n----------------------------------------";
	
	//Usuário escolhe uma opção
	cout << "\nESCOLHA UMA DAS OPÇÕES: ";
	cin >> opcao;
	
	//Limpar a tela
	system("CLS");
	
	//Menu para escolha
	switch(opcao){
		
		//Opção para sair do programa
		case 0:
			return 0;
		
		//Opção 1 - Cálculo do consumo de combustível (km/l)
		case 1:
			
			//Mostra a opção escolhida
			cout << "\nOpção 1 escolhida!\n";
			
			//Cabeçalho - DICAS
			cout << "\n---------- DICAS ---------------";
			cout << "\nDica 1: Dirigir somente na ESTRADA ou CIDADE.";
			cout << "\nDica 2: Encher o tanque somente com um combustível.";
			cout << "\nDica 3: Zere seu odômetro após encher o tanque.";
			
			//Coletando dados e cabeçalho
			cout << "\n\n---------- INSERINDO DADOS -----\n";
			cout << "\nInsira a distância percorrida (KM) até o tanque esvaziar: ";
			cin >> distancia;
			cout << "\nInsira a quantidade de combustível (L) que foi necessária para encher o tanque no 2° abastecimento: ";
			cin >> qtCombustivel;
			
			//Faz o cálculo 
			Kml = distancia / qtCombustivel;
			
			//Mostra ao usuário o resultado
			cout << "\nO seu veículo faz: " << Kml << "km/l.";
			
			//Faz um Pause
			cout << "\n";
			system("PAUSE");
			
			//Faz a quebra do caso
			break;
		
		//Opção 2 - Cálculo de qual vale mais a pena: Etanol ou Gasolina.
		case 2:
			
			//Mostra a opção escolhida
			cout << "\nOpção 2 escolhida!\n";
			
			//Coletando dados e cabeçalho
			cout << "\n\n---------- INSERINDO DADOS -----\n";
			cout << "\nInsira o preço do litro do etanol: ";
			cin >> precoEtanol;
			cout << "\nInsira o preço do litro da gasolina: ";
			cin >> precoGasolina;
			
			//Faz o cálculo 
			EouG = precoEtanol / precoGasolina;
			
			//Condicional e Mostra ao usuário o resultado
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
			
		//Cálculo que mostra quanto o usuário gastará em uma viagem.
		case 3:
			
			//Mostra a opção escolhida
			cout << "\nOpção 3 escolhida!\n";
			
			//Coletando dados e cabeçalho
			cout << "\n\n---------- INSERINDO DADOS -----\n";
			cout << "\nInsira o preço do combustível usado: ";
			cin >> precoCombustivel;
			cout << "\nInsira o Km/L que seu veículo faz: ";
			cin >> Ql;
			cout << "\nInsira a distância dessa viagem: ";
			cin >> distanciaViagem;
			
			//Faz os cálculos
			resultado1 = precoCombustivel / Ql;
			dinheiroGasto = resultado1 * distanciaViagem;
			cout.precision(3);
			
			//Mostra oo usuário o resultado
			cout << "\nO dinheiro gasto em combustível nessa viagem será de: R$ " << dinheiroGasto << "\n";
			
			//Faz um pause
			system("PAUSE");
			
			//Faz a quebra do caso
			break;
		
		case 4:
			
			//Mostra a opção escolhida
			cout << "\nOpção 4 escolhida!\n";
			
			cout << "\nCÁLCULO DE TODAS AS OPÇÕES";
			
			//PARTE DO CÁLCULO DO CONSUMO DE COMBUSTÍVEL
			
			//Diz que cálculo está sendo feito
			cout << "\nCálculo do consumo de combustível (km/l)\n";
			
			//Cabeçalho - DICAS
			cout << "\n---------- DICAS ---------------";
			cout << "\nDica 1: Dirigir somente na ESTRADA ou CIDADE.";
			cout << "\nDica 2: Encher o tanque somente com um combustível.";
			cout << "\nDica 3: Zere seu odômetro após encher o tanque.";
			
			//Coletando dados e cabeçalho
			cout << "\n\n---------- INSERINDO DADOS -----\n";
			cout << "\nInsira a distância percorrida (KM) até o tanque esvaziar: ";
			cin >> distancia;
			cout << "\nInsira a quantidade de combustível (L) que foi necessária para encher o tanque no 2° abastecimento: ";
			cin >> qtCombustivel;
			
			//Faz o cálculo 
			Kml = distancia / qtCombustivel;
			
			//Mostra ao usuário o resultado
			cout << "\nO seu veículo faz: " << Kml << "km/l.";
			
			//SEPARAÇÃO DOS CÁLCULOS
			cout << "\n--------------------------------\n";
			
			//PARTE DO CÁLCULO DE QUAL VALE MAIS A PENA: ETANOL OU GASOLINA
			
			//Diz que cálculo está sendo feito
			cout << "\nCálculo de qual vale mais a pena: Etanol ou Gasolina.";
			
			//Coletando dados e cabeçalho
			cout << "\n\n---------- INSERINDO DADOS -----\n";
			cout << "\nInsira o preço do litro do etanol: ";
			cin >> precoEtanol;
			cout << "\nInsira o preço do litro da gasolina: ";
			cin >> precoGasolina;
			
			//Faz o cálculo 
			EouG = precoEtanol / precoGasolina;
			
			//Condicional e Mostra ao usuário o resultado
			if(EouG <= 0.7){
				cout << "\nRESULTADO: Etanol vale mais a pena!";
			}else{
				cout << "\nRESULTADO: Gasolina vale mais a pena!\n";
			}
			
			//SEPARAÇÃO DOS CÁLCULOS
			cout << "\n--------------------------------\n";
			
			//PARTE DO CÁLCULO QUE MOSTRA QUANTO O USUÁRIO GASTARÁ EM UMA VIAGEM
			
			//Diz que cálculo está sendo feito
			cout << "\nCálculo que mostra quanto o usuário gastará em uma viagem.";
			
			//Coletando dados e cabeçalho
			cout << "\n\n---------- INSERINDO DADOS -----\n";
			cout << "\nInsira o preço do combustível usado: ";
			cin >> precoCombustivel;
			cout << "\nInsira o Km/L que seu veículo faz: ";
			cin >> Ql;
			cout << "\nInsira a distância dessa viagem: ";
			cin >> distanciaViagem;
			
			//Faz os cálculos
			resultado1 = precoCombustivel / Ql;
			dinheiroGasto = resultado1 * distanciaViagem;
			cout.precision(3);
			
			//Mostra oo usuário o resultado
			cout << "\nO dinheiro gasto em combustível nessa viagem será de: R$ " << dinheiroGasto << "\n";
			
			//Faz um pause
			system("PAUSE");
			
			//Faz a quebra do caso
			break;
			
		//Default com mensagens e dicas ao usuário
		default:
			cout << "\nOpção INVÁLIDA! Tente novamente.";
			cout << "\nDica: Tente as opções de 1 a 4, ou 0 para SAIR.";
			
			//Faz a quebra do caso
			break;
	}
	
	//Créditos ao desenvolvedor
	cout << "\n\nDesenvolvido por: Pedro Dantas";
	
	return 0;
}
