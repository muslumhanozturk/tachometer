# Takometre

Bu proje, takometre olarak kullanılan CNY70 kontrast ölçer elemanını içerir. Bu dosyada, takometre hakkında önemli bilgileri bulabilirsiniz.

## Özellikler

- CNY70, kolaylıkla bulunabilen bir kontrast ölçer elemanıdır.
- Sensörün motor döner aksamına yaklaşık 1cm mesafede olması gerekmektedir.
- Motor döner aksamının tamamının siyah renk olması ve üzerinde beyaz bir şerit bulunması gerekmektedir.

## Hassasiyet Ayarı

- `CNY70`'in hassasiyetini artırmak için 100K direnç değerini arttırabilirsiniz.
- Hassasiyeti azaltmak için ise direnç değerini azaltmanız gerekmektedir.

## LCD Bağlantısı

- LCD modülü, PIC mikrodenetleyicinin hemen üzerinde yer almaktadır.
- Ekran besleme pininin doğrudan şaseye bağlanması bazı durumlarda ekranın doyuma gitmesine neden olabilir. Bu durumu engellemek için şase ile besleme pin arasına 10K direnç bağlayabilirsiniz.

## Yazılım

- Yazılım, CCS C programlama dili kullanılarak geliştirilmiştir.
- Devir algılama işlemi, capture özelliği kullanılarak gerçekleştirilmiştir.


