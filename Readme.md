# Reservoir Sampling Algoritması
## Algoritma ne yapıyor?
Reservoir Sampling Algoritması (Rezervuar Örneklemesi); n'nin çok büyük veya bilinmeyen bir sayı olduğu n öğeden oluşan bir listeden k örneğini rastgele seçmek için kullanılan bir rastgele algoritmalar ailesidir.
-  Kategori:   Rastgele Örnekleme
1. Gerçek problemin işleyişi rastgeledir.
2. Problemin hesaplama karmaşıklığı rastgele bir değişkendir.
3. Algoritma çıktısı rastgeledir; (doğru/yanlış olabilir).
-  Çözüm Yaklaşımı:  Olasılıksal Algoritma

## Algoritma ne zaman ve neden kullanılır?
- Veri seti çok büyükse ve belleğe tamamı sığmıyorsa
- Veri akışı sürekli geliyorsa ve yalnızca bir kez okunabiliyorsa
- Sabit sayıda rastgele örnek seçilmek isteniyorsa

## Karmaşıklık Analizi
- Zaman Karmaşıklığı: O(n)
- Uzay Karmaşıklığı: O(k) , k örnekleme boyutu

## Algoritma Adımları 
1. İlk adımda, k büyüklüğünde bir "rezervuar" oluşturulur.
2. Veri akışının ilk k elemanı doğrudan rezervuara yerleştirilir.
3. Daha sonraki her i > k elemanı için:
-1/i olasılıkla bu eleman seçilir
-Eğer seçilirse, rezervuardaki rastgele bir eleman (1/k olasılıkla) yeni gelen elemanla değiştirilir
4. Algoritma, tüm veri akışı tamamlandığında sona erer ve rezervuarda kalan k eleman, orijinal veri akışının rastgele bir örneği olur.

## Nerelerde Kullanılır
1. Büyük Veri Analizi: Veri setinin tamamını belleğe sığdıramadığımız durumlarda istatistiksel örnekleme yapmak için kullanılır.
2. Veri Akışı İşleme (Stream Processing): Sürekli akan ve sonu bilinmeyen verilerden örnekleme yapmak için idealdir.
3. Veritabanı Sistemleri: Büyük sorgular üzerinde rastgele örnekleme yapmak için kullanılır.
4. Web Analitikleri: Yüksek trafikli web sitelerindeki kullanıcı davranışlarından örnekler toplamak için kullanılır.
5. Makine Öğrenmesi: Eğitim verisi oluşturmak veya veri dengesizliğini gidermek için kullanılır
6. Sosyal Ağ Analizleri: Geniş grafiklerde rastgele düğümler seçmek için kullanılır.
7. Sensör Ağları: Sürekli veri toplayan sensörlerden rastgele örnekler almak için kullanılır.
8. Dağıtık Sistemler: Farklı kaynaklardan gelen verileri birleştirirken örnekleme yapmak için kullanılır.
9. Log Analizi: Büyük log dosyalarından rastgele örnekler çıkarmak için kullanılır.
10. Monte Carlo Simülasyonları: Rastgele örnekleme gerektiren simülasyonlarda kullanılır.

## Avantaj ve Dezavantajları
#### Avantaj
1. Tek Geçişli İşlem: Veri akışı üzerinde yalnızca bir kez geçiş yaparak çalışır, bu da zaman açısından verimlidir.
2. Sabit Bellek Kullanımı: Veri akışının boyutu ne olursa olsun, yalnızca k elemanlık bir bellek alanı gerektirir.
3. Boyut Bilinmeme Durumu: Veri akışının toplam boyutunu önceden bilmeye gerek yoktur.
4. Eşit Olasılık Garantisi: Akıştaki her elemanın final örneklemede bulunma olasılığı eşittir.
5. Esneklik: Algoritma, akış devam ederken bile örnek boyutunu değiştirebilecek şekilde uyarlanabilir
6. Paralelleştirilebilir: Farklı kaynaklardan gelen verilere uygulanıp sonuçlar birleştirilebilir.
7. Basitlik: Uygulama açısından oldukça basit ve anlaşılırdır.

#### Dezavantajları 
1. Rastgele Erişim Eksikliği: Belirli kriterlere göre örnekleme yapmak için uygun değildir.
2. Dinamik Ağırlıklandırma Zorluğu: Farklı elemanların farklı önem derecelerine sahip olduğu durumlarda doğrudan uygulanamaz.
3. Dağıtık Sistemlerde Koordinasyon: Dağıtık uygulamalarda, global bir görüş elde etmek için ek koordinasyon gerektirir.
4. Ek İşlem Gerektiren Durumlar: Sıralı örnekleme veya katmanlı örnekleme gibi özel örnekleme türleri için ek adımlar gerektirir.
5. Rastgelelik Bağımlılığı: İyi bir rastgele sayı üreteci gerektirir, zayıf rastgelelik algoritmanın etkinliğini azaltabilir.
6. Zamansal Locallik Kayıpları: Veri akışının zamansal özellikleri önemliyse, tamamen rastgele örnekleme bu bilgiyi kaybedebilir.
7. Geri Dönüş İmkansızlığı: Akış ilerledikçe, daha önce atlanan öğelere geri dönülemez.


### Kaynakça
-[1] İsdanni - Reservoir Sampling:[https://isdanni.com/reservoir_sampling_and_randomized_algorithms/#simple-algorithm](https://isdanni.com/reservoir_sampling_and_randomized_algorithms/#simple-algorithm)

-[2] GeeksForGeeks - Reservoir Sampling:[https://www.geeksforgeeks.org/reservoir-sampling/](https://www.geeksforgeeks.org/reservoir-sampling/)

-[3] Wikipedia - Reservoir Sampling:[https://en.wikipedia.org/wiki/Reservoir_sampling]
(https://en.wikipedia.org/wiki/Reservoir_sampling)

