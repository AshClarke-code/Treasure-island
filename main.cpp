#include <iostream>



int main(){

    std::string opening_message {"Welcome to Treasure Island.\nYour mission is to find the treasure."};

    std::string chosen_path_fail {"You fell down a giant hole...\n... but, I couldn't find a picture for that, so it turned into a well instead..\n... I guess what I'm trying to say is you died!\nGAME OVER!!!!"};
    std::string chosen_path_success {"Oh wow... You made it.\nI'll be honest. I wasn't expecting that.\nSo...\non to the next one. I guess?"};

    std::string lake_message {"What a pretty lake.\n I mean really, I could just stare at it for hours...\n\n\n\n\n\n... what? Oh right?\n You're still here...\nfine."};
    std::string lake_decision_fail {"Wow!\nI mean you really need to learn to take a hint...\nStill going with that?\nfine\nHere's a fish...\n so pretty...\npretty enough to EAT YOU!\nYeah! It wasn't even a cool fish either...\nYou died!\nGAME OVER!!!"};
    std::string lake_decision_success {"You know? I'm really starting to like you.\n You're going to be really excited when you get to the end of this.\nI mean... good things really do come to those who wait."};

    std::string door_message {"Suddenly. Three magical doors appear.\nAlong with a very cute lil poody tat.\nHe's so fluffy!!!\nFOCUS BEAN!\nRight! You've come so far...\n it would be a shame for you to mess it all up now."};
    std::string door_failure_beast {"We were rooting for you!\nWe were all rooting for you!\nWhat even is that? It's absolutely terrifying.\nYou're on your own mate... I tried to warn you.\nYou were eaten by a beast named Chad.\nGAME OVER!"};
    std::string door_failure_fire {"You were the chosen one!\n You were supposed to bring balance to the...\nOh damn! Guess now you're just fresh, fried and crispy.\nYou were burned by fire.\nGAME OVER!"};
    std::string door_success = {"Oh mer gerd!\nYou did it. You actually did it!\nIt's been so long... I never thought anyone would ever actually find it.\nCongratulations! It's the EYE OF THE TIGER!\nVery rare. Very powerful.\nKind of gross!"};

    std::string exit_message {"This game is so silly... But it was so much fun to make. If you did actually try this. Thanks for playing and remember that code is supposed to be fun.\nYou won!"};

    std::string treasure_chest {R"(
*******************************************************************************
          |                   |                  |                     |
 _________|________________.=""_;=.______________|_____________________|_______
|                   |  ,-"_,=""     `"=.|                  |
|___________________|__"=._o`"-._        `"=.______________|___________________
          |                `"=._o`"=._      _`"=._                     |
 _________|_____________________:=._o "=._."_.-="'"=.__________________|_______
|                   |    __.--" , ; `"=._o." ,-"""-._ ".   |
|___________________|_._"  ,. .` ` `` ,  `"-._"-._   ". '__|___________________
          |           |o`"=._` , "` `; .". ,  "-._"-._; ;              |
 _________|___________| ;`-.o`"=._; ." ` '`."\` . "-._ /_______________|_______
|                   | |o;    `"-.o`"=._``  '` " ,__.--o;   |
|___________________|_| ;     (#) `-.o `"=.`_.--"_o.-; ;___|___________________
____/______/______/___|o;._    "      `".o|o_.--"    ;o;____/______/______/____
/______/______/______/_"=._o--._        ; | ;        ; ;/______/______/______/_
____/______/______/______/__"=._o--._   ;o|o;     _._;o;____/______/______/____
/______/______/______/______/____"=._o._; | ;_.--"o.--"_/______/______/______/_
____/______/______/______/______/_____"=.o|o_.--""___/______/______/______/____
/______/______/______/______/______/______/______/______/______/______/_____ /
*******************************************************************************
)"};
    std::string well {R"(               __
                .'/\'.
                .'-/__\-'.
            .'--/____\--'.
            .'--./______\.--'.
        .'--../________\..--'.
        .'--.._/__________\_..--'.
    .'--..__/____________\__..--'.
    .'--..___/______________\___..--'.
    '========'================'========'
        [_|__]            [_|__]
        =[__|_]=====""=====[__|_]==.
        [_|__]     '|     [_|__]  |
        [__|_]     |'     [__|_]  |
        [_|__]  .--JL--.  [_|__]  '===O
        [__|_]   \====/   [__|_]
        [_|__]_.-| .; |-._[_|__]
        [__|_]'._ \__/(_.'[__|_]
        [.-._]            [_.-.]
        [_.-.'--..____..--'.-._]
    (o)  [(_.'   .-.     .-.'._)\ (o)
    (\'/) [  .-. (_.'.-. (_.' .-.](\'/)
    ;: [ (_.'.-. (_.' .-. (_.'| ;:'
    ;:    [ .-. '._) .-. '._).-. ]   ;:.
        [(_.'  .-. '._) .-.'._)]
    (o) /.-.  (_.'.-.  (_.' .-.];:(o)
    (\'/)['._).-. (_.'   .-.(_.'] (\'/)
        [   (_.'.-.  .-.'._)   \ ;:
    ;:'   '-._    '._) '._)   _.-'
    LGB      '---..____..---'   ;:'
    ;:'      ;':.:;     ;;"
)"};

    std::string lake {R"(                  _
             .''.' \    _  __
 ___         './    '. ' ''  '
    '._______.'       \
                       '.__________
                                   '-.____________
 _________________________________________________'.__________________
                                      ____________.'
                         __________.-'
      _______          .'                      
 ___.'       '.       /               '-._         
             .'\    .' ._,.__,        ____\____.o.
             '..'._/                 '-._______.-'
                                     .-'_______'-.
                                         _/    'o'
                                      .-'
)"};

    std::string fish {R"(
                     __,
               .-'_-''
             .' {'
         .-''''''-.    .-''''.
       .'(0)       '._/ _.-.  '\
      }     '. ))    _<'    )'  |
       '-.,\'.\_,.-\' \'---; .' /
            )  )       '-.  '--:
           ( ' (          ) '.  \
            '.  )      .'(   /   )
              )/      (   '.    /
                       '._( ) .'
                    jgs    ( (
                            '-.
)"};

    std::string door {R"(           ________
             / ______ \
             || _  _ ||
             ||| || |||
             |||_||_|||
             || _  _o|| (o)
             ||| || |||
             |||_||_|||      ^~^  ,
             ||______||     ('Y') )
            /__________\    /   \/
    ________|__________|__ (\|||/) _________
   hjw     /____________\
   '97     |____________|
   )"};


    std::string beast {R"(
                   (    )
                  ((((()))
                  |o\ /o)|
                  ( (  _')
                   (._.  /\__
                  ,\___,/ '  ')
    '.,_,,       (  .- .   .    )
     \   \\     ( '        )(    )
      \   \\    \.  _.__ ____( .  |
       \  /\\   .(   .'  /\  '.  )
        \(  \\.-' ( /    \/    \)
         '  ()) _'.-|/\/\/\/\/\|
             '\\ .( |\/\/\/\/\/|
               '((  \    /\    /
               ((((  '.__\/__.')
                ((,) /   ((()   )
                 "..-,  (()("   /
            pils  _//.   ((() ."
          _____ //,/" ___ ((( ', ___
                           ((  )
                            / /
                          _/,/'
                        /,/,"
)"};

    std::string fire {R"(
               (  .      )
           )           (              )
                 .  '   .   '  .  '  .
        (    , )       (.   )  (   ',    )
         .' ) ( . )    ,  ( ,     )   ( .
      ). , ( .   (  ) ( , ')  .' (  ,    )
     (_,) . ), ) _) _,')  (, ) '. )  ,. (' )
 ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
)"};

    std::string tiger {R"(
                         __,,,,_
          _ __..-;'''--/'/ /.',-'-.
      ('/' ' |  \ \ \\ / / / / .-'/',_
     /''\ \   |  \ | \| // // / -.,/_,'-,
    /<7' ;  \ \  | ; ||/ /| | \/    |'-/,/-.,_,/')
   /  _.-, ',-\,__|  _-| / \ \/|_/  |    '-/.;.\'
   '-'  f/ ;      / __/ \__ '/ |__/ |
        '-'      |  -| =|\_  \  |-' |
              __/   /_..-' '  ),'  //
          fL ((__.-'((___..-'' \__.'
)"};

    std::string chosen_path {""};
    std::string lake_decision {""};
    std::string door_decision {""};

    std::cout << opening_message << "\n" << treasure_chest << "\n";

    std::cout << "You arrive at a crossroads. Which path do you take? Type 'left' or 'right':\n";
    std::cin >> chosen_path;
    if (chosen_path != "left"){
        std::cout << well << "\n" << chosen_path_fail << "\n";
        return 0;
    }

    std::cout << chosen_path_success << "\n" << lake << "\n" << lake_message << "\n";

    std::cout << "You've come across the most beautiful lake it the world. Will you wait here or swim across? Type 'swim' or 'wait':\n";
    std::cin >> lake_decision;
    if (lake_decision != "wait"){
        std::cout << fish << "\n" << lake_decision_fail << "\n";
        return 0;
    }

    std::cout << lake_decision_success << "\n" << door << "\n" << door_message << "\n";

    std::cout << "This is it. Three doors. Blue, Red and Yellow, what will it be? Type 'blue', 'red' or 'yellow':\n";
    std::cin >> door_decision;
    if(door_decision == "blue"){
        std::cout << beast << "\n" << door_failure_beast << "\n"; 
    }
    else if(door_decision == "red"){
        std::cout << fire << "\n" << door_failure_fire << "\n";
    }
    else if(door_decision == "yellow"){
        std::cout << tiger << "\n" << door_success << "\n" << exit_message << "\n";
    }
    else {
        std::cout << "I'm not even going to dignify that with a response.\n GAME OVER.\n";
    }

    return 0;
}