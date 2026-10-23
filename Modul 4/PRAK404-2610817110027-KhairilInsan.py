print("Pilih program")
print("1. Penjumlahan")
print("2. Pengurangan")
print("3. Perkalian")
print("4. Pembagian")
print("5. Keluar")
command = ""

while command != "5":
    command = input("Masukkan Pilihan: ")
    if command == "1":
        a = float(input("Masukkan nilai pertama: "))
        b = float(input("Masukkan nilai kedua: "))
        addition = a + b
        print(
            f"Hasil Penjumlahan antara {a:.2f} dengan {b:.2f} adalah {addition:.2f}")
    elif command == "2":
        a = float(input("Masukkan nilai pertama: "))
        b = float(input("Masukkan nilai kedua: "))
        subtraction = a - b
        print(
            f"Hasil Pengurangan antara {a:.2f} dengan {b:.2f} adalah {subtraction:.2f}")
    elif command == "3":
        a = float(input("Masukkan nilai pertama: "))
        b = float(input("Masukkan nilai kedua: "))
        multiplication = a * b
        print(
            f"Hasil Perkalian antara {a:.2f} dengan {b:.2f} adalah {multiplication:.2f}")
    elif command == "4":
        a = float(input("Masukkan nilai pertama: "))
        b = float(input("Masukkan nilai kedua: "))
        division = a / b
        print(
            f"Hasil Pembagian antara {a:.2f} dengan {b:.2f} adalah {division:.2f}")
    elif command == "5":
        print("Terimakasih, telah menggunakan kalkulator KHAIRIL INSAN")
    else:
        print("Input anda salah, silahkan coba lagi")
