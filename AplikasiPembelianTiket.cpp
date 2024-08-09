#include <iostream> 
using namespace std;

int main(){

    int jenis_tiket, jenis_hari, jumlahjp1, jumlahjp2, jumlahpaket1, jumlahpaket2, jumlahEGP, total_pembelian;
    char kembali;
    double total_diskon, total_pembayaran;

        cout << "-------Jenis Tiket-------" << endl;
        cout << "1.Tiket Reguler" << endl;
        cout << "2.Tiket Terusan" << endl;
        cout << "-------------------------" << endl;
        cout << "Masukkan Jenis Tiket(1/2) = ";
        cin >> jenis_tiket;
        cout << endl;

        cout << "--------Jenis Hari-------" << endl;
        cout << "1.Weekday" << endl;
        cout << "2.Weekend" << endl;
        cout << "-------------------------" << endl;
        cout << "Masukkan Jenis Hari (1/2) = ";
        cin >> jenis_hari;
        cout << endl;

        switch (jenis_tiket) 
        {
        case 1: 
        {
            switch (jenis_hari) {
            case 1: 
                cout << "-----Harga Tiket Reguler-----" << endl
                     << "Tiket Jatim Park 1   = Rp. 70.000" << endl
                     << "Tiket Jatim Park 2   = Rp. 80.000" << endl
                     << "Tiket Eco Green Park = Rp. 50.000" << endl
                     << endl;

                cout << "Masukkan Jumlah pembelian tiket Jatim Park 1   = ";
                cin >> jumlahjp1;
                cout << "Masukkan Jumlah pembelian tiket Jatim Park 2   = ";
                cin >> jumlahjp2;
                cout << "Masukkan Jumlah pembelian tiket Eco Green Park = ";
                cin >> jumlahEGP;
                cout << endl;

                cout << jumlahjp1 << " Tiket Jatim Park 1     Rp. 70.000 = " << jumlahjp1 * 70000 << endl
                     << jumlahjp2 << " Tiket Jatim Park 2     Rp. 80.000 = " << jumlahjp2 * 80000 << endl
                     << jumlahEGP << " Tiket Eco Green Park   Rp. 50.000 = " << jumlahEGP * 50000 << endl
                     << "-------------------------------------------------------------------------" << endl;


                total_pembelian = jumlahjp1 * 70000 + jumlahjp2 * 80000 + jumlahEGP * 50000;
                cout << "Total Pembelian  = Rp. " << total_pembelian << endl;
                break;

            case 2: 
                cout << "-----Harga Tiket Reguler-----" << endl
                     << "Tiket Jatim Park 1   = Rp. 100.000" << endl
                     << "Tiket jatim Park 2   = Rp. 120.000" << endl
                     << "Tiket Eco Green Park = Rp.  70.000" << endl
                     << endl;

                cout << "Masukkan Jumlah pembelian tiket Jatim Park 1   = ";
                cin >> jumlahjp1;
                cout << "Masukkan Jumlah pembelian tiket Jatim Park 2   = ";
                cin >> jumlahjp2;
                cout << "Masukkan Jumlah pembelian tiket Eco Green Park = ";
                cin >> jumlahEGP;
                cout << endl;

                cout << jumlahjp1 << " Tiket Jatim Park 1     Rp. 100.000 = " << jumlahjp1 * 100000 << endl
                     << jumlahjp2 << " Tiket Jatim Park 2     Rp. 120.000 = " << jumlahjp2 * 120000 << endl
                     << jumlahEGP << " Tiket Eco Green Park   Rp.  70.000 = " << jumlahEGP * 70000 << endl
                     << "-------------------------------------------------------------------------" << endl;

                total_pembelian = jumlahjp1 * 110000 + jumlahjp2 * 120000 + jumlahEGP * 70000;
                cout << "Total Pembelian  = Rp. " << total_pembelian << endl;
                break;
            default: 
                cout << "Anda Salah Memilih Jenis Hari!" << endl;
                return 0;
            }
            break;
        }
        case 2: {
            switch (jenis_hari){
            case 1: 
                cout << "-----Harga Tiket Terusan-----" << endl
                     << "Paket 1 Jatim Park 1 dan Predator Fun Park = Rp.  80.000" << endl
                     << "Paket 2 Jatim Park 1 dan Eco Green Park    = Rp. 110.000" << endl
                     << endl;

                cout << "Masukkan Jumlah pembelian Tiket Paket 1    = ";
                cin >> jumlahpaket1;
                cout << "Masukkan Jumlah pembelian Tiket Paket 2    = ";
                cin >> jumlahpaket2;
                cout << endl;

                cout << jumlahpaket1 << " Tiket Paket 1   Rp.  80.000 = " << jumlahpaket1 * 80000 << endl
                     << jumlahpaket2 << " Tiket Paket 2   Rp. 110.000 = " << jumlahpaket2 * 110000 << endl
                     << "-------------------------------------------------------------------------" << endl;

                total_pembelian = jumlahpaket1 * 80000 + jumlahpaket2 * 110000;
                cout << "Total Pembelian  = Rp. " << total_pembelian << endl;
                break;

            case 2:
                cout << "-----Harga Tiket Terusan-----" << endl
                     << "Paket 1 Jatim Park 1 dan Predator Fun Park = Rp. 110.000" << endl
                     << "Paket 2 Jatim Park 1 dan Eco Green Park    = Rp. 130.000" << endl
                     << endl;

                cout << "Masukkan Jumlah pembelian Tiket Paket 1    = ";
                cin >> jumlahpaket1;
                cout << "Masukkan Jumlah pembelian Tiket Paket 2    = ";
                cin >> jumlahpaket2;
                cout << endl;
                cout << jumlahpaket1 << " Tiket Paket 1    Rp. 110.000 = " << jumlahpaket1 * 110000 << endl
                     << jumlahpaket2 << " Tiket Paket 2    Rp. 130.000 = " << jumlahpaket2 * 130000 << endl
                     << "-------------------------------------------------------------------------" << endl;

                total_pembelian = jumlahpaket1 * 110000 + jumlahpaket2 * 130000;
                cout << "Total Pembelian  = Rp. " << total_pembelian << endl;
                break;
            default: 
                cout << "Anda Salah Memilih Jenis Hari!" << endl;
                return 0;
            }
            break;
        }

        default:
            cout << "Anda Salah Memilih Jenis Tiket!" << endl;
        }

        if (total_pembelian >= 500000 && total_pembelian < 1000000) {
            total_diskon = 0.05 * total_pembelian; 
        } else if (total_pembelian >= 1000000) 
        {
            total_diskon = 0.1 * total_pembelian; 
        } else {
            total_diskon = 0; 
        }

        cout << "Total Diskon     = Rp.  " << total_diskon << endl
             << "-------------------------------------------------------------------------" << endl;
        total_pembayaran = total_pembelian - total_diskon;
        cout << "Total Pembayaran = Rp. " << total_pembayaran
             << endl;

    } 