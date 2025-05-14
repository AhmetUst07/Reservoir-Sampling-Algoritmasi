#include <iostream>
#include <vector>
#include <random>
#include <ctime>

using namespace std;

// Reservoir Sampling algoritması (k boyutlu örneklem alır)
vector<int> reservoirSampling(const vector<int>& stream, int k) {
    vector<int> reservoir(k);
    
    // İlk k öğeyi doğrudan rezervuara yerleştir
    int i;
    for (i = 0; i < k && i < stream.size(); i++) {
        reservoir[i] = stream[i];
    }
    
    // Kalan akışı işle
    random_device rd;
    mt19937 gen(rd());
    
    for (; i < stream.size(); i++) {
        // Rastgele bir sayı üret
        uniform_int_distribution<> dist(0, i);
        int j = dist(gen);
        
        // j, k'dan küçükse, stream[i] öğesini reservoir[j] ile değiştir
        if (j < k) {
            reservoir[j] = stream[i];
        }
    }
    
    return reservoir;
}

int main() {
    vector<int> stream;
    int element, k;
    
    cout << "Reservoir Sampling Algoritması\n";
    cout << "-------------------------------\n";
    
    // Kullanıcıdan k değerini al
    cout << "Örneklem boyutunu (k) girin: ";
    cin >> k;
    
    if (k <= 0) {
        cout << "Geçersiz örneklem boyutu! Pozitif bir sayı girin.\n";
        return 1;
    }
    
    // Kullanıcıdan dizi elemanlarını al
    cout << "\nDiziye eleman ekleyin (Bitirmek için -1 girin):\n";
    
    while (true) {
        cout << "Eleman: ";
        cin >> element;
        
        if (element == -1) {
            break;
        }
        
        stream.push_back(element);
    }
    
    if (stream.empty()) {
        cout << "Dizi boş!\n";
        return 1;
    }
    
    // k değeri akış boyutundan büyükse, tüm akışı döndür
    if (k >= stream.size()) {
        cout << "\nÖrneklem boyutu diziden büyük veya eşit. Tüm dizi döndürülüyor.\n";
        cout << "Seçilen elemanlar: ";
        for (int i = 0; i < stream.size(); i++) {
            cout << stream[i] << " ";
        }
        cout << endl;
        return 0;
    }
    
    // Reservoir sampling algoritmasını çalıştır
    vector<int> sample = reservoirSampling(stream, k);
    
    // Sonuçları göster
    cout << "\nOrijinal dizi: ";
    for (const auto& e : stream) {
        cout << e << " ";
    }
    cout << endl;
    
    cout << "Seçilen örnek (" << k << " eleman): ";
    for (const auto& e : sample) {
        cout << e << " ";
    }
    cout << endl;
    
    return 0;
}
