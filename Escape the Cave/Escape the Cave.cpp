// Escape the Cave.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Your Adventure(Proyecto Integrador).cpp
// Ryan X Velez Negron 11/18/2024


#include <iostream> //Input y output
#include <string>   //Librería para el uso de los strings
#include <cstdlib>  //Para el uso de las funciones de borrar pantalla ( system("CLS"); (es solo para windows) )
#include <chrono>   //Tiempo ingresado la cual esperará para que aparezca la próxima línea. ( sleep_for(chrono::seconds(1)) ) 
#include <thread>   //Necesario para el uso completo de la función utilizada de la librería "chrono" ( this_thread:: )
#include <conio.h>  //Función para que se pueda utilizar "pulsa para continuar" ( int _getch(); )
using namespace std;
void IuBattleFunction(int HP, int ATK, int Pociones) { //Es una función para evitar la redundancia en el código y para que quede más limpio.
    cout << "Que hago?\n";
    cout << "=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+\n";
    cout << "Vida " << HP << "/100  " << "Fuerza " << ATK << "\n";
    cout << "Acciones: " << "atacar" << " " << "bloquear" << " " << "curar\n";
    cout << "=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+\n";
}
void Atacar(int VidaEnemy1, int ATK) {
    cout << "Atacas al enemigo.\n";
    VidaEnemy1 -= ATK;
    cout << "Le quitaste " << ATK << " puntos de vida\n";
}
void Curar(int& HP, int PocHeal) {
    cout << "Utilizaste una poción\n";
    HP += PocHeal;
    cout << "Te curaste " << PocHeal << " puntos de vida. Vida actual: " << HP << endl;
}
void Bloquear(int HP) {
    HP += 3;
    cout << "Te preparas para bloquear el ataque del enemigo.\n";
}
void mostrarPistas(const string pistas[], int tam) {
    cout << "Pistas encontradas:\n";
    for (int i = 0; i < tam; i++) {
        cout << i + 1 << ". " << pistas[i] << endl;
    }
}
bool resolverPuzzle(const string respuestas[], int tam) {
    string intento;
    for (int i = 0; i < tam; i++) {
        cout << "Ingresa la respuesta a la pista " << i + 1 << ": ";
        cin >> intento;
        if (intento != respuestas[i]) {
            cout << "Respuesta incorrecta. Intenta de nuevo.\n";
            return false;
        }
    }
    return true;
}
int main()
{
    int i = 0, HP = 100, ATK = 5, Pociones = 3, PocHeal = 25, VidaEnemy1 = 15;
    string accion, atacar, bloquear, curar;
    cout << "...\n";
    cout << "Despiertas en una cueva.\n";
    this_thread::sleep_for(chrono::seconds(2));
    cout << "Inmediatamente encuentras tus pertenencias regadas en el suelo\n";
    this_thread::sleep_for(chrono::seconds(2));
    while (i >= 0) {
        cout << "Recoges tu linterna. Escribe \"encender\" para continuar\n";
        cin >> accion;
        if (accion == "encender") {
            break;
        }
        else {
            i += 1;
        }
    }
    cout << "Encuentras un tallado en la pared de la cueva lo siguiente:\n";
    this_thread::sleep_for(chrono::seconds(2));
    cout << "\"Si quieres salir de esta cueva tendras que completar las siguentes desafios.\" \n";
    this_thread::sleep_for(chrono::seconds(2));
    cout << "Luego de leer, decides continuar hacia adelante.\n";
    this_thread::sleep_for(chrono::seconds(2));
    cout << "Pulsa una tecla para continuar.\n";
    int _getch();
    system("CLS");
    cout << "...\n";
    this_thread::sleep_for(chrono::seconds(2));
    cout << "Encuentras una nota en el suelo que dice: \"Tendras que derrotar al que se presenta frente de la puerta\"\n";
    this_thread::sleep_for(chrono::seconds(2));
    cout << "Piensas \"Una puerta dentro de una cueva?\"\n";
    cout << "...";
    this_thread::sleep_for(chrono::seconds(3));
    cout << "......\n";
    this_thread::sleep_for(chrono::seconds(2));
    cout << "Caminas hasta encontrar la puerta.\n";
    this_thread::sleep_for(chrono::seconds(2));
    cout << "\"Ah, por fin, la puerta.\"\n";
    this_thread::sleep_for(chrono::seconds(2));
    cout << "Ves que frente de esa puerta hay un individuo.\n";
    this_thread::sleep_for(chrono::seconds(2));
    cout << "\"Asumo que es el quien tengo que derrotar, no le veo otra manera para seguir.\"\n";
    cout << "Pulsa cualquier tecla para comenzar la batalla.";
    int _getch();
    system("CLS");
    while (i >= 0) {
        cout << "Te enfrentas al enemigo.\n";
        cout << "Vida del enemigo: " << VidaEnemy1 << endl;
        IuBattleFunction(HP, ATK, Pociones);
        cin >> accion;
        if (accion == "atacar") {
            Atacar(VidaEnemy1, ATK);
            VidaEnemy1 -= ATK;
            this_thread::sleep_for(chrono::seconds(2));
            system("CLS");

            if (VidaEnemy1 <= 0) {
                break;
            }
        }
        else if (accion == "bloquear") {
            Bloquear(HP); //Le da vida para que cuando te ataque, la vida se quede igual de cuando comenzo el "block"
            HP += 15;
            this_thread::sleep_for(chrono::seconds(2));
            system("CLS");
        }
        else if (accion == "curar") {
            Curar(HP, PocHeal);
            this_thread::sleep_for(chrono::seconds(2));
            system("CLS");

        }
        else {
            cout << "accion invalida, intente de nuevo";
            //el enemigo te termina atacando porque simula el hecho de que "fallaste" la accion
        }
        if (VidaEnemy1 > 0) {
            cout << "El enemigo ataca.\n";
            HP -= 15;
            cout << "Te quita 15 puntos de vida. Vida Actual: " << HP << endl;
            this_thread::sleep_for(chrono::seconds(2));
            system("CLS");

        }
        if (HP <= 0) {
            cout << "Has sido derrotado.";
            return 0;
        }
    }
    cout << "pulsa cualquier tecla para pasar por la puerta";
    int _getch();
    //aqui comienza la parte de José
    system("CLS");
    cout << "...\n";
    this_thread::sleep_for(chrono::seconds(2));
    cout << "Atravesaste la puerta y entraste en otra sala de la cueva.\n";
    this_thread::sleep_for(chrono::seconds(2));
    cout << "Una nueva nota aparece en el suelo.\n";
    this_thread::sleep_for(chrono::seconds(2));
    cout << "\"Resuelve el enigma para continuar. Cada respuesta te lleva a la siguiente pista.\"\n";
    this_thread::sleep_for(chrono::seconds(2));
    cout << "Encuentras un panel en la pared con espacios para respuestas.\n";
    this_thread::sleep_for(chrono::seconds(4));
    cout << "...\n";
    // Configuración del Puzzle
    const int tamano = 3;
    string pistas[tamano] = {
        "No soy un ser vivo, pero puedo crecer. Necesito aire para vivir, pero si me doy vuelta, muero. Que soy?",
        "Si me nombras, desaparezco, que soy?",
        "Que es lo que es algo y a la vez nada."
    };
    string respuestas[tamano] = { "fuego", "silencio", "pez" };

    bool resuelto = false;
    while (!resuelto) {
        system("CLS");
        mostrarPistas(pistas, tamano);
        resuelto = resolverPuzzle(respuestas, tamano);
    }
    cout << "\nHas resuelto los acertijos correctamente! Una puerta oculta se abre delante de ti.\n";
    this_thread::sleep_for(chrono::seconds(2));
    cout << "Continuas hacia adelante...\n";
    this_thread::sleep_for(chrono::seconds(2));
    // Final del juego
    system("CLS");
    cout << "...\n";
    this_thread::sleep_for(chrono::seconds(2));
    cout << "Llegas a un gran cuarto iluminado por una luz tenue.\n";
    this_thread::sleep_for(chrono::seconds(2));
    cout << "En el centro del cuarto, un pedestal sostiene un cristal brillante.\n";
    this_thread::sleep_for(chrono::seconds(2));
    cout << "Te acercas al cristal y escuchas una voz profunda resonar en la cueva:\n";
    this_thread::sleep_for(chrono::seconds(3));
    cout << "\"Valiente aventurero, has superado todos los desafios.\"\n";
    this_thread::sleep_for(chrono::seconds(3));
    cout << "\"La sabiduria, el coraje y la perseverancia te han guiado hasta aqui.\"\n";
    this_thread::sleep_for(chrono::seconds(3));
    cout << "La luz del cristal te envuelve, y sientes una calma profunda.\n";
    this_thread::sleep_for(chrono::seconds(3));
    cout << "De repente, te encuentras fuera de la cueva, mirando hacia un hermoso paisaje.\n";
    this_thread::sleep_for(chrono::seconds(3));
    cout << "\"Valorar la libertad es reconocer su papel en nuestra capacidad de ser y decidir,eres libre gran guerrero..\"\n";
    this_thread::sleep_for(chrono::seconds(3));
    cout << "\n** FIN **\n";
    this_thread::sleep_for(chrono::seconds(2));

    cout << "\nGracias por jugar \"Escape The Cave\" creado por Ryan X Velez Negron y Jesus Rodriguez Sanchez. Pulsa cualquier tecla para salir!\n";
    int _getch();
    return 0;
}
    