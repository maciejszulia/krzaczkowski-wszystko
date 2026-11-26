# krzaczkowski-wszystko

C exercises from a textbook, chapters 1–3; the original note says that I set out to solve the whole book.

University coursework from my Computer Science studies at UWM (2020–2024). I wrote the code by hand; the commit history is unchanged. This README was added in November 2026.

Years of work: 2021 (first commit on 14 May 2021, last commit on 17 May 2021).

## Contents

- `rozdzial-1/`, `rozdzial-2/`, `rozdzial-3/`: 23, 7 and 5 `.c` files.
- `.sln`, `.vcxproj` and build logs: Visual Studio files.

I wrote the code in Visual Studio. With gcc 16 on Linux, 7 of the 35 `.c` files compile as they are, 27 use `scanf_s` from Microsoft's C library, which glibc does not have, and 1 compiles with `-std=gnu89`.

## Running

```
gcc -o /tmp/hello rozdzial-1/1.2.1.c && /tmp/hello
```

Result on 26 November 2026: `hello world`.

## Original note

# krzaczkowski-wszystko
 robie se calom ksiomszke bo tak postanowilem

## Po polsku

Repozytorium zawiera ćwiczenia w C z rozdziałów od 1 do 3 podręcznika. Kod napisałem ręcznie na studiach informatycznych na UWM w 2021 roku.
