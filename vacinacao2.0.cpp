#include <iostream>
#include <unistd.h>

using namespace std;


int main(){
    // VARIÁVEIS DE CONTROLE;

    int y=0,e=0,n=2,m=4,c=2,k=0,p=1,g=0;
    char opc='s';
    char opc_cadastros;
    char press_enter;
    char opc_procurar;
    int procurar_cartao;

    // VARIÁVEIS DE COLETA DE DADOS;

    string nome[7920];
    int cartao_social[7920];
    int area_atuacao[7920];
    int idade[7920];
    string mes_agendado[7920];

    // VARIÁVEIS DE TEXTO;

    string areas[n]={" SAUDE", " OUTRAS AREAS"};
    string mensagem[m]={"S ou N","E ai vacilao?","Erra mais uma vez seu otario"};
    string mes_escolhido[3]={"Marco", "Abril", "Maio"};

    // PROGRAMA;
    while(opc == 's' or opc == 'S'){

        // ENTRADA DO PROGRAMA TELA DE INICIO;

            inicio:

            cout << "X----  Pressione 'S' e de 'ENTER' para iniciar o aplicativo  ----X" << endl;
            cout << "X----  Pressione 'X' e de 'ENTER' para fechar o aplicativo  ----X" << endl;
            cin >> opc;

            if(opc == 'x' or opc == 'X'){
                break;
            }


        while(opc == 's' or opc == 'S'){
                c=3;
                k=0;
                y=0;

            // LIMPAR TELA;
                system("cls");

            // ENRADA DOS DADOS DO PACIENTE;

                cout << "Cadastro - " << p << endl;
                cout << "Digite seu primeiro nome: ";
                cin >> nome[e];
                cout << "-------------------" << endl;
                cout << "Digite seu cartao social: ";
                cin >> cartao_social[e];

            // LIMPAR TELA;
                system("cls");

                cout << "Cadastro - " << p << endl;
                cout << "Qual sua area de atuacao?" << endl << endl;
                cout << "-------------------" << endl;
                cout << "Opecoes" << endl;
                for(y; y < n; y++){
                cout << "[" << y+1 << "]" << areas[y] << endl;
                }
                cout << "-------------------" << endl;
                cout << "Digite: ";
                cin >> area_atuacao[e];
                cout << "-------------------" << endl;
                cout << "Digite sua idade: ";
                cin >> idade[e];

            // LIMPAR TELA;
                system("cls");

            // CONDICOES E OPCOES DE AGENDAMENTO DE ACORDO COM OS DADOS DO USUARIO;

                if(area_atuacao[e] == 1){
                    mes_agendado[e]=mes_escolhido[0];
                }
                else if(area_atuacao[e] == 2 and idade[e] >= 60){
                    mes_agendado[e]=mes_escolhido[1];
                }
                else if(area_atuacao[e] == 2 and idade[e] < 60){
                    mes_agendado[e]=mes_escolhido[2];
                }

            // FUNCAO PARA IMPRIMIR O BILHETE;

                for(int l=0; l<3 ; l++){
                    cout << "Imprimindo";
                    sleep(0.8);
                    system("cls");
                    cout << "Imprimindo.";
                    sleep(0.8);
                    system("cls");
                    cout << "Imprimindo..";
                    sleep(0.8);
                    system("cls");
                    cout << "Imprimindo...";
                    sleep(0.8);
                    system("cls");
                }

            // IMPRESSAO DO TICKET DO PACIENTE;

                cout << "Entregue este ticket ao paciente!" << endl << endl;
                cout << "-----------------------------X--------------------------" << endl;
                cout << "Portador do Cartao cidadao: " << cartao_social[e] << ", senhor - " << nome[e] << endl;
                cout << "Sua vacinacao contra a COVID-19 foi agendada para: " << mes_agendado[e] << endl;
                cout << "-----------------------------X--------------------------" << endl;
                sleep(5);
                system("cls");

            // SISTEMA PARA DEFINIR A CONTINUAÇÃO DO PROGRAMA E VERIFICAR UMA OPCAO VALIDA DO USUARIO;

                cout << "Deseja adicionar um novo agendamento[S/N]?: ";
                cin >> opc;


            // LIMPAR TELA;
                system("cls");

                while(opc != 's' and opc != 'S' and opc != 'n' and opc != 'N'){
                    cout << mensagem[k] << endl;
                    cout << "Digite uma opcao valida[S/N]!: ";
                    cin >> opc;
                    k+=1;
                    system("cls");
                    if(c == 0){
                        cout << "Fechar esse programa para voce ficar esperto!" << endl;
                        opc='n';
                    }
                    c--;
                }

                if(opc == 'n' or opc == 'N'){
                        break;
                }

            // INCREMENTO DA VIARIAVEL PARA O ARMAZENAMENTO DE UM NOVO CADASTRO NO VETOR;
                else if(opc == 's' or opc == 'S'){
                    e+=1;
                    p+=1;
                }
            }
        //AVISO PARA ENTRAR NO HISTORICO SOMENTE QUANDO ADICIONAR UM NOVO CADASTRO(EVITAR UM INCREMENTO AUTOMATICO DAS VARIAVEIS 'E' E 'P';

            cout << "-----------------------------X----------------------------------------X-----------------------------" << endl;
            cout << "SO ENTRE NA LISTA QUANDO CADASTRAR UM NOVO PACIENTE!! Caso tenha feito este procedimento pode entrar" << endl;
            cout << "-----------------------------X----------------------------------------X-----------------------------" << endl;
            cout << "Deseja ver os Cadastros/Agendados?: ";
            cin >> opc_cadastros;

        // LIMPAR TELA;
            system("cls");

        // SISTEMA PARA DEFINIR A CONTINUAÇÃO DO PROGRAMA E VERIFICAR UMA OPCAO VALIDA DO USUARIO;

            while(opc_cadastros != 's' and opc_cadastros != 'S' and opc_cadastros != 'n' and opc_cadastros != 'N'){
                cout << "Digite uma opcao valida[S/N]!: ";
                cin >> opc_cadastros;
                system("cls");
            }

        // MOSTRAR HISTORICO DE CADASTROS OU VOLTAR AO INICIO DO PROGRAMA;

                if(opc_cadastros == 's' or opc_cadastros == 'S'){

                    cout << endl;
                    for(int q=0; q<=e; q++){
                        cout << "-----------------------------X--------------------------" << endl;
                        cout << "Portador do Cartao cidadao: " << cartao_social[q] << ", senhor - " << nome[q] << endl;
                        cout << "Sua vacinacao contra a COVID-19 foi agendada para: " << mes_agendado[q] << endl;
                        cout << "-----------------------------X--------------------------" << endl << endl;
                }

                cout << "Pressione qualquer tecla e der 'enter' para sair da lista!: ";
                cin >> press_enter;
                system("cls");
                e+=1;
                p+=1;

                goto inicio;

                    }

                }


    cout << "FIM";

    return 0;

}


