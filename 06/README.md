## Øving 6

### Oppgave 1

Jobb videre med sjakkbrett-løsningen deres fra Øving 5:

- Lag en klasse `ChessBoardPrint` som tar seg av utskrift (`std::cout`-kallene) til terminalen.
- `ChessBoardPrint` må ha tilgang til `ChessBoard`-instansen. For eksempel i `main()`: `ChessBoard board; ChessBoardPrint print(board);`
- I konstruktøren til `ChessBoardPrint` skal dere definere funksjonsobjektene til `ChessBoard`-instansen ved hjelp av lambda-uttrykk.
- Utskriften av sjakkbrettet etter et sjakktrekk skal også foregå i `ChessBoardPrint`.
- Legg til et eget funksjonsobjekt i `ChessBoard` (for eksempel `after_piece_move`) som blir kjørt etter et trekk er utført. Dette funksjonsobjektet kan du bruke i `ChessBoardPrint`.

### Oppgave 2

Ta utgangspunkt i `example6` og lag en enkel web-server som svarer på følgende GET-forespørsler:

1. `GET / HTTP/1.1`
   - I en nettleser (`http://localhost:8080`) skal følgende tekst vises: "Dette er hovedsiden"
2. `GET /en_side HTTP/1.1`
   - I en nettleser (`http://localhost:8080/en_side`) skal følgende tekst vises: "Dette er en side"
3. Andre forespørsler skal gi statuskoden 404 Not Found
