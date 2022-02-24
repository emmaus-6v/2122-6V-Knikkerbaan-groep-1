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
Deze week kunnen wij niet veel doen, omdat het volgende week toetsweek is. We willen de taken deels verdelen en bezig zijn met het verslag

### week 45 
*toetsweek*

### week 46 
_

### week 47 
Deze week gaan we beginnen met het schrijven van de code voor de teller en het poortje.

### week 48 

### week 49 

### week 50

### week 51

### week 52 
*vakantie*

### week 1
*vakantie*

### week 2 

### week 3
*toetsweek*

### week 4
*toetsweek*

### week 5

### week 6

### week 7

### week 8
Demo en inleveren



## Technische verantwoording

De Arduino werkt op de volgende manier: 
De Arduino stuurt alle servo's aan. De bovenste servo dient als een poort, zodat de knikkers tegen gehouden worden als er communicatie plaatsvindt tussen de server en de arduino. De tweede servo dient als ook als een poortje. Deze houdt de knikkers tegen en laat ze een voor een langs, zodat het rad niet verstopt raakt. De derde servo zit in het rad zelf. Deze draait continue, om de balletjes goed op te kunnen vangen. De laatste twee servo's zijn de flippers. De knikkers worden tegengehouden, waarna ze recht naar beneden vallen op een punt. Hier gaan de knikkers links of rechts. Daarbij wordt er geteld hoeveel er langs elke kant komen.

De knikkerbaan en de widget wisselen de volgende data met elkaar uit: Het aantal knikkers dat langs elke sensor zijn geweest.

We hebben dat op deze manier genormaliseerd in een database opgenomen (neem een strokendiagram op). De reden dat we voor ... kiezen is...

Uitdagingen die we tegenkwamen: Code maken.


## Reflectie op opdracht
#### --Hana--
*(50 - 100 woorden. Geef o.a. wat je tijdens deze opdracht beter onder de knie hebt gekregen en welk leerpunt je voor jezelf meeneemt)*

#### --Alessandra--

#### --Lisanne--

#### --Jamie--




## Slot
