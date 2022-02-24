// globale variabelen
var aantalKnikkersBoven = 0;    // aantal knikkers dat bovenin is binnengekomen
var wachttijd = 15;             // wachttijd voor het poortje in seconden
const UPDATE_INTERVAL = 5000;   // tijd in milliseconden tussen het door widget opvragen van gegevens
var button;
var wachtijdInput;



/**
 * setup
 * de code in deze functie wordt eenmaal uitgevoerd,
 * als p5js wordt gestart
 */
function setup() {
  // Maak het canvas van je widget
  createCanvas(300, 600);

  //var plaats = x;
  //var hoogte = y;

  //var teller = new Teller(plaats, hoogte);
  
 // tellers.push(teller);

 teller1 = new Teller(145,50);
 teller2 = new Teller(32,485);
 teller3 = new Teller(262,485);


  // om de ... milliseconden wordt 'vraagSensorData' uitgevoerd
  setInterval(vraagSensorData1, UPDATE_INTERVAL);
}


/**
 * draw
 * de code in deze functie wordt meerdere keren per seconde
 * uitgevoerd door de p5 library, nadat de setup functie klaar is
 */
function draw() {
  // schrijf hieronder de code van je widget
  // hieronder wordt schematisch een knikkerbaan getekend

  // achtergrond: houtkleur, kies gerust iets anders
  background(175, 144, 105);

  // twee dikke strepen als 'opvangbak'
  stroke(0, 0, 0);
  strokeWeight(10);
  line(50, 20, 135, 60);
  line(250, 20, 165, 60);
  strokeWeight(4);
  line(80, 80, 200, 100);
  line(240, 85, 240, 125);
  line(240,125,100,150);
  stroke('brown');
  line(35,140,90,185);
  stroke('black');
  line(240,175,110,235);
  circle(70,300,60);
  strokeWeight(6);
  line(15,300,40,300);
  line(100,300,125,300);
  line(70,330,70,355);
  line(70,270,70,245);
  line(92,320,110,340);
  line(50,280,30,260);
  line(50,320,29,345);
  line(92,280,110,260);
  strokeWeight(0);
  fill(175, 144, 105);
  circle(70,300,56);
  strokeWeight(4);
  line(50,370,50,385);
  line(50,385,210,405);
  line(240,390,240,425);
  line(240,425,170,445);
  line(60,425,130,445);
  line(150,465,50,485);
  line(150,465,250,485);
  line(25,465,25,505);
  line(275,465,275,505);
  line(275,505,170, 535);
  line(25,505,130,535);
  stroke('yellow');
  line(135, 64,165, 64);
  line(110,235,110,205);
  line(170,445,155,445);
  line(130,445,145,445);
  //stroke('blue');
  //circle(35,485,3);
  //circle(265,485,3);   

  teller1.show();
  teller2.show();
  teller3.show();

 // for(var i = 0; i < tellers.length; i++){
   // tellers[i].show();
   // tellers[i].update();
  //}
}


// stuurt een verzoek aan de server dat alle
// sensordata opvraagt
function vraagSensorData1() {
  var request = new XMLHttpRequest();

  // maak een http-verzoek
  request.open('GET', '/api/get/sensorData1', true);
  request.open('GET', '/api/get/sensorData2', true);
  request.open('GET', '/api/get/sensorData3', true);

  // wat uitvoeren als het antwoord teruggegeven wordt?
  request.onload = function() {
    var data = JSON.parse(request.response);

    if (request.status == 200) {
      console.log("Dit geeft de server terug:" + data);
      teller1.aantal = data.aantalKnikkers1;
      //teller2.aantal = data.aantalKnikkers2;
      //teller3.aantal = data.aantalKnikkers3;
    }
    else {
      console.log("server reageert niet zoals gehoopt");
      console.log(request.response);
    }
  }

  // verstuur het request
  request.send();
}


// stuurt een http-verzoek aan de server met de
// nieuwe instellingen
function stuurNieuweInstellingen() {
  var request = new XMLHttpRequest();

  // maak een http-verzoek
  request.open('GET', '/api/set/instellingen?wachttijd=' + wachtijdInput.value(), true)

  // wat uitvoeren als het antwoord teruggegeven wordt?
  request.onload = function() {
    if (request.status == 200) {
      console.log("server accepteerde instellingen");
    }
    else {
      console.log("server reageert niet zoals gehoopt");
      console.log(request.response);
    }
  }

  // verstuur het request
  request.send()
  // moet nog worden gemaakt
}
