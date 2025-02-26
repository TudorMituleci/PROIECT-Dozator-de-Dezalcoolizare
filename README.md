# PROIECT Dozator de Dezalcoolizare

# 1.REZUMAT

## 1.1 Descrierea proiectului
   Dozatorul va turna 40 ml de lichid la un interval de timp prestabilit, in cazul in care senzorul infrarosu detecteaza un pahar sub robinetul montat. Robinetul nu se va deschide in afara intervalului de timp setat, iar acest interval creste cu 10 secunde o data la 3 turnari, pana ajunge la un minut.

## 1.2 Descrierea implementarii
 -	Am folosit un robinet conectat la un recipient de plastic printr-un furtun
 -	Am legat robinetul la un SERVOMOTOR MG90S pentru deschidere si inchidere
 -	Am folosit un SENZOR OBSTACOL IR pentru detectarea paharului
 -	Am utilizat placa Arduino Nano montata pentru captarea semnalelor trimise de senzor si pentru trimiterea acestora catre  servomotor.
 -	Pentru alimentarea componentelor am folosit o baterie externa conectata la placa Arduino printr-un cablu USB tip C
 -	Breadboard pe care am montat placa Arduino
 -	Cutie de lemn pentru carcasa dozatorului

# 2.INTRODUCERE
## 2.1 Prezentarea temei
   Acest proiect reprezinta o solutie simpla si eficienta pentru automatizarea turnarii lichidului folosind un dozator controlat de un microcontroller. Sistemul foloseste un servomotor pentru a deschide si inchide robinetul, un senzor infrarosu(IR) pentru a detecta prezenta unui pahar si un timer care isi schimba intervalele automat. Scopul principal al proiectului este de a turna lichidul in mod controlat si economic, eliminand nevoia interventiei manuale. Aceasta implementare demonstreaza o aplicare practica a senzorilor si a componentelor electronice de baza in realizarea unui sistem automatizat.

## 2.2 Motivatia practica pentru alegerea temei
   Motivul principal pentru alegerea acestei teme este combaterea alcoolismului. Alcoolicii cronici intampina dificultati majore in renuntarea brusca la consumul de alcool, deoarece pot suferi sevraje severe care nu doar ca le pun sanatatea in pericol, dar pot duce si la deces in cazuri extreme.
   Prin acest proiect, am creat un sistem care sa ajute la dozarea controlata si graduala a alcoolului, reducand riscurile asociate sevrajului si care ofera o solutie automatizata pentru gestionarea acestui proces. 

## 2.3 Sisteme actuale
   In prezent, nu exista dispozitive automatizate specializate pentru dozarea controlata a alcoolului destinate tratamentului alcoolismului. Tratamentul dependentei de alcool se bazeaza pe interventii medicale si psihoterapeutice, inclusiv administrarea de medicamente.

# 3.PREZENTAREA PLATFORMEI HARDWARE

## 3.1 Caracteristici tehnice – Arduino Nano
   Placa de dezvoltare compatibila Arduino NANO ATmega328p cu conector USB tip C.
- Microcontroller: ATmega328p
-	Chip USB: CH340C
-	Tensiune de functionare: 5V
-	Tensiune de intrare (recomandat): 8 – 12V
-	Pini digitali I/O: 21 (din care 6 pini PWM de iesire)
-	Pinii de intrare analogici: 8
-	Conexiune: USB 2.0 type C
-	Curent DC pe pin I/O: 40 mA
-	Memorie FLASH: 32 KB (ATmega328p)
-	Dimensiuni pcb: 44mm x 18.6mm

## 3.2 Caracteristici tehnice – Servomotor MG90S
   Se poate roti aproximativ de 120 (60 de grade in fiecare directie), si functioneaza ca si modelul standard doar ca este mai mic.
-	Greutate: 13.4g
-	Tensiune de operare: 4.8V – 6V
-	Unghi rotire: 120 de grade
-	Dimensiuni: 22.5 x 12 x 35.5 mm aprox.

## 3.3 Caracteristici tehnice – Senzor Obstacol IR
   Senzorul emite pe pinul OUT un semnal digital atunci cand este declansat (apropiere de obiect). Acest lucru este semnalat si de LED-ul prezent pe placa.
-	Tensiune: 3.3-5V
-	Distanta: 0-20cm reglabil prin potentiometru
-	Unghi de detectie: 35 grade

