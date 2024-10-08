#include <bits/stdc++.h>
using namespace std;

int main() {
    multiset<int> ms; // []

    // Insertar elementos
    ms.insert(10); // [10]
    ms.insert(20); // [10, 20]
    ms.insert(10); // [10, 10, 20]
    ms.insert(30); // [10, 10, 20, 30]
    ms.insert(20); // [10, 10, 20, 20, 30]
    ms.insert(40); // [10, 10, 20, 20, 30, 40]
    ms.insert(20); // [10, 10, 20, 20, 20, 30, 40]
    ms.insert(50); // [10, 10, 20, 20, 30, 40, 50]

    // Acceder e imprimir elementos
    for (const auto& elem : ms) {
        cout << elem << " ";
    }
    cout << "\n";

    // Obtener el primer elemento
    cout << *ms.begin() << "\n"; // 10

    // Obtener el último elemento
    cout << *prev(ms.end()) << "\n"; // 50

    // Usar count para verificar la existencia y la cantidad de un elemento
    cout << ms.count(20) << "\n"; // 3
    cout << ms.count(60) << "\n"; // 0

    // Eliminar un elemento (elimina solo una instancia si hay duplicados)
    auto it = ms.find(20); 
    if(it != ms.end()){
        ms.erase(it); // [10, 10, 20, 20, 30, 40, 50]
    }
    
    // Eliminar todas las instancias de un elemento
    ms.erase(10); // [20, 20, 30, 40, 50]

    // Verificar existencia de un elemento después de eliminar
    if (ms.find(10) == ms.end()) {
        cout << "Elemento no encontrado.\n"; 
    }

    cout << ms.size() << "\n"; // 4

    // Vaciar el multiconjunto
    ms.clear();

    cout << (ms.empty() ? "Sí" : "No") << "\n"; // Sí

    return 0;
}
