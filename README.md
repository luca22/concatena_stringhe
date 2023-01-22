# concatena_stringhe

Nel file "stringhe.c" implementare la definizione della funzione:


extern char *concatena(const char *prima, const char *seconda);


La funzione riceve due puntatori a stringhe di caratteri zero terminate e alloca dinamicamente sull'heap sufficiente memoria per contenerle entrambe (incluso un terminatore) e copia nel nuovo spazio allocato la prima, seguita dalla seconda.

 Se uno dei puntatori (prima o seconda) è NULL o punta ad una stringa vuota (cioè il primo carattere vale 0), la funzione lo tratta come una stringa di lunghezza 0.
