# MİNİTALK
## Detaylar
client.c: İstemci süreci, send_bit fonksiyonu aracılığıyla her bir karakteri bit seviyesinde sunucuya ileterek çalışır.

server.c: Sunucu, gelen her biti yakalar ve tam bir karakter oluşturduğunda ekrana yazdırır. bit_handler fonksiyonu, SIGUSR1 ve SIGUSR2 sinyallerini işleyerek her bir bitin alınmasını sağlar.
