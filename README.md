# 42-Kocaeli-C-Piscine
C Piscine 42 Kocaeli

Merhaba eğer projenizde her şeyi kavradığınızdan TAMAMEN eminseniz aşağıdaki yollarla yollacağınız dosyanın içine girerek projenizi pushlayabilirsiniz.

dosyaismi -> burayaistediğiniz şeyi girebilirsiniz. ama yazdığım yerlere yanlış olmadan doğru şekilde aynı şeyi yazmalısınız.
gitrepolinki -> intra'daki pushlamanıza yarayan adres.


git init
git add .
git commit -m "dosyaismi"
git remote add "dosyaismi" gitrepolinki
git push --set-upstream dosyaismi master

Değerlendirmeye gittinizde ise projeyi çekmek için(Bulunduğunuz konuma dosyaismi adında klasörü çeker);
git clone gitrepolinki dosyaismi 

Projelerde ilerlemeniz kadar sınavlarda yüksek bir öneme sahiptir.Sınava girmek için;

1-Login ve password kısmına exam exam yazarak bilgisayarımızı açıyoruz.
2-Terminali açıyoruz ve examshell yazıyoruz.
3-Yazdıktan sonra isim ve şifremizi girip(şifre gözükmez) karşımıza gelen sorulara yes ve y diyerek sınava giriyoruz.
4-İşlemleri doğru uyguladıysanız şu an sınava başarılı bir şekilde girmişsiniz demektir.
5-Farklı terminal açıp cevapları içine yazacağımız rendu klasörüne giriyoruz.Buraya soru ismi ile klasör oluşturup içine soru dosyanını oluşturup cevabını içine yazmamız gerekiyor.
6-Soruları görmek için subject klasörüne giriyoruz.Hangi sorudaysak o klasöre girip istediğiniz dilde soruya erişebilirsiniz.
7-Örneğin; cd rendu ile klasöre giriyoruz -> mkdir only_a -> cd only_a -> touch only_a -> vim only_a -> Cevap yazılır ve çıkılır.
8-Soruyu doğru bir şekilde yaptıktan emin olduktan sonra pushlamak için rendu klasörü içinde aşağıdaki komutları sırasıyla yazıyoruz;
git add .
git commit -m "herhangibirsey"
git push
9-Sonrasında ana terminale gelip grademe diyerek sonucumuzu değerlendiriyoruz.Success alırsanız yeni soruya geçebilirsiniz.
10-Durumunuzu ve sürenizi görmek için ana terminale status yazabilirsiniz.
11-Sınavdan çıkmak isterseniz ana terminale finish yazarak sınavı bitirebilirsiniz.
