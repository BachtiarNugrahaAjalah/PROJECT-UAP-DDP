#include "source/header.h"

int main() {
  
  playmusic("music/intro.wav", SND_ASYNC);

  initscr();
  noecho();
  cbreak();

  introframe();

  napms(2000);
  stopmusic();

    opsiLogin();

    playmusic("music/chapter.wav", SND_ASYNC);
  dialog001();
  refresh();
  stopmusic();

    playmusic("music/peaceful.wav");
  Damian();
  dialog002();
  refresh();

  PamanSam();
  dialog003();
  refresh();

  Damian();
  dialog004();
  refresh();

  PamanSam();
  dialog005();
  refresh();
  
  stopmusic();
  
  playmusic("music/danger.wav");

  dialog006();
  refresh();
  
  battlemodifierA = 'A';
  battlemodifierB = 'Q';
  
  while(specialtracker2==1) {

  dialog007();
  refresh();

  stopmusic();
  
  napms(2000);
  
  playmusic("music/battle.wav");
  
  battlesystem();
  checkbattle();

  if (specialtracker2==1) {
  stopmusic();
  playmusic("music/danger.wav");
  }
  else {
  	stopmusic();
  }
  };
  
  napms(2000);
  
  playmusic("music/great.wav");
  
  dialog008();
  refresh();

  stopmusic();
  
  dialog009();
  refresh();
  
  playmusic("music/unpleasant.wav");
  
  dialog010();
  refresh();

  stopmusic();
  
  clear();
  refresh();

  napms(2000);
  
  playmusic("music/chapter.wav", SND_ASYNC);
  
  dialog011();
  refresh();
  
  clear();
  refresh();
  
  stopmusic();

  napms(2000);
  
  playmusic("music/journey.wav");
  
  dialog012();
  refresh();
  
  stopmusic();
  
  napms(2000);
  
  playmusic("music/sorrow.wav");
  
  dialog013();
  refresh();
  
  endwin();

  stopmusic();

  while (true) {
    Sleep(100);
    break;
  }

  return 0;
}