 // C++ implementation of Radix Sort
#include <iostream>
using namespace std;

// Una funcion de utilidad para dar el maximo valor en arr[]
int getMax(int arr[], int n)
{
    int mx = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > mx)
            mx = arr[i];
    return mx;
}

// Una funcion para dar el orden de arr[] acorde a
// el digito representado por exp.
void countSort(int arr[], int n, int exp)
{
    int output[n]; // lista de salida
    int i, count[10] = { 0 };

    // Almacenar recuento de ocurrencias en count[]
    for (i = 0; i < n; i++)
        count[(arr[i] / exp) % 10]++;

    // Cambia count[i] asi que count[i] ahora contiene la posicion
    // actual de este digito en output[]
    for (i = 1; i < 10; i++)
        count[i] += count[i - 1];

    // Construyendo la lista de salida
    for (i = n - 1; i >= 0; i--) {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }

    // Copia la lista de salida para arr[], asi que arr[] ahora
    // contiene numeros ordenados acorde con el digito actual
    for (i = 0; i < n; i++)
        arr[i] = output[i];
}

// La funcion principal que ordena arr[] de tamaño n usando
// Radix Sort
void radixsort(int arr[], int n)
{
    // Encuentra el número máximo para saber el número de dígitos
    int m = getMax(arr, n);

    // Ordena contando cada digite. Tenga en cuenta que en vez de pasar
    // el numero de digitos, exp se pasa. exp es 10^i
    // donde i es el numero de digito actual
    for (int exp = 1; m / exp > 0; exp *= 10)
        countSort(arr, n, exp);
}

// Una función de utilidad para imprimir una matriz
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}

// Driver Code
int main()
{
    int arr[] = { 170, 45, 75, 90, 802, 24, 2, 66 };
    int n = sizeof(arr) / sizeof(arr[0]);

      // Function Call
    cout<<"Original: ";
    for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
    }
    cout<<endl;
      radixsort(arr, n);
    cout<<"Radix   :";
    print(arr, n);
    return 0;
}
