#ifndef KREATOR_H_INCLUDED
#define KREATOR_H_INCLUDED

#include <iostream>
#include <string>
using namespace std;

struct Kreator {
    int idKreator;
    string nama;
    string platformUtama;
    int jumlahPengikut;
}

typedef struct elmKreator *adrKreator;

struct elmKreator {
    Kreator info;
    adrKreator next;
    ListBrand brand;
}

struct ListKreator{
    adrKreator first;
}

void createListKreator(ListKreator &L);
adrKreator createListKreator(Kreator info);
void insertLastKreator(ListKreator L, adrKreator);
adrKreator searchKreator(ListKreator &L, int idKreator);
void deleteKreator(ListKreator &L, int idKreator);
#endif