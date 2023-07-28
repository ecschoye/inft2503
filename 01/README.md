## Øving 1: Grunnleggende C++

Ved innlevering av en øving gjør følgende:

- Dobbeltsjekk at du ikke har advarsler i kildekoden
- Advarselflaggene -Wall -Wextra skal være slått på (standard i juCi++)
- Slett build-mappen i C++ prosjektet
- Pakk prosjektmappen i tar.gz formatet, for eksempel med navnet `solution1.tar.gz`.
- Lever inn tar.gz-filen i Blackboard

### Oppgave

Du skal jobbe med et program som leser inn temperaturer for en periode og teller opp antallet i tre intervaller: under 10 grader, mellom 10 og 20 grader (inkludert 10 og 20 grader), og over 20 grader.

Lengden på perioden setter du som en konstant:

```cpp
const int length = 5;
```

ppgaven skal løses på to måter, og du skal levere en .cpp-fil med et fullstendig program for hver enkelt av de to måtene.

a) Les inn temperaturene (datatype `double`) fra brukeren. Bruk ikke tabeller, og lag heller ikke egne funksjoner. Brukergrensesnittet kan se slik ut:

```
Du skal skrive inn 5 temperaturer.
Temperatur nr 1: 10
Temperatur nr 2: 14
Temperatur nr 3: 20
Temperatur nr 4: 25
Temperatur nr 5: 8
Antall under 10 er 1
Antall mellom 10 og 20 er 3
Antall over 20 er 1
```

b) Les inn temperaturene fra en fil og lagre dem i en tabell før du begynner opptellingen. Innlesingen fra fil skal ligge i en funksjon med følgende prototyp (deklarasjon):

```cpp
void read_temperatures(double temperatures[], int length);
```
Denne skal du sette opp foran `main()`, mens funksjonsdefinisjonen skal plasseres etter `main()` i filen din:
    
```cpp
void read_temperatures(double temperatures[], int length) {
// her plasserer du koden i funksjonen, vi sier at vi definerer funksjonen
}
```
Du kaller funksjonen på følgende måte fra `main()`:

```cpp
read_temperatures(temperatures, length);
```
Funksjonen skal åpne filen, lese inn temperaturene og lagre dem i tabellen temperatures, og endelig lukke filen.

Kompilatoren forholder seg til funksjonsdeklarasjonen, mens lenkeren trenger funksjonsdefinisjonen. Det er også mulig å plassere funksjonsdefinisjonen foran main() (i stedet for prototypen), fordi en definisjon også er en deklarasjon (men en deklarasjon er ikke en definisjon). Filene du inkluderer med #include inneholder i hovedsak funksjonsprotyper.

