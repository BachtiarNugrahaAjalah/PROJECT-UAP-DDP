int main() {
  
  playmusic("intro.wav", SND_ASYNC);

  initscr();
  noecho();
  cbreak();

  introframe();

  napms(2000);

  stopmusic();

  // login
  
  playmusic("peaceful.wav");

  dialog001();
  refresh();

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
  
  playmusic("danger.wav");

  dialog006();
  refresh();
  
  battlemodifierA = 'A';
  battlemodifierB = 'Q';
  
  while(specialtracker2==1) {

  dialog007();
  refresh();

  stopmusic();
  
  napms(2000);
  
  playmusic("battle.wav");
  
  battlesystem();
  checkbattle();

  if (specialtracker2==1) {
  stopmusic();
  playmusic("danger.wav");
  }
  else {
  	stopmusic();
  }
  };
  
  napms(2000);
  
  playmusic("great.wav");
  
  dialog008();
  refresh();

  stopmusic();
  
  dialog009();
  refresh();
  
  playmusic("unpleasant.wav");
  
  dialog010();
  refresh();

  stopmusic();
  
  clear();
  refresh();

  napms(2000);
  
  playmusic("chapter.wav", SND_ASYNC);
  
  dialog011();
  refresh();
  
  clear();
  refresh();
  
  stopmusic();

  napms(2000);
  
  playmusic("journey.wav");
  
  dialog012();
  refresh();
  
  stopmusic();
  
  napms(2000);
  
  playmusic("sorrow.wav");
  
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