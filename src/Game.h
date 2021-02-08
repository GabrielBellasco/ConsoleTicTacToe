//Code by Gabriel Bellasco, 2021 | Código por Gabriel Bellasco, 2021
// Simple console tictactoe game | Jogo da velha simples feito em C++

//Include
#include <iostream>
#include <windows.h>

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

        //Variable to get the player choose | Variavel que recebe a escolha do jogador
        int pc;

        RenderGame(board, turnI);

        ChooseP:
        std::cout << "Choose a place to play (1 - 9) " << std::endl;
        std::cin >> pc;
        pc = pc - 1;
        if(board[pc] != '-'){
            std::cout << "\n" << "This place is already being used! Choose another." << std::endl;
            goto ChooseP;
        } else {
            board[pc] = (turnI == 0) ? 'O' : 'X';
            RenderGame(board, turnI);
        }

    
        if( board[0] != '-' && board[0] == board[1] && board[0] == board[2]){
            const char* t = (board[0] == 'O') ? "1 (O) Wins!" : "2 (X) Wins!";
            std::cout << "Player " << t << std::endl;
            isgameover = true;
        } else if( board[3] != '-' && board[3] == board[4] && board[3] == board[5]){
            const char* t = (board[3] == 'O') ? "1 (O) Wins!" : "2 (X) Wins!";
            std::cout << "Player " << t << std::endl;
            isgameover = true;
        } else if( board[6] != '-' && board[6] == board[7] && board[6] == board[8]){
            const char* t = (board[6] == 'O') ? "1 (O) Wins!" : "2 (X) Wins!";
            std::cout << "Player " << t << std::endl;
            isgameover = true;
        } else if( board[0] != '-' && board[0] == board[4] && board[0] == board[8]){
            const char* t = (board[0] == 'O') ? "1 (O) Wins!" : "2 (X) Wins!";
            std::cout << "Player " << t << std::endl;
            isgameover = true;
        } else if( board[2] != '-' && board[2] == board[4] && board[2] == board[6]){
            const char* t = (board[2] == 'O') ? "1 (O) Wins!" : "2 (X) Wins!";
            std::cout << "Player " << t << std::endl;
            isgameover = true;
        } else if( board[0] != '-' && board[0] == board[3] && board[0] == board[6]){
            const char* t = (board[0] == 'O') ? "1 (O) Wins!" : "2 (X) Wins!";
            std::cout << "Player " << t << std::endl;
            isgameover = true;
        } else if( board[1] != '-' && board[1] == board[4] && board[1] == board[7]){
            const char* t = (board[1] == 'O') ? "1 (O) Wins!" : "2 (X) Wins!";
            std::cout << "Player " << t << std::endl;
            isgameover = true;
        }else if( board[2] != '-' && board[2] == board[5] && board[2] == board[8]){
            const char* t = (board[2] == 'O') ? "1 (O) Wins!" : "2 (X) Wins!";
            std::cout << "Player " << t << std::endl;
            isgameover = true;
        } else {
            RenderGame(board, turnI);

            turnI= (turnI == 0) ? 1 : 0;
        }

    };
    i:
    std::cout << "<-- Game Ended, wanna play again? (s/n)-->" << std::endl;

    char ans;
    std::cin >> ans;

    if(ans == 'Y' || ans == 'y'){

        Game g = Game();

    }else if (ans == 'N' || ans == 'n'){

        std::cout << "<-- Ok! Bye! -->" << std::endl;
        system("exit");
    }else{

        std::cout << "ERROR: Invalid Operator (" << ans << ")" << std::endl << std::endl;
        goto i;
    }
    
};

//Method to render the game || Método para renderizar o jogo
void Game::RenderGame(char b[9], int t){
    system("cls");
    const char* txt = (t == 0) ? "<-- Player 1 (O) Turn! -->" : "<-- Player 2 (X) Turn! -->";
    std::cout << txt << std::endl << std::endl;
    std::cout << "<|"<< b[0] << " " << b[1] << " " << b[2] << "|>"<< std::endl;
    std::cout << "<|"<< b[3] << " " << b[4] << " " << b[5] << "|>"<< std::endl;
    std::cout << "<|"<< b[6] << " " << b[7] << " " << b[8] << "|>"<< std::endl;

    Sleep(500);
};