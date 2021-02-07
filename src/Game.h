//Code by Gabriel Bellasco, 2021 | Código por Gabriel Bellasco, 2021
// Simple console tictactoe game | Jogo da velha simples feito em C++

//Include
#include <iostream>

//Class Game (the game core) | Classe Game (jogo em inglês) (o núcleo do programa)
class Game {
public:

    Game();

    //Char b = Game Board, Int t = Turn Index | Char b = Tabuleiro, int t = Index do turno
    void RenderGame(char b[9], int t);

private:
    char board[9] = {'-','-','-','-','-','-','-','-','-'};
};

//The class constructor, will start the game | O constructor da classe, faz o jogo começar
Game::Game(){
    for( auto b: board){
        std::cout << b;
    }

    //Index of the turn (0 = O, 1 = X) | Index do turno (0 = O, 1 = X)
    int turnI = 0;

    //Check is is game over | Checa se o jogo acabou
    bool isgameover=false;

    while(!isgameover){
        //Game main loop | Loop principal do jogo
        RenderGame(board, turnI)
    }
    
};

//Method to render the game || Método para renderizar o jogo
void Game::RenderGame(char b[9], int t){
    std::cout << (t == 0) ? "Player 1 (O) Turn!" : "Player 2 (X) Turn!" << std::endl;

};