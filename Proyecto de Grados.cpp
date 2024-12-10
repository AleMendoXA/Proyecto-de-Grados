#include <iostream>
using namespace std;

void convertirCelsiusAFahrenheit();
void convertirCelsiusAKelvin();
void convertirCelsiusARankine();
void convertirFahrenheitACelsius();
void convertirFahrenheitAKelvin();
void convertirFahrenheitARankine();
void convertirKelvinACelsius();
void convertirKelvinAFahrenheit();
void convertirKelvinARankine();
void convertirRankineACelsius();
void convertirRankineAFahrenheit();
void convertirRankineAKelvin();

int main() {
    int opcion;
    do {
        cout << "Bienvenido al menu de grados centigrados" << endl;
        cout << "Selecciona una opcion:" << endl;
        cout << "1. Celsius a Fahrenheit" << endl;
        cout << "2. Celsius a Kelvin" << endl;
        cout << "3. Celsius a Rankine" << endl;
        cout << "4. Fahrenheit a Celsius" << endl;
        cout << "5. Fahrenheit a Kelvin" << endl;
        cout << "6. Fahrenheit a Rankine" << endl;
        cout << "7. Kelvin a Celsius" << endl;
        cout << "8. Kelvin a Fahrenheit" << endl; 
        cout << "9. Kelvin a Rankine" << endl; 
        cout << "10. Rankine a Celsius" << endl;
        cout << "11. Rankine a Fahrenheit" << endl; 
        cout << "12. Rankine a Kelvin" << endl; 
        cout << "13. Salir" << endl;
        cout << "Ingrese su opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                convertirCelsiusAFahrenheit();
                break;
            case 2:
                convertirCelsiusAKelvin();
                break;
            case 3:
                convertirCelsiusARankine();
                break;
            case 4:
                convertirFahrenheitACelsius();
                break;
            case 5:
                convertirFahrenheitAKelvin();
                break;
            case 6:
                convertirFahrenheitARankine();
                break;
            case 7:
                convertirKelvinACelsius();
                break;
            case 8:
                convertirKelvinAFahrenheit(); 
                break;
            case 9:
                convertirKelvinARankine(); 
                break;
            case 10:
                convertirRankineACelsius();
                break;
            case 11:
                convertirRankineAFahrenheit(); 
                break;
            case 12:
                convertirRankineAKelvin(); 
                break;
            case 13:
                cout << "Saliendo del programa...";
                break;
            default:
                cout << "Opcion no valida. Intente de nuevo." << endl;
        }

    } while (opcion != 13);

    return 0;
}

void convertirCelsiusAFahrenheit() {
    double celsius;
    cout << "Ingrese la temperatura en Celsius:" << endl;
    cin >> celsius;
    double fahrenheit = (celsius*9.0/0.5)+32;
    cout << "Temperatura en Fahrenheit:" << fahrenheit << endl;
}

void convertirCelsiusAKelvin() {
    double celsius;
    cout << "Ingrese la temperatura en Celsius:" << endl;
    cin >> celsius;
    double kelvin = (celsius+273.15);
    cout << "Temperatura en Kelvin:" << kelvin << endl;
}

void convertirCelsiusARankine() {
    double celsius;
    cout << "Ingrese la temperatura en Celsius:" << endl;
    cin >> celsius;
    double rankine = (celsius+273.15)*9.0/5.0;
    cout << "Temperatura en Rankine:" << rankine << endl;
}

void convertirFahrenheitACelsius() {
    double fahrenheit;
    cout << "Ingrese la temperatura en Fahrenheit:" << endl;
    cin >> fahrenheit;
    double celsius = (fahrenheit-32)*5.0/9.0;
    cout << "Temperatura en Celsius:" << celsius << endl;
}

void convertirFahrenheitAKelvin() {
    double fahrenheit;
    cout << "Ingrese la temperatura en Fahrenheit:" << endl;
    cin >> fahrenheit;
    double kelvin = (fahrenheit-32)*5.0/9.0+273.15; 
    cout << "Temperatura en Kelvin:" << kelvin << endl;
}

void convertirFahrenheitARankine() {
    double fahrenheit;
    cout << "Ingrese la temperatura en Fahrenheit:" << endl;
    cin >> fahrenheit;
    double rankine = (fahrenheit+459.67); 
    cout << "Temperatura en Rankine:" << rankine << endl;
}

void convertirKelvinACelsius() {
    double kelvin;
    cout << "Ingrese la temperatura en Kelvin:" << endl;
    cin >> kelvin;
    double celsius = (kelvin-273.15); 
    cout << "Temperatura en Celsius:" << celsius << endl;
}

void convertirKelvinAFahrenheit() {
    double kelvin;
    cout << "Ingrese la temperatura en Kelvin:" << endl;
    cin >> kelvin;
    double fahrenheit = (kelvin-273.15)*9.0/5.0+32; 
    cout << "Temperatura en Fahrenheit:" << fahrenheit << endl;
}

void convertirKelvinARankine() {
    double kelvin;
    cout << "Ingrese la temperatura en Kelvin:" << endl;
    cin >> kelvin;
    double rankine =  (kelvin*9.0/5.0); 
    cout << "Temperatura en Rankine:" << rankine << endl; 
}

void convertirRankineACelsius() {
    double rankine;
    cout << "Ingrese la temperatura en Rankine:" << endl;
    cin >> rankine;
    double celsius = (rankine-491.67)*5.0/9.0; 
    cout << "Temperatura en Celsius:" << celsius << endl;
}

void convertirRankineAFahrenheit() {
   double rankine; 
   cout<<("Ingrese la temperatura en Rankine:") << endl; 
   cin>>rankine; 
   double fahrenheit = (rankine-459.67); 
   cout<<"Temperatura en Fahrenheit:"<<(fahrenheit)<<"\n" << endl; 
}

void convertirRankineAKelvin() { 
   double rankine; 
   cout<<("Ingrese la temperatura en Rankine:") << endl; 
   cin>>rankine; 
   double kelvin = (rankine*5.0/9.0); 
   cout<<"Temperatura en Kelvin:" <<(kelvin)<<"\n" << endl; 
}

