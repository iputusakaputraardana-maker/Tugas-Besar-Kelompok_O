#ifndef KAMPANYE_H_INCLUDED
#define KAMPANYE_H_INCLUDED

#include <iostream>
#include <string>
using namespace std;

struct Kampanye {
    int idKampanye;
    int idKreator;
    int idBrand;
    string namaKampanye;
    int biaya;
    int jumlahTayangan;
    int jumlahInteraksi;

}

Kampanye createKampanye(int idKampanye, int idKreator, int idBrand, string namaKampanye, int biaya, int jumlahTayangan, int jumlahInteraksi);
float hitungEngagementRate(Kampanye K);
void tampilKampanye(Kampanye K);

#endif