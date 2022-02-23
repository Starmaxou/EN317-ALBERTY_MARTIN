# EN317-ALBERTY_MARTIN
Dépôt du projet pour le cours EN317

## Compilation du projet par script
Dans le dossier _Mediatheque_, faire :
```bash
sh compile.sh
```
Pour executer le programme:
```bash
./build/mediatheque
```

## Compilation du projet manuellement
Si le script ne fonctionne pas. 
- Créez un dossier pour la compilation :
```bash
mkdir build
```
- Dans ce dossier executer les commandes :
```bash
cmake ..
make
```
- Une fois le programme compilé, lancez l'executable avec :
```bash
./mediatheque
```