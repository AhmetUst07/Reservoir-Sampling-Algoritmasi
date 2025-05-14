# Reservoir Sampling Algoritması
## Algoritma ne yapıyor?
Reservoir Sampling Algoritması (Rezervuar Örneklemesi); n'nin çok büyük veya bilinmeyen bir sayı olduğu n öğeden oluşan bir listeden k örneğini rastgele seçmek için kullanılan bir rastgele algoritmalar ailesidir.
-  Kategori:   Rastgele Örnekleme
1.Gerçek problemin işleyişi rastgeledir.
2.Problemin hesaplama karmaşıklığı rastgele bir değişkendir.
3.Algoritma çıktısı rastgeledir; (doğru/yanlış olabilir).

-  Çözüm Yaklaşımı:  Olasılıksal Algoritma

## Algoritma ne zaman ve neden kullanılır?
- Veri seti çok büyükse ve belleğe tamamı sığmıyorsa
- Veri akışı sürekli geliyorsa ve yalnızca bir kez okunabiliyorsa
- Sabit sayıda rastgele örnek seçilmek isteniyorsa

## Karmaşıklık Analizi
- Zaman Karmaşıklığı: O(n)
- Uzay Karmaşıklığı: O(k) , k örnekleme boyutu

## Algoritma Adımları 
1.İlk adımda, k büyüklüğünde bir "rezervuar" oluşturulur.
2.Veri akışının ilk k elemanı doğrudan rezervuara yerleştirilir.
3.Daha sonraki her i > k elemanı için:
-1/i olasılıkla bu eleman seçilir
-Eğer seçilirse, rezervuardaki rastgele bir eleman (1/k olasılıkla) yeni gelen elemanla değiştirilir
4.Algoritma, tüm veri akışı tamamlandığında sona erer ve rezervuarda kalan k eleman, orijinal veri akışının rastgele bir örneği olur.

### Kaynakça
-[1] İsdanni - Reservoir Sampling:[https://isdanni.com/reservoir_sampling_and_randomized_algorithms/#simple-algorithm](https://isdanni.com/reservoir_sampling_and_randomized_algorithms/#simple-algorithm)
-[2] GeeksForGeeks - Reservoir Sampling:[https://www.geeksforgeeks.org/reservoir-sampling/](https://www.geeksforgeeks.org/reservoir-sampling/)
