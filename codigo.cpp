#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    int fila, columna, contador = 1, max = 9;
    bool filasV, columnasV, movimientoV;
    char jugador = 'X', ganador = ' ';
    char tablero[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
    cout << "\t\t 3 En raya \t\t\n";
    while (ganador == ' ') {
        movimientoV = false;
        filasV = false;
        columnasV = false;

        cout << "     1   2   3\n"; 
        cout << "   -------------\n";
        cout << " 1"
            << " | " << tablero[0][0] << " | " << tablero[0][1] << " | "
            << tablero[0][2] << " | " << endl;
        cout << "   -------------\n";

        cout << " 2"
            << " | " << tablero[1][0] << " | " << tablero[1][1] << " | "
            << tablero[1][2] << " | " << endl;
        cout << "   -------------\n";

        cout << " 3"
            << " | " << tablero[2][0] << " | " << tablero[2][1] << " | "
            << tablero[2][2] << " | " << endl;
        cout << "   -------------\n";

        cout << "Jugador ";
        if(jugador == 'X') {
            cout << 'X';
        } else {
            cout << 'O';
        }

        cout << " turno\n";
        filasV = false;

        while(!movimientoV) {
            filasV = false;
            while (!filasV) {
                cout << "Fila: ";
                cin >> fila;
                if(fila <= 3 && fila > 0) {
                    filasV = true;
                } else {
                    cout << "\nFila invalida\n";
                }
            }

            columnasV = false;
            while(!columnasV) {
                cout << "Columna: ";
                cin >> columna;
                if(columna <= 3 && columna > 0) {
                    columnasV = true;
                } else {
                    cout << "\nColumna invalida\n";
                }
            }

            if(tablero[fila - 1][columna - 1] == ' ') {
                tablero[fila - 1][columna - 1] = jugador;
                movimientoV = true;
                if(jugador == 'X') {
                    jugador = 'O';
                } else {
                    jugador = 'X';
                }
            } else {
                cout << "El espacio esta ocupado\nSelecciona otro espacio:\n\n";
                cout << "     1   2   3\n"; 
                cout << "   -------------\n";
                cout << " 1"
                    << " | " << tablero[0][0] << " | " << tablero[0][1] << " | "
                    << tablero[0][2] << " | " << endl;
                cout << "   -------------\n";

                cout << " 2"
                    << " | " << tablero[1][0] << " | " << tablero[1][1] << " | "
                    << tablero[1][2] << " | " << endl;
                cout << "   -------------\n";

                cout << " 3"
                    << " | " << tablero[2][0] << " | " << tablero[2][1] << " | "
                    << tablero[2][2] << " | " << endl;
                cout << "   -------------\n";
            }
        }

        cout << endl;

        for(int i = 0; i < 3; i++) {
            if(tablero[i][0] == tablero[i][1] && tablero[i][0] == tablero[i][2]) {
                ganador = tablero[i][0];
            }
        }

        for(int i = 0; i < 3; i++) {
            if(tablero[0][i] == tablero[1][i] && tablero[0][i] == tablero[2][i]) {
                ganador = tablero[0][i];
            }
        }
        
        if(tablero[0][0] == tablero[1][1] && tablero[1][1] == tablero[2][2]) {
            ganador = tablero[0][0];
        }

        if(tablero[0][2] == tablero[1][1] && tablero[1][1] == tablero[2][0]) {
            ganador = tablero[0][2];
        }



        if(ganador == 'X' || ganador == 'O') {
                cout << "     1   2   3\n"; 
                cout << "   -------------\n";
                cout << " 1"
                    << " | " << tablero[0][0] << " | " << tablero[0][1] << " | "
                    << tablero[0][2] << " | " << endl;
                cout << "   -------------\n";

                cout << " 2"
                    << " | " << tablero[1][0] << " | " << tablero[1][1] << " | "
                    << tablero[1][2] << " | " << endl;
                cout << "   -------------\n";

                cout << " 3"
                    << " | " << tablero[2][0] << " | " << tablero[2][1] << " | "
                    << tablero[2][2] << " | " << endl;
                cout << "   -------------\n";

                cout << "Felicidades Jugador ";
                if(ganador == 'X') {
                    cout << 'X';
                } else {
                    cout << 'O';
                }
                cout << " es el ganador!\n";
                break;
        } 
        if(contador == max) {
                cout << "     1   2   3\n"; 
                cout << "   -------------\n";
                cout << " 1"
                    << " | " << tablero[0][0] << " | " << tablero[0][1] << " | "
                    << tablero[0][2] << " | " << endl;
                cout << "   -------------\n";

                cout << " 2"
                    << " | " << tablero[1][0] << " | " << tablero[1][1] << " | "
                    << tablero[1][2] << " | " << endl;
                cout << "   -------------\n";

                cout << " 3"
                    << " | " << tablero[2][0] << " | " << tablero[2][1] << " | "
                    << tablero[2][2] << " | " << endl;
                cout << "   -------------\n";
                cout << "Es un empate!\n";
                break;
        }
        contador++;
    }
    system("pause");
    return 0;
}