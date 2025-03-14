a) Complexitate timp: O(n); n = numarul de numere din fisierul txt.
Complexitate spatiu: O(1)

Sunt declarate variabilele:
x - va reține un număr citit din fișier, care este folosit ca criteriu de selecție.
a și b - vor reține, pe rând, numerele consecutive din fișier.
pen și ult - vor stoca, dacă se găsește o pereche de numere care îndeplinește condiția, valorile extrase din partea stângă a numerelor (obținute prin împărțirea la 10000).
Toate variabilele (în afară de x) sunt inițializate cu -1 pentru a indica faptul că nu au fost încă procesate valori valide.
Se deschide fișierul „bac.txt” și se citește primul număr, care se salvează în x.

Se intră într-un while care citește continuu câte un număr în variabila b.
Pentru fiecare valoare nou citită (b), se verifică dacă s-a mai citit un număr anterior (adică dacă a nu este încă -1).
Se extrag ultimele 4 cifre (presupuse a reprezenta un an) ale numerelor:
an_curent = b % 10000
an_precedent = a % 10000
Se compară:
Dacă an_curent este egal cu an_precedent și, în plus, egal cu x (numărul citit inițial), se consideră că s-a găsit o pereche de numere pentru care criteriul este îndeplinit.
În acest caz, se actualizează:
pen = a / 10000 – partea stângă a numărului precedent.
ult = b / 10000 – partea stângă a numărului curent.
La finalul fiecărei iterații, a primește valoarea lui b, astfel încât să se poată forma o nouă pereche cu următorul număr citit.

După terminarea parcurgerii fișierului, se verifică dacă s-a găsit cel puțin o pereche de numere care îndeplinește condiția (prin verificarea valorilor pen și ult).
Se verifice dacă au rămas la valoarea inițială -1, se afișează valorile pen și ult.
În caz contrar, se afișează mesajul "Nu exista".
Justificarea eficienței algoritmului

Parcurgere liniară: Algoritmul citește fișierul o singură dată, astfel că complexitatea sa este liniară, O(n), unde n este numărul de numere din fișier.
Operații elementare: Pentru fiecare pereche de numere, se efectuează operații aritmetice simple (modulo, împărțire, comparații), fiecare având un cost constant.
Memorie: Algoritmul utilizează un număr fix de variabile, independent de mărimea fișierului, deci consumul de memorie este optim.
