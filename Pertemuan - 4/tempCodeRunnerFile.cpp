        do
        {
            cout << "Masukan Batas Bilangan Ganjil : ";
            cin >> batas;
            if (batas <= 0)
            {
                cout << "Batas Bilangan harus lebih dari nol. Coba lagi." << endl;
            }
        } while (batas <= 0);
        cout << "Batas Bilangan Ganjil adalah " << batas << endl;
