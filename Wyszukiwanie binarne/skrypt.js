const tablica = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20]
let szukana = Number(window.prompt("Jakiej liczby szukamy?"))
let znaleziona = 0
let prob = 0
let lewo = 0
let prawo = tablica.length - 1
while (lewo <= prawo){
	const środek = Math.floor((lewo + prawo) / 2)
	if(tablica[środek] === szukana){
		znaleziona++
		break
	}
	else if (tablica[środek] <= szukana) {
		lewo = środek + 1
		prob++
    }
	else if (tablica[środek] >= szukana) {
		prawo = środek - 1
		prob++
    }
}
if (znaleziona == 1){
	window.alert("Znaleźliśmy szukaną, zajęło nam to " + prob + " prób/y")
}
if (znaleziona == 0){
	window.alert("Nie znaleźliśmy szukanej, nie ma jej w tablicy.")