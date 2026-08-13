#include <iostream>
#include <vector>
#include <cctype>

using namespace std;

// Limpa a tela no terminal
void limparTela() {
    cout << "\033[2J\033[H";
}

// Desenha o tabuleiro
void desenharTabuleiro(const vector<vector<char>>& mat) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << " " << mat[i][j] << " ";
            if (j != 2) cout << "|";
        }
        cout << endl;
        if (i != 2) cout << "-----------" << endl;
    }
}

// Verifica se há um vencedor
char verificarVencedor(const vector<vector<char>>& mat) {
    // Linhas e Colunas
    for (int i = 0; i < 3; i++) {
        if (mat[i][0] == mat[i][1] && mat[i][1] == mat[i][2]) return mat[i][0];
        if (mat[0][i] == mat[1][i] && mat[1][i] == mat[2][i]) return mat[0][i];
    }
    // Diagonais
    if (mat[0][0] == mat[1][1] && mat[1][1] == mat[2][2]) return mat[0][0];
    if (mat[0][2] == mat[1][1] && mat[1][1] == mat[2][0]) return mat[0][2];

    return ' '; // Nenhum vencedor ainda
}

// Pergunta se deseja reiniciar
bool desejaReiniciar() {
    char resp;
    cout << "\nDeseja reiniciar o jogo? (S/N): ";
    while (cin >> resp) {
        resp = toupper(resp);
        if (resp == 'S') return true;
        if (resp == 'N') return false;
        cout << "Resposta inválida! Digite 'S' para Sim ou 'N' para Não: ";
    }
    return false;
}

int main() {
    bool jogarNovamente = true;

    while (jogarNovamente) {
        vector<vector<char>> mat = {
            {'1', '2', '3'},
            {'4', '5', '6'},
            {'7', '8', '9'}
        };
        
        vector<bool> ocupado(10, false);
        int jogadas = 0;
        char vencedor = ' ';

        while (jogadas < 9 && vencedor == ' ') {
            limparTela();
            desenharTabuleiro(mat);

            int jogadorAtual = (jogadas % 2 == 0) ? 1 : 2;
            char simbolo = (jogadorAtual == 1) ? 'X' : 'O';

            cout << "\nJogador " << jogadorAtual << " (" << simbolo << "), escolha uma posição (1-9): ";
            int pos;
            
            // Validação de entrada sem brechas
            while (!(cin >> pos) || pos < 1 || pos > 9 || ocupado[pos]) {
                cin.clear(); // Limpa erros do cin (caso o usuário digite letras)
                cin.ignore(10000, '\n'); // Descarta o buffer
                cout << "Entrada inválida ou posição ocupada! Escolha novamente (1-9): ";
            }

            // Marca a posição
            ocupado[pos] = true;
            int lin = (pos - 1) / 3;
            int col = (pos - 1) % 3;
            mat[lin][col] = simbolo;

            jogadas++;
            vencedor = verificarVencedor(mat);
        }

        // Fim da partida
        limparTela();
        desenharTabuleiro(mat);

        if (vencedor == 'X') {
            cout << "\nParabéns! Jogador 1 (X) venceu!" << endl;
        } else if (vencedor == 'O') {
            cout << "\nParabéns! Jogador 2 (O) venceu!" << endl;
        } else {
            cout << "\nEmpate! Nenhum jogador venceu." << endl;
        }

        jogarNovamente = desejaReiniciar();
    }

    cout << "\nObrigado por jogar!" << endl;
    return 0;
}