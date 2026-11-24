#ifndef KERJASAMA_H_INCLUDED
#define KERJASAMA_H_INCLUDED

#include <iostream>
#include <string>
using namespace std;

struct Kerjasama {
    string tanggalMulai;
    string tanggalSelesai;
    string jenisKerjasama;
}

Kerjasama createKerjasama(string tanggalMulai, string tanggalSelesai, string jenisKerjasama);
void tampilKerjasama(Kerjasama K);
#endif