/* Beschrijf de tabellen die je nodig hebt*/

CREATE TABLE runs (
  id INTEGER PRIMARY KEY AUTOINCREMENT,
  stamp DATETIME NOT NULL
);

CREATE TABLE sensorData1 (
  id INTEGER PRIMARY KEY AUTOINCREMENT,
  run INTEGER NOT NULL,
  stamp DATETIME NOT NULL,
  aantalKnikkers1 INTEGER
);

CREATE TABLE sensorData2 (
  id INTEGER PRIMARY KEY AUTOINCREMENT,
  run INTEGER NOT NULL,
  stamp DATETIME NOT NULL,
  aantalKnikkers2 INTEGER
);

CREATE TABLE sensorData3 (
  id INTEGER PRIMARY KEY AUTOINCREMENT,
  run INTEGER NOT NULL,
  stamp DATETIME NOT NULL,
  aantalKnikkers3 INTEGER
);

CREATE TABLE instellingen (
  id INTEGER PRIMARY KEY AUTOINCREMENT,
  run INTEGER NOT NULL,
  stamp DATETIME NOT NULL,
  wachttijdPoort INTEGER NOT NULL
);


/* Indien je standaard wat gegevens in de database wilt,
   voeg hieronder dan INSERT regels to */
INSERT INTO runs (stamp) VALUES (CURRENT_TIMESTAMP);
INSERT INTO sensorData1 (run, stamp, aantalKnikkers1) VALUES (1, CURRENT_TIMESTAMP, 6);
INSERT INTO sensorData2 (run, stamp, aantalKnikkers2) VALUES (1, CURRENT_TIMESTAMP, 4);
INSERT INTO sensorData3 (run, stamp, aantalKnikkers3) VALUES (1, CURRENT_TIMESTAMP, 5);
INSERT INTO instellingen (run, stamp, wachttijdPoort) VALUES (1, CURRENT_TIMESTAMP, 15);
