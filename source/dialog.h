#include "animation.h"

void chat(int y, int x,
  const char * text, int delay) {
  for (int i = 0; text[i] != '\0'; i++) {
    mvprintw(y, x + i, "%c", text[i]);
    refresh();
    napms(delay);
  }
}

void clearleft() {
  for (int y = 0; y < LINES; y++) {
    move(y, 0);
    for (int x = 0; x < COLS / 2; x++) {
      addch(' ');
    }
  }
}

void dialog001() {
  chat(20, 75, "Chapter 1 ~ Scorpius", 240);
  napms(2500);
  clear();
}

void dialog002() {
  chat(20, 8, "Suara gemuruh kegaduhan terdengar, diikuti hentakan langkah kaki yang terburu-buru.", 42);
  napms(1000);
  chat(22, 8, "Damian baru saja tiba di depan kandang sapi milik pamannya dengan napas tersenggal-senggal.", 42);
  napms(1000);
  clear();
  Damian();
  mvprintw(16, 8, "Damian");
  chat(20, 8, "Huh, lagi? Kemarin domba milik Ny. Grace yang hilang.", 42);
  napms(1000);
  chat(22, 8, "Sekarang sapi milikmu juga?", 42);
  napms(1000);
  clearleft();
  mvprintw(16, 8, "Damian");
  chat(20, 8, "Siapa sebenarnya gerangan orang gila yang mencuri", 42);
  chat(21, 8, "harta di tanah gersang kita?", 42);
  napms(1000);
  clear();
}

void dialog003() {
  PamanSam();
  mvprintw(16, 8, "Paman Sam");
  chat(20, 8, "Siapa pun orangnya, kuharap dia dikirim ke dalam kubur!", 42);
  napms(1000);
  chat(22, 8, "Maukah kau mencarinya untukku, Damian?", 42);
  napms(1000);
  clear();
}

void dialog004() {
  Damian();
  mvprintw(16, 8, "Damian");
  chat(20, 8, "Tentu saja, Paman Sam.", 42);
  napms(1000);
  chat(22, 8, "Biarkan aku mencari pencuri licik itu untuk aku kirim", 42);
  chat(23, 8, "ke dalam kubur!", 42);
  napms(1000);
  clearleft();
  mvprintw(16, 8, "Damian");
  chat(20, 8, "Tapi ini sedikit aneh.", 42);
  napms(1000);
  chat(22, 8, "Bagaimana pencuri itu bisa mencuri tiga sapi sekaligus?", 42);
  napms(1000);
  clearleft();
  mvprintw(16, 8, "Damian");
  chat(20, 8, "Apa pencuri itu tidak sendirian?", 42);
  napms(1000);
  clear();
}

void dialog005() {
  PamanSam();
  mvprintw(16, 8, "Paman Sam");
  chat(20, 8, "Bisa jadi, Damian.", 42);
  napms(1000);
  chat(22, 8, "Kudengar Tn. John juga kehilangan lima ekor ayamnya", 42);
  chat(23, 8, "semalam, dan ada yang membuatku heran.", 42);
  napms(1000);
  clearleft();
  mvprintw(16, 8, "Paman Sam");
  chat(20, 8, "Tidak ada seorang pun yang mendengar suara ayam malam", 42);
  chat(21, 8, "itu, atau juga jejak kaki di sekitar kandangnya.", 42);
  napms(1000);
  chat(23, 8, "Nah, sekarang beritahu aku bagaimana pencuri--", 42);
  napms(1000);
  clear();
}

void dialog006() {
  PamanSam();
  mvprintw(16, 8, "Paman Sam");
  chat(20, 8, "EH LIHAT!", 90);
  napms(1200);
  chat(22, 8, "SIAPA ORANG-ORANGAN SAWAH YANG MAU MENYISIR", 90);
  chat(23, 8, "GANDUM MILIK TN. PETER?!", 90);
  napms(1200);
  clear();
}

void dialog007() {
  Damian();
  mvprintw(16, 14, "Damian");
  chat(20, 14, "Itu bukan orang, tetapi sesuatu itu MENYERUPAI ORANG!", 90);
  napms(1200);
  chat(22, 14, "Ayo ambil sabit dan kapak besimu untuk melawan mereka!", 90);
  napms(1200);
  clear();
}

void dialog008() {
  PamanSam();
  mvprintw(16, 14, "Paman Sam");
  chat(20, 14, "Pertarungan barusan sangat luar biasa, Nak!", 42);
  napms(1000);
  chat(22, 14, "Hei, beri tahu aku bagaimana bisa sebuah sabit tua dan", 42);
  chat(23, 14, "kapak besi berkarat dapat mencabik-cabik makhluk aneh tadi?", 42);
  napms(1000);
  clear();
  Damian();
  mvprintw(16, 14, "Damian");
  chat(20, 14, "A-aku juga tidak mengerti, Paman Sam.", 42);
  napms(1000);
  chat(22, 14, "Tubuhku bergerak sendiri, seperti ada yang mengarahkanku....", 42);
  napms(1000);
  clear();
  PamanSam();
  mvprintw(16, 14, "Paman Sam");
  chat(20, 14, "HAHAHAHAH!", 42);
  napms(1000);
  chat(22, 14, "Maksudmu, kau punya kekuatan dahsyat yang tersembunyi di dalam", 42);
  chat(23, 14, "dirimu semacam autopilot yang berkelahi melawan bahaya, begitu?", 42);
  napms(1000);
  clearleft();
  mvprintw(16, 14, "Paman Sam");
  chat(20, 14, "Ayolah Anak Muda, simpan dulu lelucon konyolmu itu!", 42);
  napms(1000);
  clear();
  Damian();
  mvprintw(16, 14, "Damian");
  chat(20, 14, "Hei, ini bukan lelucon tahu, ini sungguhan!", 42);
  napms(1000);
  chat(22, 14, "Lihatlah ke sebelah utara arah jam dua belas, di sana ada", 42);
  chat(23, 14, "sesepuh desa ini, Ketua Henry.", 42);
  napms(1000);
  clearleft();
  mvprintw(16, 14, "Damian");
  chat(20, 14, "Beliau pasti datang untuk menjawab semua kebingungan kita!", 42);
  napms(1000);
  clear();
  KetuaHenry();
  mvprintw(16, 14, "Ketua Henry");
  chat(20, 14, "Ohoo... Anak Muda dengan pamannya yang sedang kebingungan.", 42);
  napms(1000);
  chat(22, 14, "Aku sudah mendengar keluhan Ny. Grace dengan dombanya, atau", 42);
  chat(23, 14, "Tn. John dengan lima ekor ayamnya, dan penduduk lainnya juga.", 42);
  napms(1000);
  clearleft();
  mvprintw(16, 14, "Ketua Henry");
  chat(20, 14, "Aku bahkan baru saja menyaksikan secara langsung kau dengan", 42);
  chat(21, 14, "sabit dan kapak tua yang sudah seperti rumah reyot itu berhasil", 42);
  chat(22, 14, "memusnahkan kaki tangan dari pencurian massal dan berantai ini.", 42);
  napms(1000);
  chat(24, 14, "Sungguh menakjubkan!", 42);
  napms(1000);
  clearleft();
  mvprintw(16, 14, "Ketua Henry");
  chat(20, 14, "Ah, ya, mau kuberi tahu sesuatu, Anak Muda?", 42);
  napms(1000);
  clear();
}

void dialog009() {
  PamanSam();
  mvprintw(16, 14, "Paman Sam");
  chat(20, 14, "Tolong langsung katakan apa yang sebenarnya terjadi, Ketua.", 42);
  napms(1000);
  chat(22, 14, "Aku tahu kau sudah tahu apa yang sebenarnya terjadi.", 42);
  napms(1000);
  clear();
}

void dialog010() {
  KetuaHenry();
  mvprintw(16, 14, "Ketua Henry");
  chat(20, 14, "Raja Iblis bangkit, dan hanya Damian yang dapat mengalahkannya.", 42);
  napms(1000);
  chat(22, 14, "Di suatu tempat, di ujung gelap, di mana angsa-angsa berlomba", 42);
  chat(23, 14, "hingga berdarah-darah.", 42);
  napms(1000);
  clearleft();
  mvprintw(16, 14, "Ketua Henry");
  chat(20, 14, "Carilah tempat itu dan kalahkan Raja Iblis!", 42);
  napms(1000);
  chat(22, 14, "Dengar anak muda, nasib seluruh penduduk desa ada di tanganmu.", 42);
  napms(1000);
  clearleft();
  mvprintw(16, 14, "Ketua Henry");
  chat(20, 14, "Putuskanlah dengan bijak dan aku akan pergi.", 42);
  napms(1000);
  chat(22, 14, "Selamat tinggal....", 42);
  napms(1000);
  clear();
  PamanSam();
  mvprintw(16, 14, "Paman Sam");
  chat(20, 14, "Tch, bukannya menjelaskan malah membuatku semakin bingung!", 42);
  napms(1000);
  chat(22, 14, "Dan apa maksudnya angsa berdarah-darah itu?", 42);
  napms(1000);
  chat(24, 14, "Memangnya apa ada sebuah tempat penjagalan angsa?", 42);
  napms(1000);
  clearleft();
  mvprintw(16, 14, "Paman Sam");
  chat(20, 14, "Hei Damian, menurutmu bagaimana?", 42);
  napms(1000);
  clear();
  Damian();
  mvprintw(16, 14, "Damian");
  chat(20, 14, "Di suatu tempat, di ujung gelap....", 42);
  napms(1000);
  chat(22, 14, "Mungkin kata itu merujuk pada lokasi yang gelap, yang terlihat", 42);
  chat(23, 14, "tertentu pada waktu tertentu, mungkin bisa kita asumsikan", 42);
  chat(24, 14, "tempat di ujung gelap ini sebagai malam.", 42);
  napms(1000);
  clearleft();
  mvprintw(16, 14, "Damian");
  chat(20, 14, "Kemudian Ketua Henry berkata angsa yang berlomba dan", 42);
  chat(21, 14, "memerintahkanku mencari sebuah tempat.", 42);
  napms(1000);
  chat(23, 14, "Paman Sam, kita semua sudah tahu bahwa wilayah utara", 42);
  chat(24, 14, "pada negeri ini adalah Cygnus.", 42);
  napms(1000);
  clear();
  PamanSam();
  mvprintw(16, 14, "Paman Sam");
  chat(20, 14, "Ya, aku tahu.", 42);
  napms(1000);
  chat(22, 14, "Lalu bagaimana sekarang?", 42);
  napms(1000);
  clear();
  Damian();
  mvprintw(16, 14, "Damian");
  chat(20, 14, "Di negeri ini terdapat empat wilayah dan semuanya dinamai", 42);
  chat(21, 14, "dengan nama-nama rasi bintang.", 42);
  napms(1000);
  chat(23, 14, "Di desa kita, wilayah bagian barat dinamai dengan Scorpius.", 42);
  napms(1000);
  clearleft();
  mvprintw(16, 14, "Damian");
  chat(20, 14, "Kemudian wilayah timur adalah Orion, wilayah utara adalah Cygnus,", 42);
  chat(21, 14, "dan wilayah selatan adalah Crux.", 42);
  napms(1000);
  chat(23, 14, "Menurut mitologi Yunani, Cygnus berarti adalah angsa.", 42);
  napms(1000);
  clearleft();
  mvprintw(16, 14, "Damian");
  chat(20, 14, "Maka begitulah kesimpulanku.", 42);
  napms(1000);
  chat(22, 14, "Apa aku harus pergi ke Cygnus dan mengalahkan Raja Iblis di sana?", 42);
  napms(1000);
  clear();
  PamanSam();
  mvprintw(16, 14, "Paman Sam");
  chat(20, 14, "Ya, tentu saja.", 42);
  napms(1000);
  chat(22, 14, "Pergilah Anak Muda, semoga keberuntungan selalu menyertaimu!", 42);
  napms(1000);
  clear();
}

void dialog011() {
  chat(20, 76, "Chapter 2 ~ Cygnus", 240);
  napms(2500);
  clear();
}

void dialog012() {
  chat(20, 14, "Akhirnya Damian memutuskan untuk mengalahkan Raja Iblis.", 42);
  napms(1000);
  chat(22, 14, "Dengan jaket rajut yang dibuatkan Ny. Grace dan bekal yang diberikan Paman Sam, Damian berangkat menyusuri wilayah utara.", 42);
  napms(1000);
  clear();
  chat(20, 14, "Tempat di mana angsa-angsa berlomba dengan kereta apolo.", 42);
  napms(1000);
  clear();
  chat(20, 14, "Damian terus berjalan ditemani hamparan rumput hijau milik Cygnus yang terlihat segar dan asri.", 42);
  napms(1000);
  chat(22, 14, "Sebuah tanah yang makmur dan kaya raya.", 42);
  napms(1000);
  clear();
  chat(20, 14, "Mata elang Damian tidak sengaja menangkap sosok perempuan dengan gaun peach di ujung jalan.", 42);
  napms(1000);
  chat(22, 14, "Melihatnya seperti sedang kesulitan, Damian datang menghampiri.", 42);
  napms(1000);
  clear();
  Damian();
  mvprintw(16, 14, "Damian");
  chat(20, 14, "Permisi Nona, sepertinya kau sedang kesulitan dengan keranjang", 42);
  chat(21, 14, "berisi pai susu yang rusak itu.", 42);
  napms(1000);
  chat(23, 14, "Mau aku bantu?", 42);
  napms(1000);
  clear();
  chat(20, 14, "Nona bergaun peach hanya terdiam.", 42);
  napms(1000);
  chat(22, 14, "Mata birunya menatap kosong keranjang rusak dengan pai susu yang kotor berserakan.", 42);
  napms(1000);
  clear();
  Damian();
  mvprintw(16, 14, "Damian");
  chat(20, 14, "Hei, Nona bergaun peach, apa kau baik-baik saja?", 42);
  napms(1000);
  clear();
  chat(20, 14, "Damian mencoba mengguncang pelan bahu Nona bergaun peach sehingga dia sadar dari lamunannya.", 42);
  napms(1000);
  clear();
  Emma();
  mvprintw(16, 14, "Emma");
  chat(20, 14, "A-ah... m-maaf!", 42);
  napms(1000);
  chat(22, 14, "K-kau siapa?!", 42);
  napms(1000);
  clearleft();
  mvprintw(16, 14, "Emma");
  chat(20, 14, "Apa kau komplotan makhluk aneh yang menjarah domba-domba kami?!", 42);
  napms(1000);
  clear();
  chat(20, 14, "Dengan panik Nona bergaun peach memunguti pai susu dan bersiap pergi.", 42);
  napms(1000);
  chat(22, 14, "Tetapi, dengan cepat Damian mencekal pergelangan tangannya.", 42);
  napms(1000);
  clear();
  Damian();
  mvprintw(16, 14, "Damian");
  chat(20, 14, "Tenang dulu Nona, tarik nafas yang dalam lalu hembuskan.", 42);
  napms(1000);
  chat(22, 14, "Kau harus tahu aku bukan komplotan makhluk aneh itu, tenanglah.", 42);
  napms(1000);
  clear();
  chat(20, 14, "Nona bergaun peach menghela napas, mencoba menenangkan dirinya.", 42);
  napms(1000);
  chat(22, 14, "Satu kali... dua kali....", 42);
  napms(1000);
  chat(24, 14, "Dan pada hembusan ketiga, Nona bergaun peach mulai bercerita.", 42);
  napms(1000);
  clear();
  Emma();
  mvprintw(16, 14, "Emma");
  chat(20, 14, "Maaf karena asal menuduhmu yang tidak-tidak, Tuan.", 42);
  napms(1000);
  clear();
  Damian();
  mvprintw(16, 14, "Damian");
  chat(20, 14, "Kurasa kita seumuran dan aku yakin wajahku belum", 42);
  chat(21, 14, "setua itu untuk dipanggil Tuan.", 42);
  napms(1000);
  chat(23, 14, "Aku Damian, Damian Armstrong lebih tepatnya.", 42);
  napms(1000);
  clearleft();
  mvprintw(16, 14, "Damian");
  chat(20, 14, "Dan kau?", 42);
  napms(1000);
  clear();
  Emma();
  mvprintw(16, 14, "Emma");
  chat(20, 14, "Emmanuel Rosaline.", 42);
  napms(1000);
  chat(22, 14, "Orang-orang di desa ini memanggilku Emma, katanya itu nama", 42);
  chat(23, 14, "kesayangan yang terdengar cukup imut.", 42);
  napms(1000);
  clearleft();
  mvprintw(16, 14, "Emma");
  chat(20, 14, "Kau juga boleh menggunakannya.", 42);
  napms(1000);
  clear();
  Damian();
  mvprintw(16, 14, "Damian");
  chat(20, 14, "Er... baiklah Emma.", 42);
  napms(1000);
  chat(22, 14, "Jadi, apakah kau butuh bantuan untuk pai susu yang", 42);
  chat(23, 14, "sudah tidak karuan bentuknya itu?", 42);
  napms(1000);
  clearleft();
  mvprintw(16, 14, "Damian");
  chat(20, 14, "Atau untuk makhluk aneh yang kau sebutkan tadi?", 42);
  napms(1000);
  clear();
  Emma();
  mvprintw(16, 14, "Emma");
  chat(20, 14, "Ya, tentu saja untuk keduanya.", 42);
  napms(1000);
  chat(22, 14, "Pertama, bantulah aku membawa pai susu ini.", 42);
  napms(1000);
  chat(24, 14, "Selanjutnya akan aku ceritakan nanti setelah tiba di rumah.", 42);
  napms(1000);
  clear();
}

void dialog013() {
	chat(20, 14, "Damian membantu Emma membawa pai susu itu menuju rumah Emma dengan hening dan suara angin sepoi-sepoi mengiringi mereka.", 42);
	napms(1000);
	clear();
	chat(20, 14, "Perjalanan yang sunyi itu berakhir dengan Damian yang terkejut melihat pemandangan di hadapannya.", 42);
	napms(1000);
	clear();
	chat(20, 14, "Terlihat sebuah rumah, taman bunga edelweis, dan kandang domba tua dengan suasana yang muram.", 42);
	napms(1000);
	clear();
	Emma();
	mvprintw(16, 14, "Emma");
	chat(20, 14, "Katakan padaku, Damian, di mana letak salahku, atau apa salah", 42);
	chat(21, 14, "keluargaku hingga makhluk aneh itu menjarah domba kami.", 42);
	napms(1000);
	chat(23, 14, "Padahal domba itu sumber mata pencaharian utama keluargaku.", 42);
	napms(1000);
	clearleft();
	mvprintw(16, 14, "Emma");
	chat(20, 14, "Apakah aku berbuat dosa besar sehingga Tuhan marah lalu", 42);
	chat(21, 14, "menghukumku dengan mengambil domba dan juga orang tuaku?", 42);
	napms(1000);
	chat(23, 14, "Ah, ralat, adikku Mia ikut dibawa makhluk menjijikkan itu!", 42);
	napms(1000);
	clearleft();
	mvprintw(16, 14, "Emma");
	chat(20, 14, "Lihatlah bunga edelweis yang putus dari tangkainya itu,", 42);
	chat(21, 14, "ternodai oleh bercak darah keluargaku yang mempertahankan", 42);
	chat(22, 14, "domba kami sampai mereka rela mengorbankan nyawanya!", 42);
	napms(1000);
	clearleft();
	mvprintw(16, 14, "Emma");
	chat(20, 14, "Harusnya kandang domba itu masih bagus, harusnya kami", 42);
	chat(21, 14, "masih beternak domba yang gemuk, harusnya--", 42);
	napms(1000);
	clear();
	chat(20, 14, "Damian mendekap Emma karena teringat Ny. Grace pernah berkata bahwa pelukan dapat menenangkan seseorang.", 42);
	napms(1000);
	clear();
	chat(20, 14, "Kemudian tangis Emma luruh begitu saja.", 42);
	napms(1000);
	chat(22, 14, "Seraya masih terisak, perempuan itu tetap melanjutkan ceritanya.", 42);
	napms(1000);
	clear();
	Emma();
	mvprintw(16, 14, "Emma");
	chat(20, 14, "Aku ditugaskan Ibuku untuk menjual pai susu ke kota.", 42);
	napms(1000);
	chat(22, 14, "Di tengah perjalanan, aku melupakan topiku dan karena cuaca", 42);
	chat(23, 14, "semakin terik, aku memutuskan untuk kembali mengambil topi.", 42);
	napms(1000);
	clearleft();
	mvprintw(16, 14, "Emma");
	chat(20, 14, "Dan kau tahu Damian?", 42);
	napms(1000);
	chat(22, 14, "Sungguh aku adalah orang paling pengecut sejagad raya karena", 42);
	chat(23, 14, "aku hanya bersembunyi di balik pohon maple ketika keluargaku", 42);
	chat(24, 14, "melawan demi domba-domba itu!", 42);
	napms(1000);
	clearleft();
	mvprintw(16, 14, "Emma");
	chat(20, 14, "A-aku... aku merasa tidak berguna waktu itu.", 42);
	napms(1000);
	chat(22, 14, "Aku terlalu takut untuk melawan, dan sejak itu aku menyesal.", 42);
	napms(1000);
	clear();
	Damian();
	mvprintw(16, 14, "Damian");
    chat(20, 14, "Apakah makhluk aneh itu melihatmu dan mengejarmu Emma?", 42);
  	napms(1000);
  	clear();
	Emma();
	mvprintw(16, 14, "Emma");
	chat(20, 14, "Ya. Mereka melakukannya.", 42);
	napms(1000);
	chat(22, 14, "Aku sungguhan ketakutan jadi aku berlari sekuat tenaga menghindari makhluk itu, dan tanpa ku sadari,", 42);
	napms(1000);
	chat(20, 14, "aku sudah terjatuh di ujung jalan tadi. Semuanya terjadi begitu cepat sebelum aku berhasil mencernanya.", 42);
	clear();
	Damian();
	mvprintw(16, 14, "Damian");
    chat(20, 14, "Dengar Emma, aku tidak bisa berjanji semuanya akan baik-baik saja. ", 42);
    chat(22, 14, "Yang tadi adalah pasukan raja iblis. Aku masih tidak mengerti alasan mereka", 42);
    chat(24, 14, "mereka mencuri sumber kekayaan negeri ini, bahkan sampai mengorbankan nyawa seseorang.", 42);
  	napms(1000);
  	clear();
  	Damian();
  	mvprintw(16, 14, "Damian");
    chat(20, 14, "Tapi yang jelas, aku dengan tekadku yang sudah bulat ini akan mengalahkannya!", 42);
    napms(1000);
  	clear();
    Emma();
    mvprintw(16, 14, "Emma");
	chat(20, 14, "Mengalahkannya? Hey Dami, sejujurnya aku sudah kehilangan segalanya. ", 42);
	chat(22, 14, "Jika ada yang tersisa dalam diriku, maka itu adalah amarah dan dendam.", 42);
    chat(24, 14, "Jadi, bisakah aku bergabung denganmu untuk menghancurkan Raja Iblis?", 42);
	napms(1000);
	clear();
	Damian();
	mvprintw(16, 14, "Damian");
    chat(20, 14, "Apa kau serius, Emma?", 42);
    napms(1000);
  	clear();
  	Emma();
  	mvprintw(16, 14, "Emma");
	chat(20, 14, "Kau tahu benar apa yang telah terjadi padaku bukan?", 42);
	napms(1000);
	clear();
	chat(20, 40, "GRAGHHHH!!", 82);
	napms(2500);
	chat(20, 40, "Damian dan Emma mendengar raungan penuh kebencian datang menghampiri mereka. Itu adalah pasukan Raja Iblis.", 82);
	napms(2500);
	clear();
	Damian();
	mvprintw(16, 14, "Damian");
    chat(20, 14, "Siap untuk tugas pertamamu, Nona bergaun peach?", 42);
    napms(1000);
  	clear();
	Emma();
  	mvprintw(16, 14, "Emma");
	chat(20, 14, "Tentu saja! Hey Dami, apa kau takut?", 42);
	napms(1000);
	clear();
	chat(20, 40, "Damian tersenyum.", 82);
	napms(2500);
	clear();
	Damian();
	mvprintw(16, 14, "Damian");
    chat(20, 14, "Siapa takut?", 42);
    napms(1000);
  	clear();
  
  	chat(20, 40, "Damian mengalahkan satu persatu pasukan Raja Iblis.", 82);
	napms(2500);
	chat(22, 40, "Emma yang ternyata seorang pemanah turut serta membidik tepat di jantung makhluk itu.", 82);
	napms(2500);
	chat(24, 40, "Keduanya bekerja sama dan menjadi kombo yang mematikan.", 82);
	napms(2500);
	clear();
	
	Damian();
	mvprintw(16, 14, "Damian");
    chat(20, 14, "Well, bidikkan yang bagus Emma! panahmu melesat dengan akurat.", 42);
    chat(22, 14, "Dimana kau mempelajarinya?", 42);
    napms(1000);
  	clear();
  	
  	Emma();
  	mvprintw(16, 14, "Emma");
	chat(20, 14, "Terimakasih atas pujiannya. Aku mempelajarinya di tempat Kai Zhang.", 42);
	napms(1000);
	clear();
	
	Damian();
	mvprintw(16, 14, "Damian");
    chat(20, 14, "Apakah Kai Zhang semacam imigran penguasa kungfu dan segala jenis ilmu survival?", 42);
    napms(1000);
  	clear();
	
	Emma();
  	mvprintw(16, 14, "Emma");
	chat(20, 14, "Iya dan Tidak.", 42);
	chat(22, 14, "Tn. Kai memang seorang imigran, dari daratan dimana terdapat tembok raksasa yang agung, katanya.", 42);
	chat(24, 14, "Tapi bukan berarti beliau jago kungfu. Tn. Kai adalah master dalam memanah.", 42);
	napms(1000);
	clear();
	
	Emma();
  	mvprintw(16, 14, "Emma");
	chat(20, 14, "Beliau mengajarkanku bagaimana cara berburu di hutan.", 42);
	chat(22, 14, "Jadi aku sudah tidak heran jika kau berkata bidikanku akurat", 42);
	napms(1000);
	clear();
	
	Damian();
	mvprintw(16, 14, "Damian");
    chat(20, 14, "Tch, ku puji sedikit langsung besar kepala. Dasar Nona bergaun peach!", 42);
    napms(1000);
  	clear();
  	
  	Emma();
  	mvprintw(16, 14, "Emma");
	chat(20, 14, "Hey, Dami� Misi pembasmian iblis ini, selanjutnya bagaimana?", 42);
	napms(1000);
	clear();
  	
  	chat(20, 40, "Damian yang sedang merebahkan tubuhnya di bukit hijau itu,", 82);
	napms(2500);
	chat(22, 40, "akhirnya mengambil posisi duduk membersamai Emma.", 82);
	clear();
	
	Damian();
	mvprintw(16, 14, "Damian");
    chat(20, 14, "Ah� Soal itu� Aku sendiri belum bisa memutuskan.", 42);
    chat(22, 14, "Sore aku melihat peliharaan dan hasil panen orang-orang yang menyayangiku dicuri oleh iblis.", 42);
    chat(24, 14, "Sama halnya denganmu Emma, aku juga memiliki ambisi.", 42);
    napms(1000);
  	clear();
  	
  	Damian();
	mvprintw(16, 14, "Damian");
    chat(20, 14, "Jika kau kuat karena amarah dan dendam, ", 42);
    chat(22, 14, "maka aku akan kokoh karena orang-orang yang menyayangiku.", 42);
    napms(1000);
  	clear();
  	
  	Emma();
  	mvprintw(16, 14, "Emma");
	chat(20, 14, "Ini mungkin sedikit lancang� tapi, dimana orang tuamu Dami?", 42);
	napms(1000);
	clear();
  	
  	Damian();
	mvprintw(16, 14, "Damian");
    chat(20, 14, "Ibuku meninggal saat melahirkanku. Ayahku menikah lagi dengan perawan di kota.", 42);
    napms(1000);
  	clear();
  	
  	Emma();
  	mvprintw(16, 14, "Emma");
	chat(20, 14, "Ah, maaf! Aku tidak bermaksud�", 42);
	napms(1000);
	clear();
	
	Damian();
	mvprintw(16, 14, "Damian");
    chat(20, 14, "Tidak apa-apa Emma, aku sudah berdamai dengan hal itu.", 42);
    chat(22, 14, "Oh ya, omong-omong soal misi pembasmian iblis� tempo hari Tn. Henry tetua desa kami,", 42);
    chat(24, 14, "Beliau datang menghampiriku dan paman Sam�pamanku,", 42);
    napms(1000);
  	clear();
  	
  	Damian();
	mvprintw(16, 14, "Damian");
    chat(20, 14, "ketika aku baru saja selesai mengalahkan pasukan Raja Iblis ", 42);
    chat(22, 14, "dengan sabit dan kapak berkarat. Tidak masuk akal bukan?", 42);
    napms(1000);
  	clear();
  	
  	Emma();
  	mvprintw(16, 14, "Emma");
	chat(20, 14, "Y-ya� Itu sangat aneh. Hentikan bualanmu!", 42);
	napms(1000);
	clear();
	
	Damian();
	mvprintw(16, 14, "Damian");
    chat(20, 14, "Itu sungguhan, Emma. Rasanya seperti ada sosok lain dalam diriku yang mengambil alih raga ini ", 42);
    chat(22, 14, "ketika sedang berhadapan dengan iblis-iblis kacangan itu.", 42);
    chat(24, 14, "Kau harus tahu, aku adalah remaja 18 tahun yang tidak pernah mencoba belajar bela diri ", 42);
    napms(1000);
  	clear();
  	
  	Damian();
	mvprintw(16, 14, "Damian");
    chat(20, 14, "atau survival skill lainnya. ", 42);
    chat(22, 14, "Lantas saat Tn.Henry, sesepuh di desa kami datang dan berkata ", 42);
    chat(24, 14, "bahwa hanya aku yang dapat mengalahkan raja iblis itu... ", 42);
    napms(1000);
  	clear();
  	
  	Damian();
	mvprintw(16, 14, "Damian");
    chat(20, 14, "hatiku menjadi tergerak untuk melakukannya. Inilah garis hidup yang menungguku selama ini.  ", 42);
    chat(22, 14, "Mungkin aku adalah manusia pilihan, ", 42);
    napms(1000);
  	clear();
  	
  	Damian();
	mvprintw(16, 14, "Damian");
    chat(20, 14, "seperti Scorpio si kalajengking raksasa yang diutus oleh Gaia ", 42);
    chat(22, 14, "untuk mengalahkan Orion sang kesatria tangguh nan angkuh. ", 42);
    napms(1000);
  	clear();
  	
  	Emma();
  	mvprintw(16, 14, "Emma");
	chat(20, 14, "Mungkin memang begitu,", 42);
	chat(22, 14, "dan aku adalah bintang random yang baru saja meledak karena kehabisan nitrogen di rasi milikmu.", 42);
	napms(1000);
	clear();
	
	Damian();
	mvprintw(16, 14, "Damian");
    chat(20, 14, "Selain jago memanah dan bergaun peach, ternyata kau juga cukup puitis ya! HAHAHAH!", 42);
    napms(1000);
  	clear();
  	
  	Emma();
  	mvprintw(16, 14, "Emma");
	chat(20, 14, "Kurang Ajar! ", 42);
	napms(1000);
	clear();
  	
  	chat(20, 40, "Karena kesal, Emma mendorong Damian dengan sekuat tenaga hingga Dami tersungkur ke tanah.", 82);
  	chat(22, 40, "Sementara itu, Dami hanya tertawa terbahak-bahak.", 82);
	napms(2500);
	clear();
	
	Emma();
  	mvprintw(16, 14, "Emma");
	chat(20, 14, "Serius dulu, Dami. Aku ingin bertanya, apakah Tn.Henry mengatakan hal lain? ", 42);
	napms(1000);
	clear(); 
	
	chat(20, 40, "Damian menghela nafas dan menghentikan tawanya. Kemudian Damian bangkit lalu duduk kembali di samping Emma.", 82);
	napms(2500);
	clear(); 
	
	Damian();
	mvprintw(16, 14, "Damian");
    chat(20, 14, "Iya. Seingatku beliau mengatakan �Di suatu tempat, di ujung gelap, dimana angsa-angsa berlomba", 42);
    chat(21, 14, "hingga bedarah-darah. Carilah tempat itu dan kalahkan raja iblis!�.", 42);
    chat(20, 14, "Aku sendiri hanya mengerti maksud dari angsa yang berlomba itu adalah cygnus.", 42);
    napms(1000);
  	clear();
  	
  	Emma();
  	mvprintw(16, 14, "Emma");
	chat(20, 14, "Makanya kau datang kesini ya. Hm� Ini menarik. Lalu bagaimana dengan sisa teka-teki nya? ", 42);
	napms(1000);
	clear();
	
	Damian();
	mvprintw(16, 14, "Damian");
    chat(20, 14, "Iya. Seingatku beliau mengatakan �Di suatu tempat, di ujung gelap, dimana angsa-angsa berlomba", 42);
    chat(21, 14, "hingga bedarah-darah. Carilah tempat itu dan kalahkan raja iblis!�.", 42);
    chat(20, 14, "Aku sendiri hanya mengerti maksud dari angsa yang berlomba itu adalah cygnus.", 42);
    napms(1000);
  	clear();
  	
  	Emma();
	mvprintw(16,14, "Emma");
	chat(20, 14, "Makanya kau datang kesini ya.", 42);
	chat(22, 14, "Hm� Ini menarik. Lalu bagaimana dengan sisa teka-teki nya?", 42);
	napms(1000);
	clear();
 
	Damian();
	mvprintw(16,14, "Damian");
	chat(20, 14, "Aku juga belum sepenuhnya mengerti. Namun kita harus segera mencari tahu maknanya ", 42);
	chat(22, 14, "agar tidak kehabisan petunjuk. Hey Emma, Tn.Kai Zheng guru panahan mu tadi� ", 42);
	chat(24, 14, "Apakah kita bisa menemuinya? ", 42);
	napms(1000);
	clear();
	
	
	Emma();
	mvprintw(16,14, "Emma");
	chat(20, 14, "Seharusnya bisa. Soalnya Tn. Kai jarang pergi meninggalkan desa.", 42);
	chat(22, 14, "Memangnya ada apa dengan Tn.Kai, apakah kau penasaran? Atau ingin berguru panahan juga?", 42);
	napms(1000);
	clear();
	 
	chat(20, 40, "Belum sempat Dami menjawab, pasukan Raja Iblis kembali datang menghampiri.", 82);
	napms(2500);
	chat(22, 40, " Emma dan Dami pun kembali bertarung. ", 82);
	napms(2500);
	clear();
	
	//game mulai
	//game selesai
	 
	chat(20, 40, "Kemudian keduanya berjalan menuju kediaman Tn. Kai Zheng.", 82);
	napms(2500);
	clear();
	 
	chat(20, 40, "Karena kediaman master panahan itu cukup jauh dan hari sudah mulai petang,", 82);
	napms(2500);
	chat(20, 40, "Dami dan Emma memutuskan untuk beristirahat.", 82);
	napms(2500);
	clear();


	chat(20, 40, "Dami dan Emma saling berbagi bekal yang telah disiapkan sebelumnya dan menyantapnya dengan lahap.", 82);
	napms(2500);
	 chat(22, 40, "Namun, kegaduhan di seberang bukit mengalihkan perhatian mereka dari pai susu yang nikmat itu.", 82);
	 napms(2500);
	 clear();
	 
	 chat(20, 40, "Keduanya memutuskan untuk mencari tahu dan melihat apa yang sesungguhnya sedang terjadi.", 82);
	 napms(2500);
	 clear();

	Emma();
 mvprintw(16,14, "Emma");
 chat(20, 14, "OH SH*T! Makhluk sialan itu lagi!!! ", 42);
 napms(1000);
 clear();
 
 Damian();
 mvprintw(16,14, "Damian");
 chat(20, 14, "Siapkan panahmu dan mari lakukan kombo mematikan kita, Nona bergaun peach! ", 42);
 napms(1000);
 clear();
 
 //game dimulai
 //game selesai
 
 chat(20, 40, "Seperti yang sudah-sudah. Emma dan Damian memenangkan pertandingan itu. ", 82);
 napms(2500);
 clear();
 
 Emma();
 mvprintw(16,14, "Emma");
 chat(20, 14, "Pertarungan yang luar biasa! ", 42);
 napms(1000);
 clear();
 
 Damian();
 mvprintw(16,14, "Damian");
 chat(20, 14, "Yeah, yang tadi itu keren sekali. Lagi-lagi kau membidik tepat sasaran.", 42);
 napms(1000);
 clear();
 
 chat(20, 40, "Seorang wanita paruh baya datang menghampiri Emma dan Dami. ", 82);
 napms(2500);
 chat(22, 40, "Dengan tubuh gemetaran, wanita itu menggenggam tangan Emma. ", 82);
 napms(2500);
 clear();

 Rossy();
 mvprintw(16,14, "Rossy");
 chat(20, 14, "Oh, sungguh� terima kasih nak, karena kau telah menyelamatkan sapi dan kelinciku dari makhluk mengerikan tadi!", 42);
 napms(1000);
 clear();
 
 Emma();
 mvprintw(16,14, "Emma");
 chat(20, 14, "Tenanglah Madam� tidak apa-apa� kau sudah aman sekarang. ", 42);
 napms(1000);
 clear();
 
 Rossy();
 mvprintw(16,14, "Rossy");
 chat(20, 14, "Aku sungguhan takut karena tadi sore makhluk itu juga datang menghampiri kandang babi tetanggaku�Ny.Emily.", 42);
 chat(22, 14, "Karena Ny.Emily melawan, makhluk itu menyerangnya hingga�", 42);
 napms(1000);
 clear();
 
 chat(20, 40, "Rossy tidak sanggup melanjutkan kalimatnya. ", 82);
 napms(2500);
 chat(22, 40, "Emma dan Damian pun tak ingin bertanya lebih lanjut karena mereka tahu ; keluarga Ny.Emily pasti sedang berduka. ", 82);
 napms(2500);
 clear();
 
 Damian();
 mvprintw(16,14, "Damian");
 chat(20, 14, "Kami turut berduka, Madam.", 42);
 napms(1000);
 clear();
 
 Emma();
 mvprintw(16,14, "Emma");
 chat(20, 14, "Ya, kuharap Ny.Emily dapat menghadap Tuhan dengan benar serta diberi pengampunan oleh-Nya. ", 42);
 napms(1000);
 clear();
 
 Rossy();
 mvprintw(16,14, "Rossy");
 chat(20, 14, "Kalian sungguh anak yang baik. Aku Rossy, Rossy yang sebatang kara.", 42);
 chat(22, 14, "Hidupku yang hampa ini hanya ditemani oleh sapi dan kelinciku. Jadi, sebagai ucapan terimakasih�", 42);
 chat(24, 14, "bersediakah kalian singgah di gubukku sebentar? Biarkan aku menjamu dan memberikan tempat istirahat untuk kalian?", 42);
 napms(1000);
 clear();
 
 Emma();
 mvprintw(16,14, "Emma");
 chat(20, 14, "Tidak perlu repot-repot, Madam Rossy. ", 42);
 napms(1000);
 clear();
 
 Damian();
 mvprintw(16,14, "Damian");
 chat(20, 14, "Benar. Lagipula kita tidak punya banyak waktu.", 42);
 napms(1000);
 clearleft();
 chat(20, 14, "Ah, ya, maaf Madam� Tapi apa kau tahu bagaimana Ny.Emily melawan Pasukan Raja Iblis?", 42);
 napms(1000);
 clear();
 
 Rossy();
 mvprintw(16,14, "Madam Rossy");
 chat(20, 14, "Sahabatku berjuang dengan hebat hingga akhir.", 42);
 napms(1000);
 clearleft();
 mvprintw(16,14, "Madam Rossy");
 chat(20, 14, "Sebenernya aku melewatkan bagian rincinya. Sore itu aku baru kembali setelah menggembalakan sapi ku, ", 42);
 chat(22, 14, "kemudian aku mendengar jeritan pilu dari Emily.", 42);
 chat(22, 14, "Aku berlari menuju rumahnya hanya untuk melihat Emily yang malang dengan pisau dapur berlumur darah digenggam tangannya.", 42);
 napms(1000);
 clearleft();
 mvprintw(16,14, "Madam Rossy");
 chat(20, 14, "Makhluk mengerikan itu telah pergi dengan babi-babi kesayangan Emily. ", 42);
 
 Emma();
 mvprintw(16,14, "Emma");
 chat(20, 14, "Kau harus tabah, Madam. ", 42);
 napms(1000);
 clear();
 
 Damian();
 mvprintw(16,14, "Damian");
 chat(20, 14, "Sahabatmu pasti mendapat tempat terbaik di sisi Tuhan.", 42);
 chat(22, 14, "Dan, Yah� kalau begitu kami akan melanjutkan perjalanan. Selamat tinggal Madam�", 42);
 napms(1000);
 clear();
 
 chat(20, 40, "Dengan begitu, Emma dan Damian berangkat menuju rumah Tn.Kai. ", 82);
 napms(2500);
 chat(22, 40, "Madam Rossy mengucapkan selamat tinggal dan hati-hati. ", 82);
 napms(2500);
 clear();
 
 chat(20, 40, "Akan tetapi, diperjalanan sepanjang gelapnya malam itu, Damian dan Emma kembali dihadapkan oleh pertarungan. ", 82);
 napms(2500);
 clear();
 
 Damian();
 mvprintw(16,14, "Damian");
 chat(20, 14, "Emma kau mendengar suaranya juga kan?", 42);
 napms(1000);
 clear();
 
 Emma();
 mvprintw(16,14, "Emma");
 chat(20, 14, "Ayo segera kita habisi iblis-iblis itu! ", 42);
 napms(1000);
 clear();

//game dimulai
 //game selesai
 
 chat(20, 40, "Iblis-Iblis  tersebut berhasil dikalahkan seperti biasanya.  ", 82);
 napms(2500);
 chat(22, 40, "Kemudian Emma dan Dami memutuskan untuk beristirahat sejenak di bawah pohon apel. ", 82);
 napms(2500);
 clear();
 
 chat(20, 40, "Namun ketika beristirahat pun, Emma dan Damian menangkap basah iblis-iblis hendak mencuri di ladang seseorang. ", 82);
 napms(2500);
 clear();
 
 Emma();
 mvprintw(16,14, "Emma");
 chat(20, 14, "Dami lihatlah! Bukankah bagus untuk menyapa iblis peyot disana dengan panah dan kapak besi mu? ", 42);
 napms(1000);
 clear();
 
 Damian();
 mvprintw(16,14, "Damian");
 chat(20, 14, "Ide bagus Emma! ", 42);
 napms(1000);
 clear();
 
 //game dimulai
 //game slesai

chat(20, 40, "Seperti biasa, Damian dan Emma memenangkan pertandingannya dengan iblis. ", 82);
 napms(2500);
 chat(22, 40, "Kemudian mereka berdua melanjutkan istirahatnya.", 82);
 napms(2500);
 clear();
 
 chat(20, 40, "Keesokan paginya, Damian dan Emma  melanjutkan perjalanan dan tiba di tempat tujuan.", 82);
 napms(2500);
 chat(22, 40, "Rumah bergaya Victoria bercat putih yang cukup besar milik Tn.Kai berdiri kokoh di puncak bukit.", 82);
 napms(2500);
 clear();
 
 Damian();
 mvprintw(16,14, "Damian");
 chat(20, 14, "Hey Emma, sebelum bertemu dengan Tn.Kai, bolehkah aku bertanya sesuatu? ", 42);
 napms(1000);
 clear();
 
 Emma();
 mvprintw(16,14, "Emma");
 chat(20, 14, "Katakanlah Dami! ", 42);
 napms(1000);
 clear();
 
 Damian();
 mvprintw(16,14, "Damian");
 chat(20, 14, "satu set alat panah yang kau gunakan itu, apakah pemberian Tn.Kai? ", 42);
 napms(1000);
 clear();
 
 Emma();
 mvprintw(16,14, "Emma");
 chat(20, 14, "Benar. Katanya itu merupakan hadiah karena aku berhasil menangkap babi hutan yang merusak ladang penduduk desa. ", 42);
 napms(1000);
 clear();
 
 Damian();
 mvprintw(16,14, "Damian");
 chat(20, 14, "Sepertinya aku memahami sesuatu.", 42);
 napms(1000);
 clear();
 
 chat(20, 40, "Emma hanya terdiam kebingungan, menunggu Damian yang sepertinya mengetahui sesuatu.", 82);
 napms(2500);
 clear();
 
 Damian();
 mvprintw(16,14, "Damian");
 chat(20, 14, "Orang tuamu dan Ny.Emily kehilangan nyawanya meskipun sudah melawan pasukan iblis itu sekuat tenaga dengan benda tajam seperti pisau dan parang.", 42);
 chat(22, 14, "Tn.Henry berkata hanya aku yang bisa mengalahkan raja iblis,", 42);
 chat(24, 14, " tapi buktinya panahmu bisa menembus jantung makhluk itu.", 42);
 napms(1000);
 clear();
 
 Emma();
 mvprintw(16,14, "Emma");
 chat(20, 14, "Dengan kata lain, bukan hanya kau yang bisa melawan makhluk sialan itu kan? ", 42);
 napms(1000);
 clear();
 
 Damian();
 mvprintw(16,14, "Damian");
 chat(20, 14, "Ya, benar. Tapi masalahnya kalau kau bisa mengapa Ny.Emily dan orang tuamu tidak? ", 42);
 chat(22, 14, "Bukankah set panah yang diberikan Tn.Kai itu patut dicurigai? ", 42);
 chat(24, 14, "Hey, siapa sebenarnya orang yang kau sebut guru itu, Emma?", 42);
 napms(1000);
 clear();
 
 Emma();
 mvprintw(16,14, "Emma");
 chat(20, 14, "A-aku� aku juga tidak tahu. Kenapa tidak masuk dan menanyakannya langsung Dami? ", 42);
 napms(1000);
 clear();
 
 chat(20, 40, "Maka Emma dan Damian memasuki kediaman Tn.Kai.", 82);
 napms(2500);
 clear();
 
 TuanKai();
 mvprintw(16,14, "Tuan Kai");
 chat(20, 14, "Wah� lihat siapa yang datang! ", 42);
 napms(1000);
 clear();
 
 Emma();
 mvprintw(16,14, "Emma");
 chat(20, 14, "Kau semakin kurus Guru. ", 42);
 napms(1000);
 clear();
 
 TuanKai();
 mvprintw(16,14, "Tuan Kai");
 chat(20, 14, "Kau sendiri mengapa datang kemari dengan gaun lusuh dan� siapa bocah disampingmu itu? ", 42);
 napms(1000);
 clear();
 
 Damian();
 mvprintw(16,14, "Damian");
 chat(20, 14, "Aku Damian Amstrong, dari wilayah Scorpius. ", 42);
 napms(1000);
 clear();
 
 TuanKai();
 mvprintw(16,14, "Tuan Kai");
 chat(20, 14, "Walah� jauh-jauh kesini, apa yang kau cari anak muda? ", 42);
 napms(1000);
 clear();
 
 chat(20, 40, "Damian menceritakan semua yang ia alami. Mulai dari kandang paman Sam hingga Ny.Emily.", 82);
 napms(2500);
 chat(22, 40, "Tn.Kai menyimak dengan serius sambil sesekali menghisap cerutu nya.", 82);
 napms(2500);
 clear();

 TuanKai();
 mvprintw(16,14, "Tuan Kai");
 chat(20, 14, "Kau datang pada orang yang tepat. Jadi apa yang ingin kau ketahui dariku? ", 42);
 napms(1000);
 clear();
 
 Damian();
 mvprintw(16,14, "Damian");
 chat(20, 14, "Semuanya, Tuan! ", 42);
 chat(22, 14, "Aku yakin dibalik rentetan petaka ini kau mengetahui sesuatu. Ceritakanlah kepadaku yang sesungguhnya!", 42);
 napms(1000);
 clear();

 TuanKai();
 mvprintw(16,14, "Tuan Kai");
 chat(20, 14, "Legenda berkata iblis pernah bangkit ratusan tahun lalu.", 42);
 chat(22, 14, "Arthur sang kesatria utusan Tuhan menyegelnya dengan kapak  suci tepat sebelum bulan purnama.", 42);
 chat(24, 14, "Leluhurku berkata hanya orang pilihan yang dapat mengalahkannya.", 42);
 napms(1000);
 clear();
 
 Damian();
 mvprintw(16,14, "Damian");
 chat(20, 14, "Orang itu adalah aku, Tuan. Jadi katakan apa yang kau tahu dan bantulah aku melawan Raja Iblis.", 42);
 napms(1000);
 clear();

 TuanKai(); 
 mvprintw(16,14, "Tuan Kai");
 chat(20, 14, "Leluhurku juga berkata, hanya ada satu cara untuk mengalahkannya.", 42);
 napms(1000);
 clearleft();
 mvprintw(16,14, "Tuan Kai");
 chat(20, 14, " Di suatu tempat, di ujung gelap, dimana angsa-angsa berlomba hingga berdarah-darah.", 42);
 chat(22, 14, "Carilah tempat itu, dan kalahkan raja iblis sebelum bulan purnama tiba Nak!", 42);

 Emma();
 mvprintw(16,14, "Emma");
 chat(20, 14, "Terima Kasih atas petunjuknya Guru.", 42);
 chat(22, 14, "Aku berjanji dengan ilmu yang telah ku pelajari darimu, aku dan Dami akan mengalahkan Raja Iblis itu!", 42);
 napms(1000);
 clear();
 
 TuanKai(); 
 mvprintw(16,14, "Tuan Kai");
 chat(20, 14, "Aku yakin kalian bisa. Lakukanlah dengan serius!", 42);
 napms(1000);
 clear();
 
 Damian(); 
 mvprintw(16,14, "Damian");
 chat(20, 14, "Tenang saja Tuan, Kami akan kembali dengan kemenangan !", 42);
 napms(1000);
 clear();
 
 TuanKai(); 
 mvprintw(16,14, "Tuan Kai");
 chat(20, 14, "Aku yakin kalian bisa. Lakukanlah dengan serius!", 42);
 napms(1000);
 clear();
 
 chat(20, 40, "Tuan Kai bangkit dari duduknya menuju lemari putih besar di sebelah kanan ruang tamu.", 82);
 napms(2500);
 chat(22, 40, "Sebuah koper kulit usang diambil oleh Tn.Kai untuk kemudian diserahkan kepada Emma dan Damian", 82);
 napms(2500);
 clear();
 
 TuanKai(); 
 mvprintw(16,14, "Tuan Kai");
 chat(20, 14, "Gunakanlah sesuka hati!", 42);
 napms(1000);
 clear();
 
 chat(20, 40, "Damian dan Emma membuka koper tersebut.", 82);
 napms(2500);
 chat(22, 40, "Ternyata isinya adalah baju, tameng, dan beberapa peralatan untuk survive.", 82);
 napms(2500);
 clear();
 
 Damian(); 
 mvprintw(16,14, "Damian");
 chat(20, 14, "Terimakasih Tuan. Tapi maksud teka-teki tadi bukannya berarti Raja Iblis ada di Cygnus?", 42);
 napms(1000);
 clear();
 
 TuanKai(); 
 mvprintw(16,14, "Tuan Kai");
 chat(20, 14, "HAHAHAHHAH!!", 42);
 chat(22, 14, "Mana mungkin tempat yang ditinggali raja iblis makmur dan subur begini!", 42);
 napms(1000);
 clear();
 
 Emma();
 mvprintw(16,14, "Emma");
 chat(20, 14, "Dengan kata lain, Raja iblis bukan di Cygnus. Lalu di mana?", 42);
 napms(1000);
 clear();
 
 TuanKai(); 
 mvprintw(16,14, "Tuan Kai");
 chat(20, 14, "Coba cermati lagi teka-teki itu.", 42);
 napms(1000);
 clear();
 
 chat(20, 40, "Emma dan Damian mencoba berpikir keras cukup lama.", 82);
 napms(2500);
 chat(22, 40, "Dan akhirnya Emma mencoba menjawab.", 82);
 napms(2500);
 clear();
 
 Emma();
 mvprintw(16,14, "Emma");
 chat(20, 14, "Bagaimana dengan rasi bintang Crux?", 42);
 napms(1000);
 clear();
 
 Damian(); 
 mvprintw(16,14, "Damian");
 chat(20, 14, "Benar juga� Rasi Crux kan terletak di langit selatan.", 42);
 chat(22, 14, "alam sejarah navigasi sering dianggap sebagai penunjuk arah 'di ujung dunia'..", 42);
 chat(24, 14, " Lokasinya yang kecil namun penting di area gelap karena dikelilingi oleh latar bintang yang lumayan redup cocok dengan deskripsi 'di ujung gelap�", 42);
 napms(1000);
 clear();
 
 Emma();
 mvprintw(16,14, "Emma");
 chat(20, 14, "Yap. Kemudian angsa-angsa yang berlomba, jika diartikan secara simbolis", 42);
 chat(22, 14, "mungkin adalah representasi jiwa atau perjalanan spiritual menuju akhir kehidupan.", 42);
 chat(24, 14, "Terdengar religius seperti bentuk salib pada rasi Crux kan?", 42);
 napms(1000);
 clear();
 
 TuanKai(); 
 mvprintw(16,14, "Tuan Kai");
 chat(20, 14, "Dan kata �berdarah-darah� bisa menggambarkan pengorbanan besar yang tersirat dalam bentuk rasi itu.", 42);
 chat(22, 14, "Selain itu, di dekat Crux terdapat Coalsack Nebula, area gelap yang mungkin diartikan ", 42);
 chat(24, 14, "sebagai luka atau kehampaan, melengkapi nuansa 'berdarah-darah'", 42);
 napms(1000);
 clear();
 
 Damian(); 
 mvprintw(16,14, "Damian");
 chat(20, 14, "Dengan begini, lokasi Raja Iblis berhasil terpecahkan!", 42);
 napms(1000);
 clear();
 
 Emma();
 mvprintw(16,14, "Emma");
 chat(20, 14, "Tujuan kita selanjutnya� Crux di wilayah selatan!", 42);
 napms(1000);
 clear();
 
 chat(20, 40, "Maka, dengan demikian Damian dan Emma siap untuk melanjutkan petualangannya.", 82);
 napms(2500);
 clear();
	
	chat(22, 40, "Cerita sampai di sini dulu ya! Full version in sale for $100 - EA Games!", 82);
	napms(2500);
	clear();
}
