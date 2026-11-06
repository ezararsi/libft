# libft

Erstes Projekt im 42-Curriculum: eine eigene C-Bibliothek. Ein Teil der libc-Funktionen (`strlen`, `memcpy`, `atoi`, ...) wird nachimplementiert, ergänzt um zusätzliche Hilfsfunktionen wie `ft_split` und `ft_itoa`. Als externe Funktionen sind nur `malloc`, `free` und `write` erlaubt.

Das Ergebnis ist die statische Bibliothek `libft.a`, die in späteren Projekten wie `so_long` wiederverwendet wird.

> **Hinweis:** Entstanden 2022 an der 42 Vienna, 2026 hier neu veröffentlicht – daher beginnt die Git-Historie erst 2026.

## Bauen

```bash
cd libft
make          # erstellt libft.a
make clean    # löscht die .o-Dateien
make fclean   # löscht zusätzlich libft.a
make re
```

Kompiliert wird mit `cc -Wall -Wextra -Werror`.

Verwendung in einem eigenen Programm:

```c
#include "libft.h"

int main(void)
{
    char **words = ft_split("hallo schöne welt", ' ');

    ft_putendl_fd(words[1], 1);     // schöne
    ft_putnbr_fd(-42, 1);           // -42
    return (0);
}
```

```bash
cc main.c -L./libft -lft -I./libft -o programm
```

## Funktionen

**Teil 1: Nachimplementierte libc-Funktionen**

- Zeichen: `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`
- Speicher: `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`
- Strings: `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup`
- Umwandlung: `ft_atoi`

**Teil 2: Zusätzliche Funktionen**

| Funktion | Beschreibung |
|---|---|
| `ft_substr` | Teilstring ab `start` mit höchstens `len` Zeichen |
| `ft_strjoin` | verbindet zwei Strings zu einem neuen String |
| `ft_strtrim` | entfernt Zeichen aus `set` am Anfang und Ende |
| `ft_split` | teilt einen String an einem Trennzeichen in ein `NULL`-terminiertes Array |
| `ft_itoa` | wandelt einen `int` in einen String um |
| `ft_strmapi` | wendet eine Funktion auf jedes Zeichen an und liefert einen neuen String |
| `ft_striteri` | wie `ft_strmapi`, verändert jedoch den übergebenen String |
| `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd` | Ausgabe auf einen File-Descriptor |

## Implementierungsdetails

- `ft_memmove`: Überlappen sich die Bereiche und liegt `src` vor `dest`, wird von hinten nach vorne kopiert, damit keine Bytes überschrieben werden, bevor sie gelesen wurden.
- `ft_split` durchläuft den String zweimal: zuerst werden die Wörter gezählt, um das Array passend zu reservieren, danach wird jedes Wort einzeln kopiert.
- `ft_itoa` rechnet intern mit `long long`, da `INT_MIN` als `int` nicht negiert werden kann. `ft_putnbr_fd` behandelt `INT_MIN` als Sonderfall.
- Jede Funktion liegt in einer eigenen Datei, Hilfsfunktionen sind `static`. Der Code hält sich an die 42-Norm (max. 25 Zeilen pro Funktion, max. 5 Funktionen pro Datei).
