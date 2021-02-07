//Code by Gabriel Bellasco, 2021 | Código por Gabriel Bellasco, 2021
// Simple console tictactoe game | Jogo da velha simples feito em C++

//Include
#include <iostream>

#include "Game.h"

//Main function | Função Principal
int main(){

    Start:
    //The program starts here | Inicio do programa 
    std::cout << "<-- Hello! Welcome! Wanna play TicTacToe? (y/n)-->" << std::endl;

    //Get the user answer | Pega a resposta do usuario
    char answ;
    std::cin >> answ;

    //Check the user answer | Checa a resposta
    if(answ == 'Y' || answ == 'y'){

        // If the answer is "y" (Yes) start the game | Se a resposta for "y" (Sim, em ingles) começa o jogo
        Game g = Game();

    }else if (answ == 'N' || answ == 'n'){

        // If the answer is "n" (No) close the program | Se a resposta for "n" (Não, em ingles) fecha o programa
        std::cout << "<-- Ok! Bye! -->" << std::endl;
        system("exit");
    }else{

        // If the answer is invalid restart the program | Se a resposta for invalida reinicia o programa
        std::cout << "ERROR: Invalid Operator (" << answ << ")" << std::endl << std::endl;
        goto Start;
    }
}