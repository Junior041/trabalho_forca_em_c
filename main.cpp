#include <iostream>
#include <locale.h>
#include <time.h>
using namespace std;

    int main() {
        int opcaoJogo, numeroAleatorio, vidas = 10;
        char letra, ch1, ch2, ch3, ch4, ch5, ch6, subch1 = '_', subch2 = '_', subch3 = '_', subch4 = '_', subch5 = '_', subch6 = '_';
        srand(time(NULL));
        setlocale(LC_CTYPE, "PORTUGUESE");


        do {
            cout<<"Escolha uma opção:"<<endl;
            cout<<"1 - Jogar"<<endl;
            cout<<"2 - Sobre"<<endl;
            cout<<"3 - Fim"<<endl;
            cin>>opcaoJogo;

            switch(opcaoJogo) {
                case 1: // JOGAR
                    system("cls");
                    vidas = 10;
                    numeroAleatorio = (rand() % 10) + 1;
                    switch(numeroAleatorio) {
                        case 1:
                            ch1='S', ch2='O', ch3='N', ch4='H', ch5='A', ch6='R';
                            break;
                        case 2:
                            ch1='B', ch2='R', ch3='I', ch4='L', ch5='H', ch6='O';
                            break;
                        case 3:
                            ch1='C', ch2='O', ch3='I', ch4='S', ch5='A', ch6='S';
                            break;
                        case 4:
                            ch1='G', ch2='R', ch3='A', ch4='N', ch5='J', ch6='A';
                            break;
                        case 5:
                            ch1='C', ch2='O', ch3='D', ch4='I', ch5='G', ch6='O';
                            break;
                        case 6:
                            ch1='T', ch2='R', ch3='I', ch4='L', ch5='H', ch6='O';
                            break;
                        case 7:
                            ch1='B', ch2='E', ch3='L', ch4='E', ch5='Z', ch6='A';
                            break;
                        case 8:
                            ch1='C', ch2='O', ch3='R', ch4='R', ch5='E', ch6='R';
                            break;
                        case 9:
                            ch1='A', ch2='N', ch3='I', ch4='M', ch5='A', ch6='L';
                            break;
                        case 10:
                            ch1='V', ch2='E', ch3='N', ch4='C', ch5='E', ch6='R';
                            break;
                    }
                    while(vidas>0 && subch1 != ch1 || vidas>0 && subch2 != ch2 || vidas>0 && subch3 != ch3 || vidas>0 && subch4 != ch4 || vidas>0 && subch5 != ch5 || vidas>0 && subch6 != ch6) {
                        cout<<"Insira uma letra:"<<endl;
                        cin>>letra;
                        if(letra == ch1 && subch1 != ch1 || letra == ch2 && subch2 != ch2 || letra == ch3 && subch3 != ch3 || letra == ch4 && subch4 != ch4 || letra == ch5 && subch5 != ch5 || letra == ch6 && subch6 != ch6) {
                            if(letra == ch1) {
                                subch1 = ch1;
                            }
                            if(letra == ch2) {
                                subch2 = ch2;
                            }
                            if(letra == ch3) {
                                subch3 = ch3;
                            }
                            if(letra == ch4) {
                                subch4 = ch4;
                            }
                            if(letra == ch5) {
                                subch5 = ch5;
                            }
                            if(letra == ch6) {
                                subch6 = ch6;
                            }
                            cout<<subch1<<subch2<<subch3<<subch4<<subch5<<subch6<<endl;
                        } else if(letra != ch1 && letra != ch2 && letra != ch3 && letra != ch4 && letra != ch5 && letra != ch6){
                            vidas--;
                            cout<<"Você errou, "<<vidas<<" tentativas restantes."<<endl;
                        }
                    }
                    system("cls");
                    if(vidas>0) {
                        cout<<"Você Ganhou!"<<endl;
                        cout<<"A palavra era: "<<ch1<<ch2<<ch3<<ch4<<ch5<<ch6<<endl;
                        subch1='_', subch2='_', subch3='_', subch4='_', subch5='_', subch6='_';
                    } else {
                        cout<<"Você Perdeu!"<<endl;
                        cout<<"A palavra era: "<<ch1<<ch2<<ch3<<ch4<<ch5<<ch6<<endl;
                    }
                    system("pause");
                    system("cls");
                break;
                case 2: // SOBRE
                    system("cls");
                    cout<<"Como Jogar:"<<endl;
                    cout<<"- Usar somente letras maiúsculas nas tentativas."<<endl<<endl;
                    cout<<"Equipe de densenvolvimento:"<<endl;
                    cout<<"- Daniel Uesler de Brito"<<endl;
                    cout<<"- Gabriel Rodrigues Leite" <<endl;
                    cout<<"- Ismael Antonio da Silva Junior"<<endl;
                    cout<<"- João Vitor Silveira Freitas"<<endl<<endl;
                    cout<<"Outubro/2024"<<endl<<endl;
                    cout<<"Professor/Disciplina:"<<endl;
                    cout<<"- Rafael Ballottin Martins/Algoritmos e Programação"<<endl;
                    system("pause");
                    system("cls");
                break;
                case 3: // SAIR
                    cout<<"Encerrando o programa..."<<endl;
                break;
                default:
                    cout<<"Opção inválida. Tente novamente."<<endl;
            }

        } while (opcaoJogo != 3);  // O programa só sai do loop se a opção for 3 (Fim)

        return 0;
    }
