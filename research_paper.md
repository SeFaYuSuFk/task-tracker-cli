# 📊 C++ Veri Yapıları ve Hafıza Yönetimi

Bu doküman, yazılım projelerinde verilerin nasıl saklanacağına ve yönetileceğine dair temel mimari kararları incelemektedir. İki ana başlık altında veri yapıları (Array vs. Vector) ve depolama birimleri (RAM vs. HDD/SSD) karşılaştırılmıştır.

---

## BÖLÜM 1: Veri Boyutlandırma (Array vs. Vector)

Verileri hafızada tutmak için kullanılan bu iki temel yapı arasındaki seçim, projenin veri boyutuna ve esneklik ihtiyacına göre belirlenir.

### 1. Veri Boyutunun Belirliliği
* **Array (Sabit Dizi):** Boyutu program derlenmeden önce belirlenmek zorundadır ve sonradan asla değiştirilemez. 
  > *Örnek Senaryo:* "En Büyük Sayıyı Bulma" gibi algoritmik projelerde (örneğin sadece 10 sayının kıyaslanacağı biliniyorsa) Array kullanmak hızlı ve mantıklıdır.
* **Vector (Dinamik Dizi):** Boyutu değişkendir. İçine veri eklendikçe hafızada otomatik olarak genişler.
  > *Örnek Senaryo:* "Görev Takip Sistemi" projesinde olduğu gibi, kullanıcının sisteme kaç adet görev gireceğinin önceden bilinemediği durumlarda (dinamik esneklik gerektiğinde) Vector kullanılması zorunludur.

### 2. Bellek Yönetimi ve Performans
* **Array Performansı:** Hafızada tek bir sabit blok halinde yer ayırır. Çalışma hızı çok yüksektir ancak ihtiyaçtan fazla yer ayrılırsa bellek israfına (Memory Waste) yol açar.
* **Vector Esnekliği:** Arka planda hafızayı dinamik olarak yönetir. Veri arttıkça kendine yeni alanlar açar. Terabaytlarca verinin işlendiği büyük sistemlerde bu esnek bellek yönetimi hayati önem taşır.

---

## BÖLÜM 2: Kalıcılık (Bellekte Tutmak vs. Dosyaya Kaydetmek)

Bir programın verileri nerede ve ne kadar süreyle tutacağı, o programın amacını belirleyen en önemli unsurdur. 

### 1. Bellekte Veri Tutmak (Geçici Hafıza - RAM)
Verilerin sadece program çalıştığı süre boyunca **RAM (Random Access Memory)** üzerinde tutulmasıdır.
* **Çalışma Mantığı:** Konsol açılır, kodlar okunur, RAM'den geçici bir alan tahsis edilir, işlemler yapılır ve çıktı verilir. Konsol (program) kapatıldığı an RAM o alanı temizler ve veriler sonsuza dek silinip gider.
* **Kullanım Yeri:** Sadece anlık hesaplama gerektiren, geçmişe dönük bir kayıt tutulmasına ihtiyaç duyulmayan küçük çaplı projelerde (Örn: Geçtiğimiz haftalardaki temel algoritma egzersizleri) kullanılır.

### 2. Dosyaya Veri Kaydetmek (Kalıcı Hafıza - File I/O)
Verilerin bilgisayarın kalıcı depolama birimlerine (**HDD veya SSD**) fiziksel bir dosya (örneğin `.txt`) olarak yazılmasıdır.
* **Çalışma Mantığı:** Program, verileri sadece RAM'de tutmakla kalmaz, aynı zamanda sabit diske kazır. Program veya bilgisayar kapatılsa bile veriler orada kalır ve istendiği zaman tekrar okunabilir.
* **Kullanım Yeri:** Kullanıcının geçmiş verilerine tekrar ulaşması gereken projelerde kullanılır. (Örn: Bu hafta geliştirdiğimiz `task-tracker-cli` projesinde her adımın kaydedilip, program tekrar açıldığında geri yüklenmesi gibi).

**Özetle:** Bellek (RAM) anlık düşünme ve işlem yapma alanımızken, Dosya (HDD/SSD) hiçbir şeyi unutmayan defterimizdir.

---
**Geliştirici:** Sefa Yusuf Kütük