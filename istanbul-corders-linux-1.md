# Basic
- pwd print working directory (bulunduğumuz dizini yazdırır.)
- ls list
- mkdir make directory (klasör oluştur.)
- ls -l verbose long (ayrıntılı uzun bir şekilde listele.) (verbose ayrıntılı demek.)

# Linuxun güçlü yönleri (magic kısmı)
- klavye bir girdi ekran bir çıktı cihazı dosya da bir çıktı yeridir.
- ">" operatörü ile redirect yapıyoruz echo programını yönlendiriyoruz.
- "$?" ile bash üzerinde son çalıştırılan programın exit code bilgisini verir.
- exit code programların çıkış değeridir ve exit code 0 başarılı demektir.
- cat magic-file , more magic-file, less magic-file, nano magic-file, (vi or vim) magic-file, 
- C de bir program yazalım . Kullanıcıdan iki sayı alsın toplamını yazsın bu program ile
    işletim sisteminin etkileşimini inceleyerek öğrenelim.

- yazdığımız my-prog.c kodunu derliyoruz main functionuna 1 değerini return etmesini söyledik.
- echo $? kodu ile son çalıştırdığımız programın exit codeuna baktığımızda 1 değerini görmüş olduk
- Bunu nerede kullanabiliriz. Yazdığımız bir sistemi otomatize ederken kullanabiliriz.
- Linux demek otomatize etmek demektir.

- yazdığımız kodun içerisinde değişiklikler yaparak meseleyi açıyoruz. Programın istediğimiz gibi
    çalışmaması durumunda istediğimiz hata code larını return edebiliyoruz. Http deki gibi bir
    standartı olmasada, kabul gören belli değerler bulunmakta.

- linux içerisinde herşey bir dosyadır. 