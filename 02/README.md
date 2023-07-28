## Øving 2: Pekere og referanser

Ved innlevering av en øving gjør følgende:

- Dobbeltsjekk at du ikke har advarsler i kildekoden
- Advarselflaggene -Wall -Wextra skal være slått på (standard i juCi++)
- Slett build-mappen i C++ prosjektet
- Pakk prosjektmappen i tar.gz formatet, for eksempel med navnet `solution2.tar.gz`.
- Lever inn tar.gz-filen i Blackboard

Oppgave 2 og 3 er teorioppgaver. Disse besvares i Blackboard eller i markdown- eller pdf-fil som leveres i Blackboard.

### Oppgave 1

Du skal tegne, resonnere og programmere i denne oppgaven. Lever inn kodeprosjektet etter at oppgave b) er utført. Du trenger ikke levere inn tegninger.

a) Følgende er gitt:

```cpp
int i = 3;
int j = 5;
int *p = &i;
int *q = &j;
```

Tegn opp variablene med innhold etter at disse definisjonene er utført.

Lag et lite program som skriver ut både adressen til, og innholdet av disse fire variablene. Ved utskrift av adressen (eksempelvis, adressen til variabelen j: cout << &j) får du skrevet ut adressen i 16-tallsystemet.

Stemmer utskriften med tegningen din?

b) Vi går ut fra at variablene har innholdet fra oppgave a. Hva blir skrevet ut når følgende programbit utføres?

```cpp
*p = 7;
*q += 4;
*q = *p + 1;
p = q;
cout << *p << " " << *q << endl;
```

Tegn gjerne opp variablene etter hver enkelt setning. Utvid programmet fra a), og sjekk at det stemmer med tegningen din.

### Oppgave 2 - teorioppgave

Hva vil skje hvis du skriver:

```cpp
char *line = nullptr;   // eller char *line = 0;
strcpy(line, "Dette er en tekst"); 
```

### Oppgave 3 - teorioppgave

Finn ting som kan gå galt i følgende programbit:

```cpp
char text[5];
char *pointer = text;
char search_for = 'e';
cin >> text;
while (*pointer != search_for) {
  *pointer = search_for;
  pointer++;
}
```
### Oppgave 4

Finn alle syntaksfeil i følgende programbit:

```cpp
int a = 5;
int &b;
int *c;
c = &b;
*a = *b + *c;
&b = 2;
```
Legg setningene inn i en .cpp-fil og endre koden slik at den kompilerer. Beskriv årsaken til hver enkelt av kompileringsfeilene i kommentarer.

### Oppgave 5

Vi har definert variabelen `double number`.

- Definer en peker som skal peke til `number`.
- Definer en referanse som skal referere til `number`.
- Vis tre måter å få tilordnet verdi til `number` på.

Legg dette i en .cpp-fil som kompilerer.

### Oppgave 6

Lag en funksjon som finner summen av elementene i en tabell. Funksjonen skal ha følgende signatur:

```cpp
int find_sum(const int *table, int length);
```
I hovedprogrammet skal du opprette en tabell med 20 elementer, fylle tabellen med tallene 1, 2, 3, osv., og bruke funksjonen til å finne summen av:

- De 10 første tallene
- De 5 neste tallene
- De 5 siste tallene
