#include "stat.h"
#include "dialog.h"
#include <unistd.h>
#include <iostream>
#include <random>
#include <fstream>
#include <cstring>
#include <stdlib.h>

using namespace std;

//-----------------Prototype-----------------//
void stopmusic();
void print_menu();
void choicesinfo();

//-----------------Prototype Menu-----------------//
void opsiLogin();
void opsiPlay();
void singIn();
void singUp();

//-----------------Prototype Battle-----------------//
void resethealth();
void playerturn();
void battlesystem();
void checkbattle();
void randomattack();
void enemyultimate();
void enemyattacks();
void enemymagics();
void enemydefenses();

void resethealth() {
  playerhp = 100;
  enemyhp = 100;
}

void playmusic(const char * musicFile, DWORD flags = SND_ASYNC | SND_LOOP) {
  PlaySound(TEXT(musicFile), NULL, flags);
}

void stopmusic() {
  PlaySound(NULL, 0, SND_PURGE);
}

void print_menu(WINDOW * menu_win, int pilihanTerpilih, const char * opsi[], int jumlahopsi) {
  for (int i = 0; i < jumlahopsi; ++i) {
    if (i == pilihanTerpilih) {
      wattron(menu_win, A_REVERSE);
    }

    mvwprintw(menu_win, i + 1, 1, opsi[i]);

    if (i == pilihanTerpilih) {
      wattroff(menu_win, A_REVERSE);
    }
  }

  wrefresh(menu_win);
}

//login
void opsiLogin(){
    initscr();
    clearScreen();
    noecho();
    cbreak();
    curs_set(0);

    boxMenu();
    while (true)
	{
		char jawab = getch();
		if (jawab == '1')
		{
			singIn();
			break;
		}
		else if (jawab == '2')
		{
			singUp();
			singIn();
			break;
		}
		else if (jawab == '3')
		{
			system("cls");
			exit(0);
		}
	}

    endwin();
}

void singIn(){
    curs_set(1);
    nocbreak();
    echo();
    boxSignIn();

    char username[30], password[30];
    mvprintw(13,57,"");
    getnstr(&username[0], 30);
    mvprintw(16,57,"");
    getnstr(&password[0], 30);

    ifstream akun;
    string inputUsername, inputPassword;
    akun.open("data/akunUser.txt");
    bool approve = false;
    while (akun >> inputUsername >> inputPassword)
    {
        if(inputUsername == username && inputPassword == password){
            approve = true;
            break;
        }
    }

    if(approve){
        clearScreen();
        loadingAuto(48,15);
        Sleep(100);
        clearScreen();
        loginDoneText();
        pressKey(48,24);
        clearScreen();
        opsiPlay();
    }
    else if(!approve){
        clearScreen();
        loadingAuto(48,15);
        Sleep(100);
        clearScreen();
        mvprintw(7,36,"USERNAME ATAU PASSWORD YANG ANDA MASUKKAN SALAH");
        singIn();

    }
    akun.close();
}

void singUp (){
    curs_set(1);
    nocbreak();
    echo();
    boxSignUp();

    ofstream akun;
    char username[30];
    char password[30];
    mvprintw(13, 57, "");
    getnstr(&username[0], 30);
    mvprintw(16,57,"");
    getnstr(&password[0], 30);
    akun.open("data/akunUser.txt", ios::app);
    akun << username << " " << password << endl;
    akun.close();
}

void welcomeGame(){
    mvprintw(10,10,"SELAMAT DATANG DI GAME MAGE OF DARKNESS");
    mvprintw(16,10,"tekan m untuk mulai permainan");
    mvprintw(17,10,"tekan b untuk kembali ke menu utama");
}

void opsiPlay(){
    curs_set(0);
    noecho();
    cbreak();
    welcomeGame();
    mvprintw(22,10,"");
    char ch = getch();
    if(ch == 'm' || ch == 'M'){
        clearScreen();
        loadingAuto(48,15);
        clearScreen();
        mvprintw(20, 48,"game akan dimulai");
        pressKey(48,23);
        clearScreen();
    }
    if(ch == 'b' || ch == 'B'){
        clearScreen();
        curs_set(1);
        echo();
        nocbreak();
        opsiLogin();
    }
}

void choicesinfo() {
  clear();
  refresh();
  if (specialtracker == 0) {
    slashesframe();
    enemyhp -= defenseattre * -1 + (playerattack - enemydefense);
    defenseattre = 0;
    switch (battlemodifierA) {
    case 'A':
      chat(20, 20, "Kau menyerang musuhmu dengan sabit dan kapak besi!", 10);
      break;
    }
  } else if (specialtracker == 1) {
    magicsframe();
    enemyhp -= defenseattre * -1 + (3 * playerattack - enemydefense);
    defenseattre = 0;
    switch (battlemodifierA) {
    case 'A':
      chat(20, 20, "Kau menyerang musuhmu dengan sihir!", 10);
      break;
    }
  } else if (specialtracker == 2) {
    defenseattr = 2;
    switch (battlemodifierA) {
    case 'A':
      chat(20, 20, "Kau bertahan!", 10);
      break;
    }
  }
  mvprintw(22, 20, "Enemy HP %d", enemyhp);
  mvprintw(24, 20, "[PRESS ANY BUTTON]");
  refresh();
  getch();
  clear();
  refresh();
}

// function untuk battle
void playerturn() {
  initscr();
  clear();
  noecho();
  cbreak();

  int awalx = 20, awaly = 30;
  int lebar = 30, tinggi = 20;

  WINDOW * menu_win = newwin(tinggi, lebar, awaly, awalx);

  keypad(menu_win, TRUE);

  const char * opsi[] = {
    "Attack",
    "Magic",
    "Defense"
  };

  int jumlahopsi = sizeof(opsi) / sizeof(char * );
  int pilihanTerpilih = 0;
  int pilihan = -1;

  curs_set(0);
  while (1) {
    mvwprintw(menu_win, 0, 0, "Pilih Strategimu !!!");
    print_menu(menu_win, pilihanTerpilih, opsi, jumlahopsi);

    int tombol = wgetch(menu_win);

    switch (tombol) {
    case KEY_UP:
      if (pilihanTerpilih == 0) {
        pilihanTerpilih = jumlahopsi - 1;
      } else {
        --pilihanTerpilih;
      }
      break;

    case KEY_DOWN:
      if (pilihanTerpilih == jumlahopsi - 1) {
        pilihanTerpilih = 0;
      } else {
        ++pilihanTerpilih;
      }
      break;

    case 10:
      pilihan = pilihanTerpilih;
      break;
    }

    clrtoeol();
    refresh();

    if (pilihan == 0) {
      specialtracker = 0;
      choicesinfo();
      break;
    } else if (pilihan == 1) {
      specialtracker = 1;
      choicesinfo();
      break;
    } else if (pilihan == 2) {
      specialtracker = 2;
      break;
    }
  }

}

void enemyattacks() {
  playerhp -= defenseattr * -1 + (enemyattack - playerdefense);
  switch (battlemodifierB) {
  case 'Q':
    chat(20, 20, "Musuh menyerangmu dengan tangan jeraminya!", 10);
    break;
  }
  defenseattr = 0;
  mvprintw(22, 20, "Player HP %d", playerhp);
  mvprintw(24, 20, "[PRESS ANY BUTTON]");
  refresh();
  getch();
  clear();
  refresh();
}

void enemymagics() {
  playerhp -= defenseattr * -1 + (enemyattack - playerdefense);
  switch (battlemodifierB) {
  case 'Q':
    chat(20, 20, "Musuh menyerangmu dengan sihir angin!", 10);
    break;
  }
  defenseattr = 0;
  mvprintw(22, 20, "Player HP %d", playerhp);
  mvprintw(24, 20, "[PRESS ANY BUTTON]");
  refresh();
  getch();
  clear();
  refresh();
}

void enemydefenses() {
  defenseattre = 2;
  switch (battlemodifierB) {
  case 'Q':
    chat(20, 20, "Musuh bertahan!", 10);
    break;
  }
  defenseattr = 0;
  mvprintw(22, 20, "Player HP %d", playerhp);
  mvprintw(24, 20, "[PRESS ANY BUTTON]");
  refresh();
  getch();
  clear();
  refresh();
}

void enemyultimate() {
  playerhp -= defenseattr * -1 + (2 * enemyattack - playerdefense);
  switch (battlemodifierB) {
  case 'Q':
    chat(20, 20, "Musuh menyerangmu dengan kekuatan maksimal!", 10);
    break;
  }
  defenseattr = 0;
  mvprintw(22, 20, "Player HP %d", playerhp);
  mvprintw(24, 20, "[PRESS ANY BUTTON]");
  refresh();
  getch();
  clear();
  refresh();
}

void randomattack() {
  int randomize = rand() % 100;

  if (randomize < 30) {
    enemyattacks();
  } else if (randomize < 60) {
    enemymagics();
  } else if (randomize < 80) {
    enemydefenses();
  } else {
    enemyultimate();
  }
}

void checkbattle() {
  if (playerhp < enemyhp) {
    chat(20, 20, "You Lose", 95);
    chat(22, 20, "[PRESS ENTER]", 95);
    refresh();
    getch();
    refresh();
    clear();
    specialtracker2 = 1;
  } else if (playerhp > enemyhp) {
    specialtracker2 = 0;
    chat(20, 20, "You Won!", 95);
    chat(22, 20, "[PRESS ENTER]", 95);
    refresh();
    getch();
    refresh();
    clear();
  }
}

void battlesystem() {
  while (playerhp > 0 && enemyhp > 0) {
    playerturn();
    randomattack();
  }
}
