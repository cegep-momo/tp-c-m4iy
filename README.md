# Construire le projet
Vous pouvez utiliser un dev container de base C++ de VScode.
Le projet utilise cmake, pensez à l'inclure dans votre dev container.

Voici les lignes de commandes pour compiler le projet:
```
$ mkdir build
$ cd build
$ cmake ..
$ make
```

# Répertoire data

Il contient 2 fichiers `books.txt`et `users.txt` que vous pouvez utilisez pour tester votre code.
Pour ca il suffit de les copiers dans le repertoire `build` avec l'application `bibliotheque`

question 1:
La fonctionnalite que j'ai choisi a expliquer qu'on n'a pas vu en classe est le splittage des string que on a eu besoin d'utiliser pour la methode fromfileformat dans book.cpp .  On utilise le stringstream, qui nous aide a traiter le string comme si qu;il venait d'un fichier pour pouvoir extraire ses parties. on cree une variable string temporaire ou on posera chaque partie pendant qu'on l'extrait. avec getline (ss, part, '|') on lit les caracteres du stringstream ss dans la variable temporaire jusqua ce qu'on atteint le deliminateur |. apres on check si l'exctraction est successful, avec les if, et si oui, on assigne la bonne partie a la bonne la variable membre book. 

ressource utilisee pour coder le split : https://www.geeksforgeeks.org/cpp/how-to-split-string-by-delimiter-in-cpp/

question 2:
pour ameliorer le programme, je pense le plus important c'est le visuel, alors il faudrait utiliser une interface graphique comme Qt, un framework utilise pour coder une interface avec des boutons, champs de sasie etc. Ca pourrait etre cool aussi de implementer une une recherche partielle, genre pas besoin de saisir le titre ou l'auteur au complet, juste quelques lettres et les resultats aparaisseriaent. Ca pourrait etre cool d'avoir des comptes d'utilisateur, et un ou des comptes admin qui rajoute ou efface des livres. On pourrait aussi ajouter a l'option statistiques les livres les plus empruntes, on aurait alors un index d'imprunt. 


