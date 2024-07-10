# MİNİTALK
## Detaylar
client.c: istemci (client) programı, sunucuya (server) mesaj göndermek için kullanılan bir bileşendir. İstemci, belirli bir PID'ye sahip olan sunucuya sinyaller göndererek veriyi bit düzeyinde iletir. 

server.c: Sunucu(server), gelen her biti yakalar ve tam bir karakter oluşturduğunda ekrana yazdırır. bit_handler fonksiyonu, SIGUSR1 ve SIGUSR2 sinyallerini işleyerek her bir bitin alınmasını sağlar.
