#include <iostream>

int main() {
    int opcaoJogo, numeroAleatorio, vidas = 10;
    char parte1,parte2,parte3,parte4,parte5,parte6;
    srand(time(NULL));

    do {
        std::cout << "Escolha uma opção:" << std::endl;
        std::cout << "1 - Jogar" << std::endl;
        std::cout << "2 - Sobre" << std::endl;
        std::cout << "3 - Fim" << std::endl;
        std::cin >> opcaoJogo;

        switch(opcaoJogo) {
            case 1: // JOGAR
                numeroAleatorio = (rand() % 10) + 1;
                std::cout << numeroAleatorio;

            break;
            case 2: // SOBRE

                std::cout << "Equipe de densenvolvimento:" << std::endl;
                std::cout << "Ismael Antonio da Silva Junior:" << std::endl;
                std::cout << "Ismael Antonio da Silva Junior:" << std::endl;
                std::cout << "Ismael Antonio da Silva Junior:" << std::endl;
                std::cout << "Ismael Antonio da Silva Junior:" << std::endl;
            break;
            case 3: // SAIR
                std::cout << "Encerrando o programa..." << std::endl;
            break;
            default:
                std::cout << "Opção inválida. Tente novamente." << std::endl;
        }

    } while (opcaoJogo != 3);  // O programa só sai do loop se a opção for 3 (Fim)

    return 0;
}
