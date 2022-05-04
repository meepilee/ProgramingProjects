#include <ctime>
#include <iostream>
#include <unistd.h>

using namespace std;

string test, test1;
string test2 = "";
string word, word2;
string theResult = "";
bool vicotry = false;
bool playing = false;
int lives = 7;
int m = 0;

void startScreen() {
  cout << "YOU HAVE 4 LIVES LEFT \n";
  cout << "               .__                               "
       << "\n__  _  __ ____ |  |   ____  ____   _____   ____  "
       << "\n\\ \\/ \\/ // __ \\|  | _/ ___\\/  _ \\ /     \\_/ __ \\ "
       << "\n \\     /\\  ___/|  |_\\  \\__(  <_> )  Y Y  \\  ___/ "
       << "\n  \\/\\_/  \\___  >____/\\___  >____/|__|_|  /\\___  >"
       << "\n             \\/          \\/            \\/     \\/ ";
  cout << "\n\n"
       << "  __   \n"
       << "_/  |_  ____  ";
  cout << "\n \\   __\\/  _ \\ "
       << "\n  |  | (  <_> )"
       << "\n  |__|  \\____/ ";

  cout << "\n"
       << "\n.__                     .___                     "
       << "\n|  |__ _____ _______  __| _/_____ _____    ____  "
       << "\n|  |  \\\\__  \\\\_  __ \\/ __ |/     \\\\__  \\  /    \\ "
       << "\n|   Y  \\/ __ \\|  | \\/ /_/ |  Y Y  \\/ __ \\|   |  \\"
       << "\n|___|  (____  /__|  \\____ |__|_|  (____  /___|  /"
       << "\n     \\/     \\/           \\/     \\/     \\/     \\/ \n";
  cout << "\n"
       << "\n      ___    "
       << "\n     / _ \\   "
       << "\n    | (_) |  "
       << "\n     \\___/   "
       << "\n    / / \\ \\  "
       << "\n   / /| |\\ \\ "
       << "\n  /_/ | | \\_\\"
       << "\n     _|_|_   "
       << "\n    / / \\ \\  "
       << "\n   / /   \\ \\ "
       << "\n  /_/     \\_\\";
  cout << "\nWelcome to hardman! game made by everett and brannon\n";
  cout << " enter anything to start the game\n";
  getline(cin, test);

  cout << "\n       |    "
       << "\n       |    "
       << "\n       |    "
       << "\n      ___    "
       << "\n     / _ \\   "
       << "\n    | (_) |  "
       << "\n     \\___/   "
       << "\n    / / \\ \\  "
       << "\n   / /| |\\ \\ "
       << "\n  /_/ | | \\_\\"
       << "\n     _|_|_   "
       << "\n    / / \\ \\  "
       << "\n   / /   \\ \\ "
       << "\n  /_/     \\_\\\n";
  playing = true;
  // cout<<test;
}

void wordGen() {
  theResult = "";
  // cout<< "\n\n\n\n\n\n\n\n      ___ ___ ___ ___ ___ ___ \n"<<"
  // "<<"|___|___|___|___|___|___|                     \n"<<"    | | | | \n"<<"
  // | |                    | |                     \n "<<"    | | | | \n"<<"
  // |_|
  // |_|                     \n"<<"    | | \n"<<"    | | \n"<<"    | | \n    |_|
  // \n"<<"    | |                                            \n"<<"";
  srand(time(0));

  const string wordList[169] = {
      "blitz",      "blizzard",   "boggle",     "bookworm",   "boxcar",
      "boxful",     "buckaroo",   "buffalo",    "buffoon",    "buxom",
      "buzzard",    "buzzing",    "buzzwords",  "caliph",     "cobweb",
      "cockiness",  "croquet",    "crypt",      "curacao",    "cycle",
      "daiquiri",   "dirndl",     "disavow",    "dizzying",   "duplex",
      "dwarves",    "embezzle",   "equip",      "espionage",  "euouae",
      "exodus",     "faking",     "fishhook",   "fixable",    "fjord",
      "flapjack",   "flopping",   "fluffiness", "flyby",      "gnostic",
      "gossip",     "grogginess", "haiku",      "haphazard",  "hyphen",
      "iatrogenic", "icebox",     "injury",     "ivory",      "ivy",
      "jackpot",    "jaundice",   "jawbreaker", "jaywalk",    "jazziest",
      "jazzy",      "jelly",      "jigsaw",     "jinx",       "jiujitsu",
      "jockey",     "jogging",    "joking",     "jovial",     "joyful",
      "juicy",      "jukebox",    "jumbo",      "kayak",      "kazoo",
      "keyhole",    "khaki",      "kilobyte",   "kiosk",      "kitsch",
      "kiwifruit",  "klutz",      "knapsack",   "larynx",     "nymph",
      "onyx",       "ovary",      "oxidize",    "oxygen",     "pajama",
      "peekaboo",   "phlegm",     "pixel",      "pizazz",     "pneumonia",
      "polka",      "pshaw",      "psyche",     "puppy",      "puzzling",
      "quartz",     "queue",      "quips",      "quixotic",   "quiz",
      "quizzes",    "quorum",     "razzmatazz", "rhubarb",    "rhythm",
      "rickshaw",   "schnapps",   "scratch",    "shiv",       "snazzy",
      "sphinx",     "sussy",      "spritz",     "squawk",     "staff",
      "strength",   "strengths",  "stretch",    "stronghold", "stymied",
      "unzip",      "uptown",     "vaporize",   "vixen",      "vodka",
      "voodoo",     "vortex",     "voyeurism",  "walkway",    "waltz",
      "wave",       "wavy",       "waxy",       "wellspring", "wheezy",
      "whiskey",    "whizzing",   "whomever",   "wimpy",      "witchcraft",
      "wizard",     "Woozy",      "Wristwatch", "wyfsi",      "wyvern",
      "xylophone",  "yachtsman",  "yippee",     "yoked",      "youthful",
      "yummy",      "zenith",     "zephyr",     "zigzag",     "zigzagging",
      "zilch",      "zipper",     "zodiac",     "zombie"};

  word = wordList[rand() % 169];
  word2 = word;
  cout << word;

  for (int count = 0; count < word.length(); count++) {
    theResult += "_";
  }
  cout << theResult;

  // cout << word << endl;
}
void wordTest() {
  if (lives == 1 || lives == 3 || lives == 5 || lives == 7) {
    cout << "\n enter any letter to gain hints for the word:\n";

    getline(cin, test2);
  } else {
    srand(time(0));
    const string AiList[26] = {"a", "b", "c", "d", "e", "f", "g", "h", "i",
                               "j", "k", "l", "m", "n", "o", "p", "q", "r",
                               "s", "t", "u", "v", "w", "x", "y", "z"};

    cout << "hmm, I wonder which letter I should choose...\n";
    if (1 == 1) {
      sleep(3); // sleeps for 3 second

      test2 = AiList[rand() % 26];
      cout << "I know the perfect letter! No way " << test2
           << " can be incorrect here, it has to be in the word!\n";
    }
  }
  if (test2 == word || theResult == word) {
    vicotry = true;
    playing = false;
    cout << " cracked";
  }
  string test3;
  if (word2.find(test2) > 100) {
    lives -= 1;
    cout << " There is no " << test2 << " in the word! Try again!!!!!\n";
    if (lives == 2 || lives == 4 || lives == 6) {
      cout << "ok, clearly you arent too hot at this game, let the pro over "
              "here handle it!\n";
    } else if (lives == 1 || lives == 3 || lives == 5) {
      cout << "ugh, fine I'll pass the game back to you\n";
    }

    if (lives == 0) {
      playing = false;
    } else if (lives == 6) {
      cout << "\n   |    \n   |    \n   |    \n  ___    \n / _ \\   \n| (_) |  "
              "\n \\___/  ";
    } else if (lives == 5) {
      cout << "\n      |    \n      |    \n      |    \n     ___    \n    / _ "
              "\\   \n   | (_) |  \n    \\___/";
      cout << "\n     / \\  \n     | |    \n     | |    ";
    } else if (lives == 4) {
      cout << "\n      |    \n      |    \n      |    \n     ___    \n    / _ "
              "\\   \n   | (_) |  \n    \\___/";
      cout << "\n   / / \\  \n  / /| |    \n /_/ | |    ";
    } else if (lives == 3) {
      cout << "\n      |    \n      |    \n      |    \n     ___    \n    / _ "
              "\\   \n   | (_) |  \n    \\___/";
      cout << "\n   / / \\ \\\n  / /| |\\ \\ \n /_/ | | \\_\\";

    } else if (lives == 2) {
      cout << "\n       |    "
           << "\n       |    "
           << "\n       |    "
           << "\n      ___    "
           << "\n     / _ \\   "
           << "\n    | (_) |  "
           << "\n     \\___/   "
           << "\n    / / \\ \\  "
           << "\n   / /| |\\ \\ "
           << "\n  /_/ | | \\_\\"
           << "\n     _|_|_   "
           << "\n    / /      "
           << "\n   / /       "
           << "\n  /_/        \n";
    } else if (lives == 1) {
      cout << "\n       |    "
           << "\n       |    "
           << "\n       |    "
           << "\n      ___    "
           << "\n     / _ \\   "
           << "\n    | (_) |  "
           << "\n     \\___/   "
           << "\n    / / \\ \\  "
           << "\n   / /| |\\ \\ "
           << "\n  /_/ | | \\_\\"
           << "\n     _|_|_   "
           << "\n    / / \\ \\  "
           << "\n   / /   \\ \\ "
           << "\n  /_/     \\_\\\n";
    }
    getline(cin, test3);
  } else {
    // cout<< "position of the letter is :"<<word2.find(test2);
    int replacer = 0;
    for (int i = 0; i < 6; i++) {
      replacer = word2.find(test2);
      if (replacer < 100 && replacer > -1) {
        word2.replace(replacer, 1, "_");
        theResult.replace(replacer, test2.length(), test2);
        // cout <<word2;
      }
    }
    cout << "\n" << theResult;
  }
}
void endScreen() {
  if (lives > 0) {
    cout
        << " thank u for playing hangman! Press anything to restart the game\n";
  } else {
    cout << "you have lost :( press anything to restart the game";
    getline(cin, test1);
  }
}

int main() {

  for (int i = 1; i > 0; i++) {
    startScreen();

    if (playing == true) {

      wordGen();
      while (playing == true) {

        wordTest();
      }
      endScreen();
    }
  }
}
