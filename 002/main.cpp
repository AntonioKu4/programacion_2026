#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <ctime>

using namespace std;

class Mensaje {
public:
    string rol;
    string texto;
    Mensaje(string r, string t) : rol(r), texto(t) {}
};

class Conversacion {
private:
    vector<Mensaje> historial;
public:
    void agregar(string r, string t) {
        historial.push_back(Mensaje(r, t));
    }

    void guardarEnJSON() {
        // Formato de nombre: charla_20260422.json
        time_t ahora = time(0);
        string nombreArchivo = "002/charla_" + to_string(ahora) + ".json";

        ofstream archivo(nombreArchivo);
        archivo << "{\n  \"conversacion\": [\n";
        for (size_t i = 0; i < historial.size(); i++) {
            archivo << "    {\"rol\": \"" << historial[i].rol << "\", \"texto\": \"" << historial[i].texto << "\"}";
            if (i < historial.size() - 1) archivo << ",";
            archivo << "\n";
        }
        archivo << "  ]\n}";
        archivo.close();
        cout << "\n[SISTEMA] Historial guardado en: " << nombreArchivo << endl;
    }
};

int main() {
    Conversacion chat;
    string usuarioInput;

    cout << "--- Chatbot Terminal UADY (Reto 002) ---" << endl;
    cout << "Escribe 'salir' para terminar y guardar." << endl;

    while (true) {
        cout << "\nTu: ";
        getline(cin, usuarioInput);

        if (usuarioInput == "salir") break;

        chat.agregar("user", usuarioInput);

        // Simulación de respuesta (el siguiente paso sería libcurl)
        string respuesta = "Entendido, Toni. Procesando: " + usuarioInput;
        cout << "Gemini: " << respuesta << endl;
        chat.agregar("model", respuesta);
    }

    chat.guardarEnJSON();
    return 0;
}
