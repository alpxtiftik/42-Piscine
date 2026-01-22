<img width="1000" height="550" alt="image" src="https://github.com/user-attachments/assets/6c7c0305-290f-4498-9cef-c419b6637b0b" />

# 42 Piscine - 2025

Bu depo, **42 İstanbul** (veya ilgili kampüs) Piscine eğitimi sürecinde tamamladığım C dili ve Shell projelerini, alıştırmaları ve kütüphane çalışmalarını içermektedir.

Piscine, yazılım geliştirme temellerinin atıldığı, akran öğrenimi (peer-to-peer) metodolojisine dayalı 26 günlük yoğun bir kamp sürecidir. Bu depodaki kodlar, C dilinin temellerinden başlayıp bellek yönetimi ve pointer aritmetiğine kadar uzanan bir öğrenme eğrisini yansıtır.

##  İçerik Yapısı

Her klasör, ilgili modüldeki görevleri ve kazanımları içerir:

| Modül | İçerik ve Kazanımlar |
| :--- | :--- |
| **Shell00** | Temel Shell komutları, dosya izinleri, SSH anahtarları. |
| **Shell01** | Gelişmiş Shell scriptleri, çevre değişkenleri ve otomasyon. |
| **C00** | C diline giriş, `write` fonksiyonu, temel sözdizimi. |
| **C01** | Pointer kavramı, bellek adresleri, temel aritmetik ve referanslar. |
| **C02** | Diziler (arrays), string manipülasyonu ve karakter işlemleri. |
| **C03** | Standart string kütüphanesi fonksiyonlarının (`strcmp`, `strcat` vb.) yeniden yazımı. |
| **C04** | String parsing, tip dönüşümleri (`atoi` vb.) ve bellek analizi. |
| **C05** | Matematiksel algoritmalar, özyinelemeli (recursive) fonksiyonlar ve iterasyon. |
| **C06** | Komut satırı argümanları (`argc`, `argv`) ve program parametre yönetimi. |
| **C07** | Dinamik bellek yönetimi (`malloc`, `free`, `realloc`) ve bellek sızıntısı kontrolü. |
| **C08** | Header dosyaları (`.h`), makrolar ve yapılar (`struct`). |

## 🛠️ Kullanım ve Derleme

Bu projeler **Norminette** kurallarına (42 Okulu'nun katı kod yazım standartları) uygun olarak geliştirilmiştir. Kodları derlemek için genellikle `cc` derleyicisi ve standart bayraklar kullanılır:

```bash
cc -Wall -Wextra -Werror dosya_adi.c -o program
./program
