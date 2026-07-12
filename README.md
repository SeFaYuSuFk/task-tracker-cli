# 📝 Task Tracker CLI (Görev Takip Sistemi)

Bu proje, C++ ile geliştirilmiş terminal tabanlı dinamik bir Görev Takip (To-Do List) uygulamasıdır. Kullanıcıların günlük görevlerini eklemelerine, silmelerine, `[X]` veya `[ ]` formatında durumlarını güncellemelerine ve bu verileri bilgisayarın arka planında kalıcı olarak saklamalarına olanak tanır. 

Proje süreci, versiyon kontrol sistemleri (Git/GitHub) kullanılarak yaklaşık 10 commit adımıyla tamamlanmıştır.

## 🚀 Temel Özellikler ve Algoritma Mantığı

Uygulamanın ana akışı bir `switch-case` menü yapısı üzerinden kontrol edilir. Her bir özellik, C++'ın bellek ve veri yönetim kurallarına uygun olarak tasarlanmıştır:

- **Görev Ekleme:** Kullanıcıdan alınan görevler `std::vector` içine eklenir. Birden fazla kelime içeren görevlerin (örn: "C++ tekrarı yap") kelime kaybı yaşamadan alınabilmesi için standart `cin` yerine **`getline()`** fonksiyonu kullanılmıştır.
- **Görev Listeleme:** Algoritma öncelikle listenin boş olup olmadığını kontrol eder. Eğer liste boşsa kullanıcıya bilgi verir; doluysa, paralel çalışan "durumlar" vektörünü kontrol ederek görevleri `[X]` (Tamamlandı) veya `[ ]` (Yapılmadı) kutucuklarıyla ekrana basar.
- **Görev Silme:** Hafızadan veri silme işlemi (`.erase()`) basit bir rakam değil, makine dilinin anlayacağı "fiziksel bir koordinat" ister. Bu yapı bir **tren vagonuna** benzetilebilir. `begin()` fonksiyonu ile trenin başına gidilmiş ve `0` tabanlı indeks mantığıyla istenen vagon (görev) raydan çıkarılarak tamamen silinmiştir.
- **Görev Tamamlama:** Silme işleminin aksine, burada fiziksel bir vagonu yok etmek yerine doğrudan o vagonun içindeki veriyi değiştirmek hedeflenmiştir. Bu nedenle iteratör (koordinat) kullanılmamış, `(secilenNo - 1)` formülüyle doğrudan indekse ulaşılarak durum güncellenmiştir.
- **Kalıcı Hafıza (File I/O):** Eklenen verilerin konsol kapandığında kaybolmaması için `<fstream>` kütüphanesi entegre edilmiştir. `ofstream` ile veriler `.txt` dosyasına yazılırken, `ifstream` ile program her açıldığında bu veriler otomatik olarak geri yüklenir.

## 🛠️ Kullanılan Teknolojiler ve Veri Yapıları

- **Dil:** C++
- **Kütüphaneler:** `<iostream>`, `<string>`, `<vector>`, `<fstream>`
- **Veri Yapısı (`vector`):** Projede sabit diziler (Array) yerine dinamik vektörler kullanılmıştır. Vektörler, içine ne kadar veri atılırsa o kadar esneyen bir **"elma torbası"** prensibiyle çalışır. Ancak tür güvenliği (Type Safety) gereği, string tanımlanmış bir torbaya sadece metin verisi girilebilir.

## 👨‍💻 Geliştirici Notları

Bu proje; C++ bellek yönetimi, dinamik diziler ve dosya işlemleri (File I/O) konularında ciddi bir öğrenme ve pekiştirme süreci olmuştur. `ifstream` / `ofstream` kalıplarıyla bilgisayarın diskine doğrudan müdahale etmek ve iteratör kavramını kavramak zorlayıcı ama bir o kadar da vizyon katıcıydı. 

Önümüzdeki hafta, bu projeden elde edilen tecrübelerle benzer algoritmaları daha da derinleştirecek yeni projelere yelken açılacak. YOLA DEVAM...

**Geliştirici:** Sefa Yusuf Kütük
