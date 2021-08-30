/**
 * @file main.cpp
 * @version 1.0
 * @date 29/8/2021
 * @author Gustavo Zamora
 * @title TareaExtraclase1
 */

#include "main.h"
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>


using namespace std;
string linea;
int *enteros;
char temporal[256];

/**
 *
 * @param x
 * @param y
 */
void swap(int &x, int &y){
    int aux;

    aux = x;
    x = y;
    y = aux;

}
/**
 *
 * @param array números que se desea ordenar
 * @param first primera posición
 * @param last última posición
 */
void quickSort(int array[], int first, int last){
    int i, j, mid;
    int pivote;

    mid = (first + last) / 2;
    pivote = array[mid];
    i = first;
    j = last;

    do{
        while(array[i] < pivote) i++;
        while(array[j] > pivote) j--;

        if(i <= j){
            swap(array[i], array[j]);
            i++;
            j--;
        }
    }while(i <= j);

    if(first < j){
        quickSort(array, first, j); //se ordena la sublista izquierda
    }
    if(i < last){
        quickSort(array, i, last); //se ordena la sublista derecha
    }
}

void read();
void write();
/**
 *
 * @return
 */
int main(){
    /*int a[] = {8,33,510,0,81};
    int sizeOfArray = sizeof(a);
    int sizeOfDataType = sizeof(int);
    int size = sizeOfArray/sizeOfDataType;
    quickSort(a,0,size-1);
    cout<<"Sorted array"<<endl;
    cout<<size<<endl;
    for(int i = 0; i < size; i++){
        cout<<a[i]<<",";
    }
    cout<<""<<endl;*/
    read();
    write();
    return 0;
}
/**
 * @file variable archivo tipo puntero
 */
void read(){
    string text;
    FILE *file;

    file = fopen("C:\\Users\\Admin\\Desktop\\TareaExtraclase1\\a.txt", "r"); // abre archivo en modo lectura
    if(file == NULL){
        cout<<"No se pudo leer"<<endl;
        exit(1);
    }
    while (!feof(file)){
        fgets(temporal,256,file);
        cout<<temporal;
    }
    fclose(file);
}
/**
 *
 */
void write(){
    ofstream archivo;

    archivo.open("C:\\Users\\Admin\\Desktop\\TareaExtraclase1\\archivo_resultado.txt", ios::out);
    if(archivo.fail()){
        exit(1);
    }
    for (int m =1 ; m<257; m++){
        archivo<< temporal[m];
    }
    archivo.close();
}
