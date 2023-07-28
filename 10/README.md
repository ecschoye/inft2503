# Example game with SFML, imgui, older OpenGL, and Bullet Physics

## Prerequisites
The C++ IDE [juCi++](https://gitlab.com/cppit/jucipp) should be installed.

## Installing dependencies

### Debian based distributions
`sudo apt-get install libsfml-dev libglm-dev libbullet-dev`

### Arch Linux based distributions
`sudo pacman -S sfml glm bullet`

### MacOS
`brew install sfml glm bullet`

## Compiling and running
```sh
git clone --recursive https://gitlab.com/ntnu-iini4003/game
juci game
```

Choose Compile and Run in the Project menu.



## Øving 10

Ta utgangspunkt i [https://gitlab.com/ntnu-iini4003/game](https://gitlab.com/ntnu-iini4003/game). Instruksjoner for å kjøre eksempelkoden finner du i README.md filen.

Implementer ferdig spillet der målet er å slippe ballen slik at boksene blir slått ned:

- Omstart av spillet
- Slipp ballen
- Horisontal og vertikal posisjonering av ballen som skal slippes

I utgangspunktet er det følgende klasser/klassemetoder som må endres:

- Klassen World med metoder
- Metoden Application::start()
    - Se spesielt etter `// Implementation needed` i `Application::start()`.

Dere står fritt til å utvide eller endre spillet slik dere måtte ønske!

Siden dette er en åpen oppgave, finnes det ikke noe løsningsforslag til denne øvingen.