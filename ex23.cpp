#include <asm-generic/errno.h>
#include <ctime>
#include <iostream>
#include <ostream>
#include <string>

std::string user_input() {
  std::string input;
  std::cout << ">";
  std::cin >> input;
  return input;
}

enum class Rooms_name {
  HELL,
  HOUSE,
  HEAVEN,
  END,
  BAD_END
};

void introduction () {
  std::cout << "Boujour a vous jeune voyageur.\n";
  std::cout << "Bienvenue dans ce jeu d'aventure et d'exploration.\n";
  std::cout << "Par erreur les divinité de ces monde vous on envoyé en enfer.\n";
  std::cout << "Pour vous en sortir vous devrais faire preuve de compréhention de votre environement.\n";
}

Rooms_name Hell_room() {
  std::cout << "Si t'a bien suivie l'intraduction tu sais deja où tu es.\n";
  std::cout << "You have the choice, you can use false or try to fight as you are\n";

  while (1) {
    if (user_input() == "false") {
      std::cout
          << "Well done.\nall the scene you saw were all false. and be honest";
      std::cout << " what were you trying to fight anyway";
      return Rooms_name::HOUSE;
    }
    if (user_input() == "fight") {
      std::cout << "Ho serriously what were you trying to fight\n";
      std::cout
          << "You just throw a fist in the air, lose your balance and fall\n";
      std::cout << "You're dead now";
      return Rooms_name::BAD_END;
    } else {
      std::cout << "you have only 2 choice 'fight' or 'false'";
    }
  }
}

Rooms_name HOUSE_room() {
  while (1){
    std::cout
        << "Since you are not a battlejunky you are now in you bed of your "
           "beautifull house\nyou sit on the side of the bed and look "
           "arround\non the drower on the side of the bed you see a knife. In "
           "front of you is a door it's ajar and you can percive glitering "
           "through\n";
  }  
}

int main() {
  
}
