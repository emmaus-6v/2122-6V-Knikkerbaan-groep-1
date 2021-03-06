# Verslag eindopdracht 6V
### gemaakt door *Hana Poljak*, *Lisanne Boer*, *Alessandra Bouman*, *Jamie Tang*

---

## Inleiding
Voor onze eindopdracht hebben wij geprobeerd een knikkerbaan te maken. Deze bevat poortjes en een rad aangestuurd door een Arduino. Ook heeft de knikkerbaan een bijbehorende widget, waarin wordt aangegeven hoe veel knikkers er langs een bepaald punt zijn gegaan. In dit verslag staan welke features de knikkerbaan heeft, een evalutuatie van de planning, een technische verantwoording en een reflectie.



## Features
Beschrijf hier de eigenschappen van jullie knikkerbaan (gebruik gerust plaatjes). De eerste paar zijn voorgegeven:

### feature 1: Opvangen van knikkers
De knikkerbaan kan knikkers bovenin correct opvangen. De binnenkomende knikkers worden geteld en een poortje bepaalt of knikkers worden doorrollen of worden tegengehouden.

### feature 2: Doorgeven van gegevens aan server
De knikkerbaan zendt de hoeveelheid getelde knikkers naar een server die de gegevens opslaat in een database. Deze server kan per 'run' (d.w.z. een nieuwe keer aangaan) gegevens bijhouden.

### feature 3: Widget wisselt info uit met knikkerbaan
In de browser kan met een URL een widget worden geladen. Deze geeft de knikkerbaan schematisch weer in een frame van 600x300px. De getelde knikkers en duur dat de poort openstaat worden hierin getoond. De duur dat de poort openstaat kan hierin worden veranderd. De knikkerbaan kan deze wachttijd van de server ontvangen en zijn werking erop aanpassen.

### feature 4: Trampoline
Deze feature heeft geen code. het is een trapoline gemaakt van houd en elastiekjes die strakgespannen staan. Hierop kan de knikker stuiteren enwordt opgevangen door een andere baan/


### feature 5: Water/reuzenrad
De knikker wordt tegengehouden door een servo, om de .... seconden opend en sluit de servo, hierdoor gaat elke knikker alleen het reuzenrad in. Het reuzenrad draait met de 360 sevro en blijft de hele tijd doordraaien. de knikkers vallen na een tijd uit het reuzentrad en word dan weer opgevangen door een baan. (als we tijd hebben, begint het reuzenrad pas met draaien en gaat de servo pas open als er door een teller een knikker wordt gezien)


### feature 6: Flipperkast 
De knikker die aankomt, wordt tegengehouden door twee servo's die als flippers dienen. Deze gaan tegelijk open, waarna de knikkers vallen op een punt. De knikker kan dan naar links rollen of naar rechts. Daarna wordt er bij elke kant geteld hoeveel knikkers er langs zijn gekomen.


## Evaluaties van scrumplanningen:

### week 43 
Deze week issues toevoegen voor elke issue en bugs die we al weten. 

### week 44 
Deze week kunnen wij niet veel doen, omdat het volgende week toetsweek is. We willen de taken deels verdelen en bezig zijn met het verslag.

### week 45 
*toetsweek*

### week 46 
_

### week 47 
Deze week gaan we beginnen met het schrijven van de code voor de teller en het poortje. Ook hebben we de volledige schets van de plank bepalen.

### week 48 
Begonnen met het nadenken met welke materialen we de verschillende elementen van de plank gaan maken.
Begonnen met de code van de sensor en de widget. Code van 360 graden sensor gemaakt.

### week 49 

### week 50

### week 51
Deze week konden we niet naar school gaan, we hebben het verslag een beetje bijgewerkt en even gezamelijk een groepsgesprek gehad om onze voortgang te evalueren. Ook hebben we afgesproken hoe we verder gaan na de vakantie.

### week 52 
*vakantie*

### week 1
*vakantie*

### week 2 
De widget afgemaakt. Servo 1 aangesloten aan het arduino bord.

### week 3
*toetsweek*
Geen tijd gehad om aan de opdracht te werken.

### week 4
*toetsweek*
Geen tijd gehad om aan de opdracht te werken.

### week 5
De plank geverfd en de lay-out getekent op maat. 2 andere servos aangesloten aan het adruino bord.

### week 6
Code van de eerste servo gemaakt.
De witte 'weg' voor de bal op maat gesneden.
Code van 360 graden sensor opnieuw gemaakt. 

### week 7
De plank in elkaar gezet, de weg geplakt op de plank. Het rad gemaakt van lego. Ook hebben we op inernet gezocht hoeveel kg de servo kan dragen, dat is rond de 1/2 kg. De servo kan de lego dus dragen. Code van de andere sensors gemaakt. Problemen opgelost in de code.

### week 8
Alle servo's in de plank zetten en alle sensoren in de planken zetten. 
problemen opgelost in de code(geprobeert).
Sensors aangsloten en gecodeert.
Demo en inleveren



## Technische verantwoording

De Arduino werkt op de volgende manier: 
De Arduino stuurt alle servo's aan. De bovenste servo dient als een poort, zodat de knikkers tegen gehouden worden als er communicatie plaatsvindt tussen de server en de arduino. De tweede servo dient als ook als een poortje. Deze houdt de knikkers tegen en laat ze een voor een langs, zodat het rad niet verstopt raakt. De derde servo zit in het rad zelf. Deze draait continue, om de balletjes goed op te kunnen vangen. De laatste twee servo's zijn de flippers. De knikkers worden tegengehouden, waarna ze recht naar beneden vallen op een punt. Hier gaan de knikkers links of rechts. Daarbij wordt er geteld hoeveel er langs elke kant komen.

De knikkerbaan en de widget wisselen de volgende data met elkaar uit: Het aantal knikkers dat langs elke sensor zijn geweest.

We hebben dat op deze manier genormaliseerd in een database opgenomen (neem een strokendiagram op). De reden dat we voor ... kiezen is...

Uitdagingen die we tegenkwamen: 
- arduino, we hebben best wel lang niet met de arduino gewerkt. We moesten dus even alles kennis weer opdoen voordat we soepel aan de gang konden. 
- bestaande code begrijpen, omdat we de code natuurlijk niet zelf hadden gemaakt, bergrepen we niet gelijk waar alle code voor stond. 
- bestand openen op sommige laptops, soms moesten we een beetje uitvogelen hoe we het de eerste keer moesten openen.
- van delay naar mili gaan.
- klassen aanroepen.
- werken met sevro en sensor. De code die we hiervoor moesten gebruiken hebben we niet heel vaak gebruikt. Dus het was een beetje wennen om alles te begrijpen en we kregen veel foutmeldingen die moeilijk waren op te lossen.


## Reflectie op opdracht
*(50 - 100 woorden. Geef o.a. wat je tijdens deze opdracht beter onder de knie hebt gekregen en welk leerpunt je voor jezelf meeneemt)*

#### --Hana--
Tijdens deze opdracht heb ik heel erg goed geleerd om goed samen te werken en problemen op een effectieve manier op te lossen. Over het algemeen snap ik beter hoe een arduino en servo's werken en hoe ik daar in  de toekomst beter mee kan werken. Ook met de plank heb ik geleerd hoe ik een onverwachte probleem op kan lossen. 


#### --Alessandra--
Met het maken van de knikkerbaan heb ik zeker veel dingen geleerd. Zo kwamen we nogal wat tegenslagen tegen tijdens het maken van de plank en met het werken aan de arduino. Al deze problemen hebben we met elkaar kunnen oplossen. Ik heb dus geleerd om goed samen te werken en om gewoon door te blijven gaan ookal gaat er wel is iets mis.

#### --Lisanne--
Ik durf niet te zeggen dat ik erg veel van deze opdracht geleerd heb, omdat ik zelf niet helemaal begrijp wat ik gedaan heb. Het was allemaal extreem vaag. Een grote rede daarvoor was, omdat ik iets te laat begonnen was en alles snel moest maken. Ik begrijp van de dingen die ik heb gedaan wel gedeeltelijk waarom, maar dat was vooral echt op dat moment. Nu een week na de opdracht begrijp ik bijna niks meer van de code die ik zelf geschreven heb, vandaar dat ik dus niet het idee heb dat ik veel van deze opdracht heb geleerd. Het enige wat ik geleerd heb is dat ik een opdracht niet moet onderschatten en beter te plannen.

#### --Jamie--
De eindopdracht heeft mij geleerd, dat er bij het maken van een knikkerbaan veel onderdelen zijn die er gemaakt moeten worden. Het maken van de widget was een lang proces, omdat elke lijn een twee aparte x- en y-waardes heeft. Verder begrijp ik javascript en arduino code beter dan eerst.



## Slot

Over het algemeen zijn we zeer tevreden met de knikkerbaan. We vonden de samenwerking erg goed gaan en daar zijn we ook erg blij mee. Het hele proces vonden we erg interessant, al vinden we zelf ook wel dat we er eerder aan moesten beginnen. Toch zijn we blij met onze knikkerbaan, en zijn we blij met de informatie die we hebben geleerd en de skills die we hebben verbeterd
