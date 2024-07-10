# MİNİTALK
## Detaylar
client.c: istemci (client) programı, sunucuya (server) mesaj göndermek için kullanılan bir bileşendir. İstemci, belirli bir PID'ye sahip olan sunucuya sinyaller göndererek veriyi bit düzeyinde iletir. 

server.c: Sunucu(server), gelen her biti yakalar ve tam bir karakter oluşturduğunda ekrana yazdırır. bit_handler fonksiyonu, SIGUSR1 ve SIGUSR2 sinyallerini işleyerek her bir bitin alınmasını sağlar.

## Kullanım

Repo'yu clone'layın:

```bash
git clone 
```

Makefile'ı kullanarak source kodu derleyin:
```bash
make
```

>2 executable file oluşmaktadır: `client` ve `server`.

`server` dosyasını çalştırarak server'ı başlatın:
```bash
./server
```

>Server'ın process id'si (PID) terminalde gözükür.

Başka bir terminal penceresinde, server'ın PID'si ve iletmek istediğiniz mesajla 'client' dosyasını çalıştırarak client'ı başlatın:

```bash
./client <server_pid> <message>
```

> `<server_pid>` kısmını server tarafından görüntülenen PID ile ve `<message>` kısmını göndermek istediğiniz metin ile değiştirin.

