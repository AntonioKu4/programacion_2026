#include <iostream>
#include <string>
#include <vector>
#include <ctime>

using namespace std;

// Clase para representar un mensaje individual
class Mensaje {
public:
    string rol; // "user" o "assistant"
    string contenido;
    string timestamp;

    Mensaje(string r, string c) : rol(r), contenido(c) {
        // Generar un timestamp básico
        time_t ahora = time(0);
        timestamp = ctime(&ahora);
    }
};

// Clase para gestionar la conversación
class Conversacion {
private:
    vector<Mensaje> historial;

public:
    void agregarMensaje(string rol, string contenido) {
        historial.push_back(Mensaje(rol, contenido));
    }

    void mostrarHistorial() {
        cout << "\n--- Historial de Conversacion ---" << endl;
        for (const auto& m : historial) {
            cout << "[" << m.rol << "]: " << m.contenido << endl;
        }
    }

    // Por ahora, solo repite lo que el usuario dice (simulación)
    string obtenerRespuestaSimulada(string prompt) {
        return "Respuesta simulada: " + prompt;
    }
};

int main() {
    Conversacion miChat;
    string usuarioInput;

    cout << "Bienvenido al Chatbot Terminal (Reto 02)" << endl;
    cout << "Escribe algo (o 'salir' para terminar): " << endl;

    while (true) {
        cout << "> ";
        getline(cin, usuarioInput);

        if (usuarioInput == "salir") break;

        // 1. Guardar mensaje del usuario
        miChat.agregarMensaje("user", usuarioInput);

        // 2. Obtener respuesta (Simulada por ahora)
        string respuesta = miChat.obtenerRespuestaSimulada(usuarioInput);
        
        // 3. Guardar respuesta del sistema
        miChat.agregarMensaje("assistant", respuesta);

        cout << "Sistema: " << respuesta << endl;
    }

    miChat.mostrarHistorial();

    return 0;
}