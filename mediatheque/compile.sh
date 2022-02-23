echo "--- Script de compilation du projet médiathèque ---"

echo "-- Création dossier de compilation --"
mkdir -p build #création du dossier de compilation (si il n'existe pas)
cd build
echo "-- Création MakeFile --"
cmake ..
echo "-- Compilation --"
make

echo "--- Fin du script ---"
