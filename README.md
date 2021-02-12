# TPA 2020 - Gestione Libreria
Questa repository contiene il testo dell'esame del corso "Tecniche di Programmazione Avanzata" del Dipartimento di Ingegneria Industriale, anno accademico 2019/2020.

# Istruzioni
L'esercizio consiste nella progettazione e nell'implementazione di un software C++ per la gestione di una libreria. 
Il software deve essere scritto mediante il paradigma di programmazione ad oggetti, quindi utilizzando ad esempio (ove possibile e sensato):
 * classi
 * incapsulamento
 * ereditarietà
 * polimorfismo
 * passaggio per riferimento
 * passaggio per riferimento costante
 * puntatori
 * metodi const
 * operatori
 * overload
 * valori di default
 * template

Nessun codice di partenza è fornito. Lo studente deve occuparsi sia della progettazione che dell'implementazione. Si consiglia di sottomettere anche il progetto del software, soprattutto se l'implementazione dovesse essere incompleta (ad esempio per mancanza di tempo). 
Il progetto sarà tenuto in conto nella valutazione finale. 
Formati accettabili per il progetto sono formati visuali (come pdf o jpeg) o formati testuali semplici (come txt o rtf). 
Idealmente l'implementazione dovrebbe includere anche una serie di test per verificare il corretto funzionamento del codice scritto.

# Descrizione

Scrivere un software per la gestione di una libreria. Il software deve permettere di tenere traccia di quali e quanti libri sono presenti nella libreria. Per ogni libro, devono essere memorizzate (almeno) le seguenti informazioni:
* titolo
* autori
* anno di pubblicazione
* casa editrice
* numero di copie disponibili in libreria

Per ogni autore il software deve memorizzare le seguenti informazioni:
* Nome
* Cognome
* Data di nascita
* Genere (fantascienza, romanzi, saggi)

Per ogni casa editrici il software deve memorizzare le seguenti informazioni:
* Nome
* Fondatore

Per ogni fondatore il software deve memorizzare le seguenti informazioni:
* Nome
* Cognome
* Data di nascita

Il programma deve permettere all'utilizzatore di:
* aggiungere un nuovo libro/autore/casa editrice
* ricercare un libro per titolo
* ricercare un libro per cognome dell'autore
* ricercare i libri pubblicati in un dato intervallo temporale (es: tra il 2014 ed il 2016)

Possibilmente la ricerca per titolo dovrebbe funzionare anche se la stringa utilizzata è solo una parte del titolo. Ad esempio, se la ricerca venisse effettuata con la stringa "human", allora il libro dal titolo "Sapiens: a brief history of human kind" dovrebbe essere trovato. Per la ricerca di una sottostringa all'interno di una stringa è possibile utilizzare il metodo [```find```](https://www.cplusplus.com/reference/string/string/find/) della classe ```string```, che restituisce l'indice della posizione in cui la sottostringa è stata trovata, in caso di successo, altrimenti restituisce -1.
