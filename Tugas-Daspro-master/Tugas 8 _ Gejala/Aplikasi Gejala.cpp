#include<iostream>
#include<string.h>
using namespace std;
//judul : Deteksi Gejala Penyakit Batuk
//memo  :
//    Bima Afkanur Rifqi
//    A11.2022.14719
//    Teknik Informatika
//    Universitas Dian Nuswantoro
//kamus
char batuk1[20];
char berdahak[20];
char demam[20];
char lelah[20];
char kering[20];
char leher[20];
char nafas[20];
char darah[20];
char minggu[20];
char nafas2[20];
char ulang[20];
//diskripsi
main()
{
    cout << "=======================================" << endl;
    cout << "Deteksi Gejala Penyakit Batuk " << endl;
    cout << "=======================================" << endl;
    awal:
    cout << "Apakah anda mengalami batuk yang sering atau batuk biasa : "; cin >> batuk1;
    if(strcmp(batuk1,"sering")==0 || strcmp(batuk1,"Sering")==0 || strcmp(batuk1,"sering sekali")==0)
    {
        cout << "Apakah batuk anda berdahak : "; cin >> berdahak;
        if(strcmp(berdahak,"Iya")==0 || strcmp(berdahak,"iya")==0 || strcmp(berdahak,"ya")==0 || strcmp(berdahak,"Ya")==0)
        {
            cout << "Apakah anda juga merasa kan demam : ";cin >> demam;
            if(strcmp(demam,"Iya")==0 || strcmp(demam,"iya")==0 || strcmp(demam,"ya")==0 || strcmp(demam,"Ya")==0)
            {
                cout << "Apakah anda juga mengalami kelelahan : ";cin >> lelah;
                if(strcmp(lelah,"Iya")==0 || strcmp(lelah,"iya")==0 || strcmp(lelah,"ya")==0 || strcmp(lelah,"Ya")==0)
                {
                    cout << "" << endl;
                    cout << "====================================" << endl;
                    cout << "Anda saat ini menderita flu" << endl;
                    cout << "Segera periksakan diri anda ke dokter dan perbanyak istirahat" << endl;
                    cout << "====================================" << endl;
                    cout << "" << endl;
                }
            }
            else if(strcmp(demam,"Tidak")==0 || strcmp(demam,"tidak")==0 || strcmp(demam,"TIDAK")==0)
            {
                cout << "" << endl;
                cout << "====================================" << endl;
                cout << "Anda saat ini menderita Batuk Berdahak" << endl;
                cout << "Lakukan penanganan mandiri dibawah ini : " << endl;
                cout << "--> Pastikan badan anda selalu hangat" << endl;
                cout << "--> Perbanyak minum air putih" << endl;
                cout << "--> Perbanyak istirahat" << endl;
                cout << "--> Konsumsi obat dengan kandungan ekspektoran" << endl;
                cout << "--> atau obat herbal seperti jahe" << endl;
                cout << "====================================" << endl;
                cout << "" << endl;
            }
        }
        else if(strcmp(berdahak,"Tidak")==0 || strcmp(berdahak,"tidak")==0 || strcmp(berdahak,"TIDAK")==0)
        {
            cout << "Apakah anda mengalami batuk kering : "; cin>>kering;
            if(strcmp(kering,"IYA")==0 || strcmp(kering,"Iya")==0 || strcmp(kering,"iya")==0 || strcmp(kering,"YA")==0 || strcmp(kering,"Ya")==0 || strcmp(kering,"ya")==0)
            {
                cout << "Apakah tenggorokan anda terasa sakit : "; cin >>leher;
                if(strcmp(leher,"IYA")==0 || strcmp(leher,"Iya")==0 || strcmp(leher,"iya")==0 || strcmp(leher,"YA")==0 || strcmp(leher,"Ya")==0 || strcmp(leher,"ya")==0)
                {
                    cout << "Apakah anda mengalami sesak nafas : "; cin>> nafas;
                    if(strcmp(nafas,"IYA")==0 || strcmp(nafas,"Iya")==0 || strcmp(nafas,"iya")==0 || strcmp(nafas,"YA")==0 || strcmp(nafas,"Ya")==0 || strcmp(nafas,"ya")==0)
                    {
                        cout << "" << endl;
                        cout << "====================================" << endl;
                        cout << "Anda saat ini menderita Asma" << endl;
                        cout << "Segera periksakan diri anda kedokter sebelum semakin parah " << endl;
                        cout << "====================================" << endl;
                        cout << "" << endl;
                    }
                    else if(strcmp(nafas,"Tidak")==0 || strcmp(nafas,"tidak")==0 || strcmp(nafas,"TIDAK")==0)
                    {
                        cout << "" << endl;
                        cout << "====================================" << endl;
                        cout << "Anda saat ini menderita Radang Tenggorokan" << endl;
                        cout << "Lakukan penanganan mandiri dibawah ini : " << endl;
                        cout << "--> Periksakan diri anda ke dokter" << endl;
                        cout << "--> Perbanyak minum air putih" << endl;
                        cout << "--> Perbanyak istirahat" << endl;
                        cout << "--> Konsumsi madu" << endl;
                        cout << "--> Berhenti merokok" << endl;
                        cout << "====================================" << endl;
                        cout << "" << endl;
                    }
                }
            }
            else if(strcmp(kering,"Tidak")==0 || strcmp(kering,"tidak")==0 || strcmp(kering,"TIDAK")==0)
            {
                cout << "Apakah anda mengalami batuk berdarah : "; cin>>darah;
                if(strcmp(darah,"IYA")==0 || strcmp(darah,"Iya")==0 || strcmp(darah,"iya")==0 || strcmp(darah,"YA")==0 || strcmp(darah,"Ya")==0 || strcmp(darah,"ya")==0)
                {
                    cout << "Apakah batuk anda sudah berlangsung lebih dari seminggu : " ; cin >> minggu;
                    if(strcmp(minggu,"IYA")==0 || strcmp(minggu,"Iya")==0 || strcmp(minggu,"iya")==0 || strcmp(minggu,"YA")==0 || strcmp(minggu,"Ya")==0 || strcmp(minggu,"ya")==0)
                    {
                        cout << "Apakah anda mengalami sesak nafas : ";cin >> nafas2;
                        if(strcmp(nafas2,"IYA")==0 || strcmp(nafas2,"Iya")==0 || strcmp(nafas2,"iya")==0 || strcmp(nafas2,"YA")==0 || strcmp(nafas2,"Ya")==0 || strcmp(nafas2,"ya")==0)
                        {
                            cout << "" << endl;
                            cout << "====================================" << endl;
                            cout << "Anda saat ini menderita Infeksi Saluran Pernafasan" << endl;
                            cout << "Segera periksa diri anda ke dokter!!!" << endl;
                            cout << "Dam lakukan hal hal dibawah ini :" << endl;
                            cout << "--> Perbanyak minum air putih" << endl;
                            cout << "--> Perbanyak istirahat" << endl;
                            cout << "--> Konsumsi madu" << endl;
                            cout << "--> Berhenti merokok" << endl;
                            cout << "====================================" << endl;
                            cout << "" << endl;
                        }
                        else if(strcmp(nafas2,"Tidak")==0 || strcmp(nafas2,"tidak")==0 || strcmp(nafas2,"TIDAK")==0)
                        {
                            cout << "Segera periksa diri anda ke dokter!!!" << endl;
                            cout << "Dam lakukan hal hal dibawah ini :" << endl;
                            cout << "--> Perbanyak minum air putih" << endl;
                            cout << "--> Perbanyak istirahat" << endl;
                            cout << "--> Konsumsi madu" << endl;
                            cout << "--> Berhenti merokok" << endl;
                            cout << "====================================" << endl;
                            cout << "" << endl;
                        }
                    }
                    else if(strcmp(minggu,"Tidak")==0 || strcmp(minggu,"tidak")==0 || strcmp(minggu,"TIDAK")==0)
                    {
                        cout << "Segera periksa diri anda ke dokter!!!" << endl;
                        cout << "Dam lakukan hal hal dibawah ini :" << endl;
                        cout << "--> Perbanyak minum air putih" << endl;
                        cout << "--> Perbanyak istirahat" << endl;
                        cout << "--> Konsumsi madu" << endl;
                        cout << "--> Berhenti merokok" << endl;
                        cout << "====================================" << endl;
                        cout << "" << endl;
                    }
                }
                else if(strcmp(darah,"Tidak")==0 || strcmp(darah,"tidak")==0 || strcmp(darah,"TIDAK")==0)
                {
                    cout << "Segera periksa diri anda ke dokter!!!" << endl;
                    cout << "Dam lakukan hal hal dibawah ini :" << endl;
                    cout << "--> Perbanyak minum air putih" << endl;
                    cout << "--> Perbanyak istirahat" << endl;
                    cout << "--> Konsumsi madu" << endl;
                    cout << "--> Berhenti merokok" << endl;
                    cout << "====================================" << endl;
                    cout << "" << endl;
                }
            }
        }
    }
    else if(strcmp(batuk1,"Biasa")==0 || strcmp(batuk1,"biasa")==0)
    {
        cout << "" << endl;
        cout << "=======================================================================================" << endl;
        cout << "Di sarankan untuk Istirahat, minum banyak cairan, dan biarkan sembuh dengan sendirinya" << endl;
        cout << "=======================================================================================" << endl;
        cout << "" << endl;
    }
    cout << "Apakah anda ingin mengulang program (ya/tidak): "; cin >> ulang;
    if(strcmp(ulang,"ya")==0 || strcmp(ulang,"YA")==0 || strcmp(ulang,"Ya")==0)
    {
        goto awal;
    }
    else if(strcmp(ulang,"TIDAK")==0 || strcmp(ulang,"Tidak")==0 || strcmp(ulang,"tidak")==0)
    {
        cout << "Terimakasih";
    }
}
