#include <iostream>
using namespace std;

int main()
{
    int edad, tipo, producto, saldo = 1000, resultado;
    cout << "Por favor ingrese su edad" << endl;
    cin >> edad;
    if (edad < 16)
    {
        cout << "No se puede contiunar con la compra" << endl;
        return 0;
    }
    else if (16 <= edad)
    {
        cout << "> Por favor, seleccione que tipo de usuario es <" << endl;
        cout << "1. Estudiante" << endl;
        cout << "2. Profesional" << endl;
        cout << "3. Ver todos" << endl;
        cout << "[Su saldo es de $1000]" << endl;
        cin >> tipo;
        switch (tipo)
        {
        case 1:
            cout << "> Estudiante (descuento del 20%) <" << endl;
            cout << "1. Laptop basica ($900)" << endl;
            cout << "2. Tablet estudiantil ($600)" << endl;
            cout << "3. Chromebook($700)" << endl;
            cin >> producto;

            switch (producto)
            {
            case 1:
                cout << " Usted a seleccionado la Laptop basica ($900)" << endl;
                if (saldo < (900 * 0.80))
                {
                    resultado = ((900 * 0.80) - saldo);
                    cout << "No se puede realizar la compra debido a que el saldo no es suficiente, le faltan: $" << resultado << endl;
                }
                else if ((900 * 0.80) < saldo)
                {
                    resultado = (saldo - (900 * 0.80));
                    cout << "Compra realizada exitosamente, su saldo restante es de: $" << resultado << endl;
                }
                break;
            case 2:
                cout << " Usted a seleccionado la Tablet estudiantil ($600)" << endl;
                if (saldo < (600 * 0.80))
                {
                    resultado = ((600 * 0.80) - saldo);
                    cout << "No se puede realizar la compra debido a que el saldo no es suficiente, le faltan: $" << resultado << endl;
                }
                else if ((600 * 0.80) < saldo)
                {
                    resultado = (saldo - (600 * 0.80));
                    cout << "Compra realizada exitosamente, su saldo restante es de: $" << resultado << endl;
                }
                break;
            case 3:
                cout << " Usted a seleccionado la Chromebook ($700)" << endl;
                if (saldo < (700 * 0.80))
                {
                    resultado = ((700 * 0.80) - saldo);
                    cout << "No se puede realizar la compra debido a que el saldo no es suficiente, le faltan: $" << resultado << endl;
                }
                else if ((700 * 0.80) < saldo)
                {
                    resultado = (saldo - (700 * 0.80));
                    cout << "Compra realizada exitosamente, su saldo restante es de: $" << resultado << endl;
                }
                break;

            default:
                cout << "por favor ingrese un valor valido" << endl;
                break;
            }
            break;
        case 2:
            cout << "> Profesional (descuento del 10%) <" << endl;
            cout << "1. Laptop avanzada ($1500)" << endl;
            cout << "2. Tablet Pro ($1200)" << endl;
            cout << "3. Estacion de trabajo($2000)" << endl;
            cin >> producto;

            switch (producto)
            {
            case 1:
                cout << " Usted a seleccionado la Laptop avanzada ($1500)" << endl;
                if (saldo < (1500 * 0.10))
                {
                    resultado = ((1500 * 0.10) - saldo);
                    cout << "No se puede realizar la compra debido a que el saldo no es suficiente, le faltan: $" << resultado << endl;
                }
                else if ((1500 * 0.10) < saldo)
                {
                    resultado = (saldo - (1500 * 0.10));
                    cout << "Compra realizada exitosamente, su saldo restante es de: $" << resultado << endl;
                }
                break;
            case 2:
                cout << " Usted a seleccionado la Tablet Pro ($1200)" << endl;
                if (saldo < (1200 * 0.90))
                {
                    resultado = ((1200 * 0.90) - saldo);
                    cout << "No se puede realizar la compra debido a que el saldo no es suficiente, le faltan: $" << resultado << endl;
                }
                else if ((1200 * 0.90) < saldo)
                {
                    resultado = (saldo - (1200 * 0.90));
                    cout << "Compra realizada exitosamente, su saldo restante es de: $" << resultado << endl;
                }
                break;
            case 3:
                cout << " Usted a seleccionado la Estacion de trabajo($2000)" << endl;
                if (saldo < (2000 * 0.90))
                {
                    resultado = ((2000 * 0.90) - saldo);
                    cout << "No se puede realizar la compra debido a que el saldo no es suficiente, le faltan: $" << resultado << endl;
                }
                else if ((2000 * 0.10) < saldo)
                {
                    resultado = (saldo - (2000 * 0.90));
                    cout << "Compra realizada exitosamente, su saldo restante es de: $" << resultado << endl;
                }
                break;

            default:
                cout << "por favor ingrese un valor valido" << endl;
                break;
            }
            break;
        case 3:
            cout << "> Todas las opciones <" << endl;
            cout << "> Estudiante (descuento del 20%) <" << endl;
            cout << "1. Laptop basica ($900)" << endl;
            cout << "2. Tablet estudiantil ($600)" << endl;
            cout << "3. Chromebook($700)" << endl;
            cout << "> Profesional (descuento del 10%) <" << endl;
            cout << "1. Laptop avanzada ($1500)" << endl;
            cout << "2. Tablet Pro ($1200)" << endl;
            cout << "3. Estacion de trabajo($2000)" << endl;
            break;
        default:
            cout << "Por favor ingrese un valor valido" << endl;
            break;
        }
    }

    return 0;
}