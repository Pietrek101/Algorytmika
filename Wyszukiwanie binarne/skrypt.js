const tablica = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];
let szukana = Number(window.prompt("Jakiej liczby szukamy?"));
let lewo = 0;
let prawo = tablica.length - 1;
while (lewo <= prawo){
	const środek = Math.floor((l + r) / 2);
	if(tablica[środek] === szukana){
		window.alert("Znaleźliśmy szukaną")
	}
}