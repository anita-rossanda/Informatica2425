;Trova i passaggi da effettuare in Assembler 8086 per visualizzare un singolo carattere a video. 
;Successivamente prova a realizzare un algoritmo che visualizza a video 10 asterischi in colonna.

.model small
.stack 200h
.data
.code

MAIN:
.startup
mov ax, @data
mov ds, ax



fine:
mov ah, 4ch
int 21h
.exit
END