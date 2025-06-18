#include<bits/stdc++.h>
using namespace std;

int main(){

    int m = 0;

    while(m == 0){
        char mat[3][3];
        mat[0][0] = '1';
        mat[0][1] = '2';
        mat[0][2] = '3';
        mat[1][0] = '4';
        mat[1][1] = '5';
        mat[1][2] = '6';
        mat[2][0] = '7';
        mat[2][1] = '8';
        mat[2][2] = '9';
        int aju = 0;
        int vet[10];
        memset(vet, 0, sizeof(vet));
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                cout << " " << mat[i][j] << " ";
                if(j != 2){
                    cout << "|";
                }
            }
            cout << endl;
            if(i != 2){
                cout << "-----------" << endl;
            }
            
        }

        for(int k = 1; k <= 9; k++){
            if(k%2 != 0){
                cout << "Jogador 1 (X), escolha uma posição: ";
                int a;
                while(cin >> a && (a < 1 || a > 9 || vet[a] != 0) ){
                    cout << "Posição inválida ou já ocupada! Escolha outra posição.";
                    cout << "Jogador 1 (X), escolha uma posição: ";
                }
                vet[a]=1;
                if(a == 1){
                    mat[0][0] = 'X';
                }
                else if(a == 2){
                    mat[0][1] = 'X';
                }
                else if(a == 3){
                    mat[0][2] = 'X';
                }
                else if(a == 4){
                    mat[1][0] = 'X';
                }
                else if(a == 5){
                    mat[1][1] = 'X';
                }
                else if(a == 6){
                    mat[1][2] = 'X';
                }
                else if(a == 7){
                    mat[2][0] = 'X';
                }
                else if(a == 8){
                    mat[2][1] = 'X';
                }
                else{
                    mat[2][2] = 'X';
                }
            }
            else{
                cout << "Jogador 2 (O), escolha uma posição: ";
                int a;
                while(cin >> a && (a < 1 || a > 9 || vet[a] != 0) ){
                    cout << "Posição inválida ou já ocupada! Escolha outra posição.";
                    cout << "Jogador 2 (O), escolha uma posição: ";
                }
                vet[a]=1;
                if(a==1){
                    mat[0][0] = 'O';
                }
                else if(a==2){
                    mat[0][1] = 'O';
                }
                else if(a==3){
                    mat[0][2] = 'O';
                }
                else if(a==4){
                    mat[1][0] = 'O';
                }
                else if(a==5){
                    mat[1][1] = 'O';
                }
                else if(a==6){
                    mat[1][2] = 'O';
                }
                else if(a==7){
                    mat[2][0] = 'O';
                }
                else if(a==8){
                    mat[2][1] = 'O';
                }
                else{
                    mat[2][2] = 'O';
                }
            }
            for(int i = 0; i < 3; i++){
                for(int j = 0; j < 3; j++){
                    cout << " " << mat[i][j] << " ";
                    if(j != 2){
                        cout << "|";
                    }
                }
                cout << endl;
                if(i != 2){
                    cout << "-----------" << endl;
                }
                
            }
            
            if(mat[0][0] == mat[0][1] && mat[0][0] == mat[0][2]){
                if(mat[0][0] == 'X'){
                    cout << "Parabéns! Jogador 1 venceu!" << endl;
                    cout << "Deseja reiniciar o jogo? (S/N)" << endl;
                    char resp;
                    while(cin >> resp && (toupper(resp) != 'S' && toupper(resp) != 'N')){
                        cout << "Resposta inválida! Deseja reiniciar o jogo? (S/N)" << endl;
                    }
                    if(resp == 'S' || resp == 's'){
                        aju = 1;
                        break;
                    }
                    else{
                        return 0;
                    }
                }
                else{
                    cout << "Parabéns! Jogador 2 venceu!" << endl;
                    cout << "Deseja reiniciar o jogo? (S/N)" << endl;
                    char resp;
                    while(cin >> resp && (toupper(resp) != 'S' && toupper(resp) != 'N')){
                        cout << "Resposta inválida! Deseja reiniciar o jogo? (S/N)" << endl;
                    }
                    if(resp == 'S' || resp == 's'){
                        aju = 1;
                        break;
                    }
                    else{
                        return 0;
                    }
                }
        
            }
            else if(mat[1][0] == mat[1][1] && mat[1][0] == mat[1][2]){
                if(mat[1][0] == 'X'){
                    cout << "Parabéns! Jogador 1 venceu!" << endl;
                    cout << "Deseja reiniciar o jogo? (S/N)" << endl;
                    char resp;
                    while(cin >> resp && (toupper(resp) != 'S' && toupper(resp) != 'N')){
                        cout << "Resposta inválida! Deseja reiniciar o jogo? (S/N)" << endl;
                    }
                    if(resp == 'S' || resp == 's'){
                        aju = 1;
                        break;
                    }
                    else{
                        return 0;
                    }
                }
                else{
                    cout << "Parabéns! Jogador 2 venceu!" << endl;
                    cout << "Deseja reiniciar o jogo? (S/N)" << endl;
                    char resp;
                    while(cin >> resp && (toupper(resp) != 'S' && toupper(resp) != 'N')){
                        cout << "Resposta inválida! Deseja reiniciar o jogo? (S/N)" << endl;
                    }
                    if(resp == 'S' || resp == 's'){
                        aju = 1;
                        break;
                    }
                    else{
                        return 0;
                    }
                }
            }
            else if(mat[2][0] == mat[2][1] && mat[2][0] == mat[2][2]){
                if(mat[2][0] == 'X'){
                    cout << "Parabéns! Jogador 1 venceu!" << endl;
                    cout << "Deseja reiniciar o jogo? (S/N)" << endl;
                    char resp;
                    while(cin >> resp && (toupper(resp) != 'S' && toupper(resp) != 'N')){
                        cout << "Resposta inválida! Deseja reiniciar o jogo? (S/N)" << endl;
                    }
                    if(resp == 'S' || resp == 's'){
                        aju = 1;
                        break;
                    }
                    else{
                        return 0;
                    }
                }
                else{
                    cout << "Parabéns! Jogador 2 venceu!" << endl;
                    cout << "Deseja reiniciar o jogo? (S/N)" << endl;
                    char resp;
                    while(cin >> resp && (toupper(resp) != 'S' && toupper(resp) != 'N')){
                        cout << "Resposta inválida! Deseja reiniciar o jogo? (S/N)" << endl;
                    }
                    if(resp == 'S' || resp == 's'){
                        aju = 1;
                        break;
                    }
                    else{
                        return 0;
                    }
                }
            }
            else if(mat[0][0] == mat[1][0] && mat[2][0] == mat[0][0]){
                if(mat[0][0] == 'X'){
                    cout << "Parabéns! Jogador 1 venceu!" << endl;
                    cout << "Deseja reiniciar o jogo? (S/N)" << endl;
                    char resp;
                    while(cin >> resp && (toupper(resp) != 'S' && toupper(resp) != 'N')){
                        cout << "Resposta inválida! Deseja reiniciar o jogo? (S/N)" << endl;
                    }
                    if(resp == 'S' || resp == 's'){
                        aju = 1;
                        break;
                    }
                    else{
                        return 0;
                    }
                }
                else{
                    cout << "Parabéns! Jogador 2 venceu!" << endl;
                    cout << "Deseja reiniciar o jogo? (S/N)" << endl;
                    char resp;
                    while(cin >> resp && (toupper(resp) != 'S' && toupper(resp) != 'N')){
                        cout << "Resposta inválida! Deseja reiniciar o jogo? (S/N)" << endl;
                    }
                    if(resp == 'S' || resp == 's'){
                        aju = 1;
                        break;
                    }
                    else{
                        return 0;
                    } 
                }
            }  
            else if(mat[0][1] == mat[1][1] && mat[1][1] == mat[2][1]){
                if(mat[0][1] == 'X'){
                    cout << "Parabéns! Jogador 1 venceu!" << endl;
                    cout << "Deseja reiniciar o jogo? (S/N)" << endl;
                    char resp;
                    while(cin >> resp && (toupper(resp) != 'S' && toupper(resp) != 'N')){
                        cout << "Resposta inválida! Deseja reiniciar o jogo? (S/N)" << endl;
                    }
                    if(resp == 'S' || resp == 's'){
                        aju = 1;
                        break;
                    }
                    else{
                        return 0;
                    }
                }
                else{
                    cout << "Parabéns! Jogador 2 venceu!" << endl;
                    cout << "Deseja reiniciar o jogo? (S/N)" << endl;
                    char resp;
                    while(cin >> resp && (toupper(resp) != 'S' && toupper(resp) != 'N')){
                        cout << "Resposta inválida! Deseja reiniciar o jogo? (S/N)" << endl;
                    }
                    if(resp == 'S' || resp == 's'){
                        aju = 1;
                        break;
                    }
                    else{
                        return 0;
                    } 
                }
            } 
            else if(mat[0][2] == mat[1][2] && mat[1][2] == mat[2][2]){
                if(mat[2][1] == 'X'){
                    cout << "Parabéns! Jogador 1 venceu!" << endl;
                    cout << "Deseja reiniciar o jogo? (S/N)" << endl;
                    char resp;
                    while(cin >> resp && (toupper(resp) != 'S' && toupper(resp) != 'N')){
                        cout << "Resposta inválida! Deseja reiniciar o jogo? (S/N)" << endl;
                    }
                    if(resp == 'S' || resp == 's'){
                        aju = 1;
                        break;
                    }
                    else{
                        return 0;
                    }
                }
                else{
                    cout << "Parabéns! Jogador 2 venceu!" << endl;
                    cout << "Deseja reiniciar o jogo? (S/N)" << endl;
                    char resp;
                    while(cin >> resp && (toupper(resp) != 'S' && toupper(resp) != 'N')){
                        cout << "Resposta inválida! Deseja reiniciar o jogo? (S/N)" << endl;
                    }
                    if(resp == 'S' || resp == 's'){
                        aju = 1;
                        break;
                    }
                    else{
                        return 0;
                    } 
                }
            }    
            else if(mat[0][0] == mat[1][1] && mat[1][1] == mat[2][2]){
                if(mat[1][1] == 'X'){
                    cout << "Parabéns! Jogador 1 venceu!" << endl;
                    cout << "Deseja reiniciar o jogo? (S/N)" << endl;
                    char resp;
                    while(cin >> resp && (toupper(resp) != 'S' && toupper(resp) != 'N')){
                        cout << "Resposta inválida! Deseja reiniciar o jogo? (S/N)" << endl;
                    }
                    if(resp == 'S' || resp == 's'){
                        aju = 1;
                        break;
                    }
                    else{
                        return 0;
                    }
                }
                else{
                    cout << "Parabéns! Jogador 2 venceu!" << endl;
                    cout << "Deseja reiniciar o jogo? (S/N)" << endl;
                    char resp;
                    while(cin >> resp && (toupper(resp) != 'S' && toupper(resp) != 'N')){
                        cout << "Resposta inválida! Deseja reiniciar o jogo? (S/N)" << endl;
                    }
                    if(resp == 'S' || resp == 's'){
                        aju = 1;
                        break;
                    }
                    else{
                        return 0;
                    } 
                }
            } 
            else if(mat[0][2] == mat[1][1] && mat[1][1] == mat[2][0]){
                if(mat[2][0] == 'X'){
                    cout << "Parabéns! Jogador 1 venceu!" << endl;
                    cout << "Deseja reiniciar o jogo? (S/N)" << endl;
                    char resp;
                    while(cin >> resp && (toupper(resp) != 'S' && toupper(resp) != 'N')){
                        cout << "Resposta inválida! Deseja reiniciar o jogo? (S/N)" << endl;
                    }
                    if(resp == 'S' || resp == 's'){
                        aju = 1;
                        break;
                    }
                    else{
                        return 0;
                    }
                }
                else{
                    cout << "Parabéns! Jogador 2 venceu!" << endl;
                    cout << "Deseja reiniciar o jogo? (S/N)" << endl;
                    char resp;
                    while(cin >> resp && (toupper(resp) != 'S' && toupper(resp) != 'N')){
                        cout << "Resposta inválida! Deseja reiniciar o jogo? (S/N)" << endl;
                    }
                    if(resp == 'S' || resp == 's'){
                        aju = 1;
                        break;
                    }
                    else{
                        return 0;
                    } 
                }
            }   
        }
        if(aju == 0){
            cout << "Empate! Nenhum jogador venceu." << endl;
            cout << "Deseja reiniciar o jogo? (S/N)" << endl;
            char resp;
            while(cin >> resp && (toupper(resp) != 'S' && toupper(resp) != 'N')){
                cout << "Resposta inválida! Deseja reiniciar o jogo? (S/N)" << endl;
            }
            if(resp == 'S' || resp == 's'){
                continue;
            }
            else{
                return 0;
            }
        }
        
        cout << "\033[2J\033[H";
        
    }
        
}



