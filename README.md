<img width="1000" height="550" alt="image" src="https://github.com/user-attachments/assets/6c7c0305-290f-4498-9cef-c419b6637b0b" />

# 42 Piscine - 2025

Bu depo, **42 İstanbul** (veya ilgili kampüs) Piscine eğitimi sürecinde tamamladığım C dili ve Shell projelerini, alıştırmaları ve kütüphane çalışmalarını içermektedir.

Piscine, yazılım geliştirme temellerinin atıldığı, akran öğrenimi (peer-to-peer) metodolojisine dayalı 26 günlük yoğun bir kamp sürecidir. Bu depodaki kodlar, C dilinin temellerinden başlayıp bellek yönetimi ve pointer aritmetiğine kadar uzanan bir öğrenme eğrisini yansıtır.

---

##  İçerik Yapısı

Her klasör, ilgili modüldeki görevleri ve kazanımları içerir:

```text
42-Piscine/
├── c00/ # C00 – C diline giriş
├── c01/ # C01 – Pointer’lar ve hafıza
├── c02/ # C02 – Diziler ve stringler
├── c03/ # C03 – String fonksiyonları vs.
├── c04/ # C04 – Gelişmiş string / karakter
├── c05/ # C05 – Matematiksel işlemler / döngüler
├── c06/ # C06 – Komut satırı argümanları
├── c07/ # C07 – Dinamik hafıza
├── c08/ # C08 – Struct’lar / fonksiyon pointer’lar
├── shell00/ # Shell00 – Shell temelleri
└── shell01/ # Shell01 – Shell scripting
```

## Kullanım ve Derleme

Bu projeler **Norminette** kurallarına (42 Okulu'nun katı kod yazım standartları) uygun olarak geliştirilmiştir. Kodları derlemek için genellikle `cc` derleyicisi ve standart bayraklar kullanılır:

```bash
cc -Wall -Wextra -Werror dosya_adi.c -o program
./program
