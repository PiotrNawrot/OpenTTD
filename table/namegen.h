#include "../stdafx.h"
#include "../ttd.h"

static const char *name_original_english_1[] = {
	"Great ",
	"Little ",
	"New ",
	"Fort ",
};

static const char *name_original_english_2[] = {
	"Wr",
	"B",
	"C",
	"Ch",
	"Br",
	"D",
	"Dr",
	"F",
	"Fr",
	"Fl",
	"G",
	"Gr",
	"H",
	"L",
	"M",
	"N",
	"P",
	"Pr",
	"Pl",
	"R",
	"S",
	"S",
	"Sl",
	"T",
	"Tr",
	"W"
};

static const char *name_original_english_3[] = {
	"ar",
	"a",
	"e",
	"in",
	"on",
	"u",
	"un",
	"en"
};

static const char *name_original_english_4[] = {
	"n",
	"ning",
	"ding",
	"d",
	"",
	"t"
	"fing"
};

static const char *name_original_english_5[] = {
	"ville",
	"ham",
	"field",
	"ton",
	"town",
	"bridge",
	"bury",
	"wood",
	"ford",
	"hall",
	"ston",
	"way",
	"stone",
	"borough",
	"ley",
	"head",
	"bourne",
	"pool",
	"worth",
	"hill",
	"well",
	"hattan",
	"burg",
};

static const char *name_original_english_6[] = {
	"-on-sea",
	" Bay",
	" Market",
	" Cross",
	" Bridge",
	" Falls",
	" City",
	" Ridge",
	" Springs"
};

static const char *name_additional_english_prefix[] = {
	"Great ",
	"Little ",
	"New ",
	"Fort ",
	"St. ",
	"Old "
};

static const char *name_additional_english_1a[] = {
	"Pen",
	"Lough",
	"Stam",
	"Aber",
	"Acc",
	"Ex",
	"Ax",
	"Bre",
	"Cum",
	"Dun",
	"Fin",
	"Inver",
	"Kin",
	"Mon",
	"Nan",
	"Nant",
	"Pit",
	"Pol",
	"Pont",
	"Strath",
	"Tre",
	"Tilly",
	"Beck",
	"Canter",
	"Bath",
	"Liver",
	"Mal",
	"Ox",
	"Bletch",
	"Maccles",
	"Grim",
	"Wind",
	"Sher",
	"Gates",
	"Orp",
	"Brom",
	"Lewis",
	"Whit",
	"White",
	"Worm",
	"Tyne",
	"Avon",
	"Stan"
};

static const char *name_additional_english_1b1[] = {
	"Wr",
	"B",
	"C",
	"Ch",
	"Br",
	"D",
	"Dr",
	"F",
	"Fr",
	"Fl",
	"G",
	"Gr",
	"H",
	"L",
	"M",
	"N",
	"P",
	"Pr",
	"Pl",
	"R",
	"S",
	"S",
	"Sl",
	"T",
	"Tr",
	"W"
};

static const char *name_additional_english_1b2[] = {
	"ar",
	"a",
	"e",
	"in",
	"on",
	"u",
	"o",
	"ee",
	"es",
	"ea",
	"un",
	"en"
};

static const char *name_additional_english_1b3a[] = {
	"n",
	"d",
	"",
	"t",
	"",
	""
};

static const char *name_additional_english_1b3b[] = {
	"ning",
	"ding",
	"fing"
};

static const char *name_additional_english_2[] = {
	"ville",
	"ham",
	"field",
	"ton",
	"town",
	"borough",
	"bridge",
	"bury",
	"wood",
	"ditch",
	"ford",
	"hall",
	"dean",
	"leigh",
	"dore",
	"ston",
	"stow",
	"church",
	"wich",
	"low",
	"way",
	"stone",
	"minster",
	"ley",
	"head",
	"bourne",
	"pool",
	"worth",
	"hill",
	"well",
	"hattan",
	"burg",
	"berg",
	"burgh",
	"port",
	"stoke",
	"haven",
	"stable",
	"stock",
	"side",
	"brook",
	"don",
	"den",
	"down",
	"nor",
	"grove",
	"combe",
	"by",
	"say",
	"ney",
	"chester",
	"dale",
	"ness",
	"shaw",
	"thwaite"
};

static const char *name_additional_english_3[] = {
	"-on-sea",
	" Bay",
	" Market",
	" Beeches",
	" Common",
	" Park",
	" Heath",
	" Marsh",
	" Green",
	" Castle",
	" End",
	" Rivers",
	" Cross",
	" Bridge",
	" Falls",
	" City",
	" Ridge",
	" Springs"
};

static const char *name_austrian_a1[] = {
	"Bad ",
	"Deutsch ",
	"Gross ",
	"Klein ",
	"Markt ",
	"Maria "
};

static const char *name_austrian_a2[] = {
	"Aus",
	"Alten",
	"Braun",
	"V�sl",
	"Mittern",
	"Nuss",
	"Neu",
	"Walters",
	"Breiten",
	"Eisen",
	"Feld",
	"Mittern",
	"Gall",
	"Obern",
	"Grat",
	"Heiligen",
	"Hof",
	"Holla",
	"Stein",
	"Eber",
	"Eggen",
	"Enzers",
	"Frauen",
	"Herren",
	"Hof",
	"H�tt",
	"Kaisers",
	"K�nigs",
	"Knittel",
	"Lang",
	"Ober",
	"Ollers",
	"Pfaffen",
	"Potten",
	"Salz",
	"Schwarz",
	"Stocker",
	"Unter",
	"Utten",
	"V�sen",
	"Vill",
	"Weissen"
};

static const char *name_austrian_a3[] = {
	"see",
	"bach",
	"dorf",
	"ach",
	"stein",
	"hofen",
	"au",
	"ach",
	"kirch",
	"kirchen",
	"kreuz",
	"brunn",
	"siedl",
	"markt",
	"wang",
	"haag"
};

static const char *name_austrian_a4[] = {
	"Bruck",
	"Brunn",
	"Gams",
	"Grein",
	"Ried",
	"Faak",
	"Zell",
	"Spital",
	"Kirchberg",
	"Saal",
	"Taferl",
	"Wald"
};

static const char *name_austrian_a5[] = {
	"St. ",
	"Sankt "
};

static const char *name_austrian_a6[] = {
	"Aegyd",
	"Andr�",
	"Georgen",
	"Jakob",
	"Johann",
	"Leonhard",
	"Marein",
	"Lorenzen",
	"Margarethen",
	"Martin",
	"Michael",
	"Nikolai",
	"Oswald",
	"Peter",
	"P�lten",
	"Stefan",
	"Stephan",
	"Thomas",
	"Veit",
	"Wolfgang"
};

static const char *name_austrian_f1[] = {
	" an der ",
	" ob der "
};

static const char *name_austrian_f2[] = {
	"Donau",
	"Steyr",
	"Lafnitz",
	"Leitha",
	"Thaya",
	"Gail",
	"Drau",
	"Salzach",
	"Ybbs",
	"Traisen",
	"Enns",
	"Mur",
	"Ill"
};

static const char *name_austrian_b1[] = {
	" am "
};

static const char *name_austrian_b2[] = {
	"Brenner",
	"Dachstein",
	"Gebirge",
	"Grossglockner",
	"Hausruck",
	"Semmering",
	"Wagram",
	"Wechsel",
	"Wilden Kaiser",
	"Ziller"
};

static const char *name_german_real[] = {
	"Berlin",
	"Bonn",
	"Bremen",
	"Cottbus",
	"Chemnitz",
	"Dortmund",
	"Dresden",
	"Erfurt",
	"Erlangen",
	"Essen",
	"Fulda",
	"Gera",
	"Kassel",
	"Kiel",
	"K�ln",
	"L�beck",
	"Magdeburg",
	"M�nchen",
	"Potsdam",
	"Stuttgart",
	"Wiesbaden"
};

static const char *name_german_pre[] = {
	"Bad ",
	"Klein ",
	"Neu "
};

static const char *name_german_1[] = {
	"Alb",
	"Als",
	"Ander",
	"Arns",
	"Bruns",
	"Bam",
	"Biele",
	"Cloppen",
	"Co",
	"Duis",
	"D�ssel",
	"Dannen",
	"Elb",
	"Els",
	"Elster",
	"Eichen",
	"Ems",
	"Fahr",
	"Falken",
	"Flens",
	"Frank",
	"Frei",
	"Freuden",
	"Fried",
	"F�rsten",
	"Hahn",
	"Ham",
	"Harz",
	"Heidel",
	"Hers",
	"Herz",
	"Holz",
	"Hildes",
	"Inns",
	"Ilsen",
	"Ingols",
	"Kel",
	"Kies",
	"Korn",
	"Kor",
	"Kreuz",
	"Kulm",
	"Langen",
	"Lim",
	"Lohr",
	"L�ne",
	"Mel",
	"Michels",
	"M�hl",
	"Naum",
	"Nest",
	"Nord",
	"Nort",
	"Nien",
	"Nidda",
	"Nieder",
	"N�rn",
	"Ober",
	"Offen",
	"Osna",
	"Olden",
	"Ols",
	"Oranien",
	"Pader",
	"Quedlin",
	"Quer",
	"Ravens",
	"Regens",
	"Rott",
	"Ros",
	"R�ssels",
	"Saal",
	"Saar",
	"Salz",
	"Sch�ne",
	"Schwein",
	"Sonder",
	"Sonnen",
	"Stein",
	"Strals",
	"Straus",
	"S�d",
	"Ton",
	"Unter",
	"Ur",
	"Vor",
	"Wald",
	"War",
	"Wert",
	"Wester",
	"Witten",
	"Wolfs",
	"W�rz"
};

static const char *name_german_2[] = {
	"bach",
	"berg",
	"br�ck",
	"br�cken",
	"burg",
	"dorf",
	"feld",
	"furt",
	"hausen",
	"haven",
	"heim",
	"horst",
	"mund",
	"m�nster",
	"stadt",
	"wald"
};

static const char *name_german_3_an_der[] = {
	" an der "
};

static const char *name_german_3_am[] = {
	" am "
};

static const char *name_german_4_an_der[] = {
	"Oder",
	"Spree",
	"Donau",
	"Saale",
	"Elbe"
};

static const char *name_german_4_am[] = {
	"Main"
};

static const char *name_spanish_real[] = {
	"Caracas",
	"Maracay",
	"Maracaibo",
	"Velencia",
	"El Dorado",
	"Morrocoy",
	"Cata",
	"Cataito",
	"Ciudad Bolivar",
	"Barquisimeto",
	"Merida",
	"Puerto Ordaz",
	"Santa Elena",
	"San Juan",
	"San Luis",
	"San Rafael",
	"Santiago",
	"Barcelona",
	"Barinas",
	"San Cristobal",
	"San Fransisco",
	"San Martin",
	"Guayana",
	"San Carlos",
	"El Limon",
	"Coro",
	"Corocoro",
	"Puerto Ayacucho",
	"Elorza",
	"Arismendi",
	"Trujillo",
	"Carupano",
	"Anaco",
	"Lima",
	"Cuzco",
	"Iquitos",
	"Callao",
	"Huacho",
	"Camana",
	"Puerto Chala",
	"Santa Cruz",
	"Quito",
	"Cuenca",
	"Huacho",
	"Tulcan",
	"Esmereldas",
	"Ibarra",
	"San Lorenzo",
	"Macas",
	"Morana",
	"Machala",
	"Zamora",
	"Latacunga",
	"Tena",
	"Cochabamba",
	"Ascencion",
	"Magdalena",
	"Santa Ana",
	"Manoa",
	"Sucre",
	"Oruro",
	"Uyuni",
	"Potosi",
	"Tupiza",
	"La Quiaca",
	"Yacuiba",
	"San Borja",
	"Fuerte Olimpio",
	"Fortin Esteros",
	"Campo Grande",
	"Bogota",
	"El Banco",
	"Zaragosa",
	"Neiva",
	"Mariano",
	"Cali",
	"La Palma",
	"Andoas",
	"Barranca",
	"Montevideo",
	"Valdivia",
	"Arica",
	"Temuco",
	"Tocopilla",
	"Mendoza",
	"Santa Rosa"
};

static const char *name_french_real[] = {
	"Agincourt",
	"Lille",
	"Dinan",
	"Aubusson",
	"Rodez",
	"Bergerac",
	"Bordeaux",
	"Bayonne",
	"Montpellier",
	"Montelimar",
	"Valence",
	"Digne",
	"Nice",
	"Cannes",
	"St. Tropez",
	"Marseilles",
	"Narbonne",
	"S�te",
	"Aurillac",
	"Gueret",
	"Le Creusot",
	"Nevers",
	"Auxerre",
	"Versailles",
	"Meaux",
	"Ch�lons",
	"Compi�gne",
	"Metz",
	"Chaumont",
	"Langres",
	"Bourg",
	"Lyons",
	"Vienne",
	"Grenoble",
	"Toulon",
	"Rennes",
	"Le Mans",
	"Angers",
	"Nantes",
	"Ch�teauroux",
	"Orl�ans",
	"Lisieux",
	"Cherbourg",
	"Morlaix",
	"Cognac",
	"Agen",
	"Tulle",
	"Blois",
	"Troyes",
	"Charolles",
	"Grenoble",
	"Chamb�ry",
	"Tours",
	"St. Brieuc",
	"St. Malo",
	"La Rochelle",
	"St. Flour",
	"Le Puy",
	"Vichy",
	"St. Valery",
	"Beaujolais",
	"Narbonne",
	"Albi",
	"St. Valery",
	"Biarritz",
	"B�ziers",
	"N�mes",
	"Chamonix",
	"Angoul�me",
	"Alen�on"
};

static const char *name_silly_1[] = {
	"Binky",
	"Blubber",
	"Bumble",
	"Crinkle",
	"Crusty",
	"Dangle",
	"Dribble",
	"Flippety",
	"Google",
	"Muffin",
	"Nosey",
	"Pinker",
	"Quack",
	"Rumble",
	"Sleepy",
	"Sliggles",
	"Snooze",
	"Teddy",
	"Tinkle",
	"Twister",
	"Pinker",
	"Hippo",
	"Itchy",
	"Jelly",
	"Jingle",
	"Jolly",
	"Kipper",
	"Lazy",
	"Frogs",
	"Mouse",
	"Quack",
	"Cheeky",
	"Lumpy",
	"Grumpy",
	"Mangle",
	"Fiddle",
	"Slugs",
	"Noodles",
	"Poodles",
	"Shiver",
	"Rumble",
	"Pixie",
	"Puddle",
	"Riddle",
	"Rattle",
	"Rickety",
	"Waffle",
	"Sagging",
	"Sausage",
	"Egg",
	"Sleepy",
	"Scatter",
	"Scramble",
	"Silly",
	"Simple",
	"Trickle",
	"Slippery",
	"Slimey",
	"Slumber",
	"Soggy",
	"Sliggles",
	"Splutter",
	"Sulky",
	"Swindle",
	"Swivel",
	"Tasty",
	"Tangle",
	"Toggle",
	"Trotting",
	"Tumble",
	"Snooze",
	"Water",
	"Windy",
	"Amble",
	"Bubble",
	"Cheery",
	"Cheese",
	"Cockle",
	"Cracker",
	"Crumple",
	"Teddy",
	"Evil",
	"Fairy",
	"Falling",
	"Fishy",
	"Fizzle",
	"Frosty",
	"Griddle"
};

static const char *name_silly_2[] = {
	"ton",
	"bury",
	"bottom",
	"ville",
	"well",
	"weed",
	"worth",
	"wig",
	"wick",
	"wood",
	"pool",
	"head",
	"burg",
	"gate",
	"bridge"
};

static const char *name_swedish_1[] = {
	"Gamla ",
	"Lilla ",
	"Nya ",
	"Stora "
};

static const char *name_swedish_2[] = {
	"Boll",
	"Bor",
	"Ed",
	"En",
	"Erik",
	"Es",
	"Fin",
	"Fisk",
	"Gr�n",
	"Hag",
	"Halm",
	"Karl",
	"Kram",
	"Kung",
	"Land",
	"Lid",
	"Lin",
	"Mal",
	"Malm",
	"Marie",
	"Ner",
	"Norr",
	"Oskar",
	"Sand",
	"Skog",
	"Stock",
	"Stor",
	"Str�m",
	"Sund",
	"S�der",
	"Tall",
	"Tratt",
	"Troll",
	"Upp",
	"Var",
	"V�ster",
	"�ngel",
	"�ster"
};

static const char *name_swedish_2a[] = {
	"B",
	"Br",
	"D",
	"Dr",
	"Dv",
	"F",
	"Fj",
	"Fl",
	"Fr",
	"G",
	"Gl",
	"Gn",
	"Gr",
	"H",
	"J",
	"K",
	"Kl",
	"Kn",
	"Kr",
	"Kv",
	"L",
	"M",
	"N",
	"P",
	"Pl",
	"Pr",
	"R",
	"S",
	"Sk",
	"Skr",
	"Sl",
	"Sn",
	"Sp",
	"Spr",
	"St",
	"Str",
	"Sv",
	"T",
	"Tr",
	"Tv",
	"V",
	"Vr"
};

static const char *name_swedish_2b[] = {
	"a",
	"e",
	"i",
	"o",
	"u",
	"y",
	"�",
	"�",
	"�"
};

static const char *name_swedish_2c[] = {
	"ck",
	"d",
	"dd",
	"g",
	"gg",
	"l",
	"ld",
	"m",
	"n",
	"nd",
	"ng",
	"nn",
	"p",
	"pp",
	"r",
	"rd",
	"rk",
	"rp",
	"rr",
	"rt",
	"s",
	"sk",
	"st",
	"t",
	"tt",
	"v"
};

static const char *name_swedish_3[] = {
	"arp",
	"berg",
	"boda",
	"borg",
	"bro",
	"bukten",
	"by",
	"byn",
	"fors",
	"hammar",
	"hamn",
	"holm",
	"hus",
	"h�ttan",
	"kulle",
	"k�ping",
	"lund",
	"l�v",
	"sala",
	"skrona",
	"sl�tt",
	"sp�ng",
	"stad",
	"sund",
	"svall",
	"svik",
	"s�ker",
	"udde",
	"valla",
	"viken",
	"�lv",
	"�s"
};

static const char *name_dutch_1[] = {
	"Nieuw ",
	"Oud ",
	"Groot ",
	"Zuid ",
	"Noord ",
	"Oost ",
	"West ",
	"Klein "
};

static const char *name_dutch_2[] = {
	"Hoog",
	"Laag",
	"Zuider",
	"Zuid",
	"Ooster",
	"Oost",
	"Wester",
	"West",
	"Hoofd",
	"Midden",
	"Eind",
	"Amster",
	"Amstel",
	"Dord",
	"Rotter",
	"Haar",
	"Til",
	"Enk",
	"Dok",
	"Veen",
	"Leidsch",
	"Lely",
	"En",
	"Kaats",
	"U",
	"Maas",
	"Mar",
	"Bla",
	"Al",
	"Alk",
	"Eer",
	"Drie",
	"Ter",
	"Groes",
	"Goes",
	"Soest",
	"Coe",
	"Uit",
	"Zwaag",
	"Hellen",
	"Slie",
	"IJ",
	"Grubben",
	"Groen",
	"Lek",
	"Ridder",
	"Schie",
	"Olde",
	"Roose",
	"Haar",
	"Til",
	"Loos",
	"Hil"
};

static const char *name_dutch_3[] = {
	"Drog",
	"Nat",
	"Valk",
	"Bob",
	"Dedem",
	"Kollum",
	"Best",
	"Hoend",
	"Leeuw",
	"Graaf",
	"Uithuis",
	"Purm",
	"Hard",
	"Hell",
	"Werk",
	"Spijk",
	"Vink",
	"Wams",
	"Heerhug",
	"Koning"
};

static const char *name_dutch_4[] = {
	"e",
	"er",
	"el",
	"en",
	"o",
	"s"
};

static const char *name_dutch_5[] = {
	"stad",
	"vorst",
	"dorp",
	"dam",
	"beek",
	"doorn",
	"zijl",
	"zijlen",
	"lo",
	"muiden",
	"meden",
	"vliet",
	"nisse",
	"daal",
	"vorden",
	"vaart",
	"mond",
	"zaal",
	"water",
	"duinen",
	"heuvel",
	"geest",
	"kerk",
	"meer",
	"maar",
	"hoorn",
	"rade",
	"wijk",
	"berg",
	"heim",
	"sum",
	"richt",
	"burg",
	"recht",
	"drecht",
	"trecht",
	"tricht",
	"dricht",
	"lum",
	"rum",
	"halen",
	"oever",
	"wolde",
	"veen",
	"hoven",
	"gast",
	"kum",
	"hage",
	"dijk",
	"zwaag",
	"pomp",
	"huizen",
	"bergen",
	"schede",
	"mere",
	"end"
};

static const char *name_finnish_real[] = {
	"Aijala",
	"Kisko",
	"Espoo",
	"Helsinki",
	"Tapiola",
	"J�rvel�",
	"Lahti",
	"Kotka",
	"Hamina",
	"Loviisa",
	"Kouvola",
	"Tampere",
	"Kokkola",
	"Oulu",
	"Salo",
	"Malmi",
	"Pelto",
	"Koski",
	"Iisalmi",
	"Raisio",
	"Taavetti",
	"Joensuu",
	"Imatra",
	"Tapanila",
	"Pasila"
};

static const char *name_finnish_1[] = {
	"Hiekka",
	"Haapa",
	"Mylly",
	"Kivi",
	"Lappeen",
	"Lohjan",
	"Savon",
	"Sauna",
	"Keri",
	"Uusi",
	"Vanha",
	"Lapin",
	"Kes�",
	"Kuusi",
	"Pelto",
	"Tuomi",
	"Pit�j�n",
	"Terva",
	"Olki",
	"Hein�",
	"Kuusan",
	"Sein�",
	"Kemi",
	"Rova",
	"Martin",
	"Koivu"
};

static const char *name_finnish_2[] = {
	"harju",
	"linna",
	"j�rvi",
	"kallio",
	"m�ki",
	"nummi",
	"joki",
	"kyl�",
	"lampi",
	"lahti",
	"mets�",
	"suo",
	"laakso",
	"niitty",
	"luoto",
	"hovi",
	"ranta",
	"koski"
};

static const char *name_polish_1_m[] = {
	"Wielki ",
	"Maly ",
	"Zly ",
	"Dobry ",
	"Nowy ",
	"Stary ",
	"Zloty ",
	"Zielony ",
	"Bialy ",
	"Modry ",
	"Debowy "
};

static const char *name_polish_1_f[] = {
	"Wielka ",
	"Mala ",
	"Zla ",
	"Dobra ",
	"Nowa ",
	"Stara ",
	"Zlota ",
	"Zielona ",
	"Biala ",
	"Modra ",
	"Debowa "
};

static const char *name_polish_1_n[] = {
	"Wielkie ",
	"Male ",
	"Zle ",
	"Dobre ",
	"Nowe ",
	"Stare ",
	"Zlote ",
	"Zielone ",
	"Biale ",
	"Modre ",
	"Debowe "
};

static const char *name_polish_2_o[] = {
	"Frombork",
	"Gniezno",
	"Olsztyn",
	"Torun",
	"Bydgoszcz",
	"Terespol",
	"Krakow",
	"Poznan",
	"Wroclaw",
	"Katowice",
	"Cieszyn",
	"Bytom",
	"Frombork",
	"Hel",
	"Konin",
	"Lublin",
	"Malbork",
	"Sopot",
	"Sosnowiec",
	"Gdansk",
	"Gdynia",
	"Sieradz",
	"Sandomierz",
	"Szczyrk",
	"Szczytno",
	"Szczecin",
	"Zakopane",
	"Szklarska Poreba",
	"Bochnia",
	"Golub-Dobrzyn",
	"Chojnice",
	"Ostrowiec",
	"Otwock",
	"Wolsztyn"
};

static const char *name_polish_2_m[] = {
	"Jarocin",
	"Gogolin",
	"Tomaszow",
	"Piotrkow",
	"Lidzbark",
	"Rypin",
	"Radzymin",
	"Wolomin",
	"Pruszkow",
	"Olsztynek",
	"Rypin",
	"Cisek",
	"Krotoszyn",
	"Stoczek",
	"Lubin",
	"Lubicz",
	"Milicz",
	"Targ",
	"Ostrow",
	"Ozimek",
	"Puck",
	"Rzepin",
	"Siewierz",
	"Stargard",
	"Starogard",
	"Turek",
	"Tymbark",
	"Wolsztyn",
	"Strzepcz",
	"Strzebielin",
	"Sochaczew",
	"Grebocin",
	"Gniew",
	"Lubliniec",
	"Lubasz",
	"Lutomiersk",
	"Niemodlin",
	"Przeworsk",
	"Ursus",
	"Tyczyn",
	"Sztum",
	"Szczebrzeszyn",
	"Wolin",
	"Wrzeszcz",
	"Zgierz",
	"Zieleniec",
	"Drobin",
	"Garwolin"
};

static const char *name_polish_2_f[] = {
	"Szprotawa",
	"Pogorzelica",
	"Motlawa",
	"Lubawa",
	"Nidzica",
	"Kruszwica",
	"Bierawa",
	"Brodnica",
	"Chojna",
	"Krzepica",
	"Ruda",
	"Rumia",
	"Tuchola",
	"Trzebinia",
	"Ustka",
	"Warszawa",
	"Bobowa",
	"Dukla",
	"Krynica",
	"Murowana",
	"Niemcza",
	"Zaspa",
	"Zawoja",
	"Wola",
	"Limanowa",
	"Rabka",
	"Skawina",
	"Pilawa"
};

static const char *name_polish_2_n[] = {
	"Lipsko",
	"Pilzno",
	"Przodkowo",
	"Strzelno",
	"Susz",
	"Jaworzno",
	"Choszczno",
	"Mogilno",
	"Luzino",
	"Miasto",
	"Dziadowo",
	"Kowalewo",
	"Legionowo",
	"Miastko",
	"Zabrze",
	"Zawiercie",
	"Kochanowo",
	"Miechucino",
	"Mirachowo",
	"Robakowo",
	"Kosakowo",
	"Borne",
	"Braniewo",
	"Sulinowo",
	"Chmielno",
	"Jastrzebie",
	"Gryfino",
	"Koronowo",
	"Lubichowo",
	"Opoczno"
};

static const char *name_polish_3_m[] = {
	" Wybudowanie",
	" Swietokrzyski",
	" Gorski",
	" Morski",
	" Zdroj",
	" Wody",
	" Bajoro",
	" Krajenski",
	" Slaski",
	" Mazowiecki",
	" Pomorski",
	" Wielki",
	" Maly",
	" Warminski",
	" Mazurski",
	" Mniejszy",
	" Wiekszy",
	" Gorny",
	" Dolny",
	" Wielki",
	" Stary",
	" Nowy",
	" Wielkopolski",
	" Wzgorze",
	" Mosty",
	" Kujawski",
	" Malopolski",
	" Podlaski",
	" Lesny"
};

static const char *name_polish_3_f[] = {
	" Wybudowanie",
	" Swietokrzyska",
	" Gorska",
	" Morska",
	" Zdroj",
	" Woda",
	" Bajoro",
	" Krajenska",
	" Slaska",
	" Mazowiecka",
	" Pomorska",
	" Wielka",
	" Mala",
	" Warminska",
	" Mazurska",
	" Mniejsza",
	" Wieksza",
	" Gorna",
	" Dolna",
	" Wielka",
	" Stara",
	" Nowa",
	" Wielkopolska",
	" Wzgorza",
	" Mosty",
	" Kujawska",
	" Malopolska",
	" Podlaska",
	" Lesna"
};

static const char *name_polish_3_n[] = {
	" Wybudowanie",
	" Swietokrzyskie",
	" Gorskie",
	" Morskie",
	" Zdroj",
	" Wody",
	" Bajoro",
	" Krajenskie",
	" Slaskie",
	" Mazowieckie",
	" Pomorskie",
	" Wielkie",
	" Male",
	" Warminskie ",
	" Mazurskie ",
	" Mniejsze",
	" Wieksze",
	" Gorne",
	" Dolne",
	" Wielkie",
	" Stare",
	" Nowe",
	" Wielkopolskie",
	" Wzgorze",
	" Mosty",
	" Kujawskie",
	" Malopolskie",
	" Podlaskie",
	" Lesne"
};

static const char *name_czech_real[] = {
	"As",
	"Benesov",
	"Beroun",
	"Bezdruzice",
	"Blansko",
	"Breclav",
	"Brno",
	"Brunt�l",
	"Cesk� L�pa",
	"Cesk� Budejovice",
	"Cesk� Krumlov",
	"Dec�n",
	"Domazlice",
	"Dub�",
	"Fr�dek-M�stek",
	"Havl�ckuv Brod",
	"Hodon�n",
	"Hradec Kr�lov�",
	"Humpolec",
	"Cheb",
	"Chomutov",
	"Chrudim",
	"Jablonec nad Nisou",
	"Jesen�k",
	"Jic�n",
	"Jihlava",
	"Jindrichuv Hradec",
	"Karlovy Vary",
	"Karvin�",
	"Kladno",
	"Klatovy",
	"Kol�n",
	"Kosmonosy",
	"Kromer�z",
	"Kutn� Hora",
	"Liberec",
	"Litomerice",
	"Louny",
	"Manet�n",
	"Meln�k",
	"Mlad� Boleslav",
	"Most",
	"N�chod",
	"Nov� Jic�n",
	"Nymburk",
	"Olomouc",
	"Opava",
	"Or�cov",
	"Ostrava",
	"Pardubice",
	"Pelhrimov",
	"Polzice",
	"P�sek",
	"Plzen",
	"Praha",
	"Prachatice",
	"Prerov",
	"Pr�bram",
	"Prostejov",
	"Rakovn�k",
	"Rokycany",
	"Rudn�",
	"Rychnov nad Kneznou",
	"Semily",
	"Sokolov",
	"Strakonice",
	"Stredokluky",
	"Sumperk",
	"Svitavy",
	"T�bor",
	"Tachov",
	"Teplice",
	"Treb�c",
	"Trutnov",
	"Uhersk� Hradiste",
	"�st� nad Labem",
	"�st� nad Orlic�",
	"Vset�n",
	"Vyskov",
	"Zd�r nad S�zavou",
	"Zl�n",
	"Znojmo"
};


/* The advanced hyperintelligent Czech town names generator! */
/* The tables and MakeCzechTownName() is (c) Petr Baudis 2005 (GPL'd)
 * Feel free to ask me about anything unclear or if you need help
 * with cloning this for your own language. */

// Sing., pl.
typedef enum CzechGender {
	CZG_SMASC,
	CZG_SFEM,
	CZG_SNEUT,
	CZG_PMASC,
	CZG_PFEM,
	CZG_PNEUT,
	// Special for substantive stems - the ending chooses the gender.
	CZG_FREE,
	// Like CZG_FREE, but disallow CZG_SNEUT.
	CZG_NFREE
} CzechGender;
typedef enum CzechPattern {
	CZP_JARNI,
	CZP_MLADY,
	CZP_PRIVL
} CzechPattern;
/* [CzechGender][CzechPattern] - replaces the last character of the adjective
 * by this. */
// XXX: [CZG_SMASC][CZP_PRIVL] needs special handling: -ovX -> -uv.
static const char name_czech_patmod[][3] = {
	/* CZG_SMASC */ { '�', '�', 'X' },
	/* CZG_SFEM */  { '�', '�', 'a' },
	/* CZG_SNEUT */ { '�', '�', 'o' },
	/* CZG_PMASC */ { '�', '�', 'y' },
	/* CZG_PFEM */  { '�', '�', 'y' },
	/* CZG_PNEUT */ { '�', '�', 'a' }
};

// This way the substantives can choose only some adjectives/endings:
// At least one of these flags must be satisfied:
typedef enum CzechAllow {
	CZA_SHORT = 1,
	CZA_MIDDLE = 2,
	CZA_LONG = 4,
	CZA_ALL = ~0
} CzechAllow;
// All these flags must be satisfied (in the stem->others direction):
typedef enum CzechChoose {
	CZC_NONE = 0, // No requirements.
	CZC_COLOR = 1,
	CZC_POSTFIX = 2, // Matched if postfix was inserted.
	CZC_NOPOSTFIX = 4, // Matched if no postfix was inserted.
	CZC_ANY = ~0
} CzechChoose;

typedef struct CzechNameSubst {
	CzechGender gender;
	CzechAllow allow;
	CzechChoose choose;
	const char *name;
} CzechNameSubst;

typedef struct CzechNameAdj {
	CzechPattern pattern;
	CzechChoose choose;
	const char *name;
} CzechNameAdj;

// Some of items which should be common are doubled.
static const CzechNameAdj name_czech_adj[] = {
	{ CZP_JARNI, CZC_ANY, "Horn�" },
	{ CZP_JARNI, CZC_ANY, "Horn�" },
	{ CZP_JARNI, CZC_ANY, "Doln�" },
	{ CZP_JARNI, CZC_ANY, "Doln�" },
	{ CZP_JARNI, CZC_ANY, "Predn�" },
	{ CZP_JARNI, CZC_ANY, "Zadn�" },
	{ CZP_JARNI, CZC_ANY, "Kosteln�" },
	{ CZP_JARNI, CZC_ANY, "Havran�" },
	{ CZP_JARNI, CZC_ANY, "R�cn�" },
	{ CZP_JARNI, CZC_ANY, "Jezern�" },
	{ CZP_MLADY, CZC_ANY, "Velk�" },
	{ CZP_MLADY, CZC_ANY, "Velk�" },
	{ CZP_MLADY, CZC_ANY, "Mal�" },
	{ CZP_MLADY, CZC_ANY, "Mal�" },
	{ CZP_MLADY, CZC_ANY, "Vysok�" },
	{ CZP_MLADY, CZC_ANY, "Cesk�" },
	{ CZP_MLADY, CZC_ANY, "Moravsk�" },
	{ CZP_MLADY, CZC_ANY, "Slov�ck�" },
	{ CZP_MLADY, CZC_ANY, "Slezsk�" },
	{ CZP_MLADY, CZC_ANY, "Uhersk�" },
	{ CZP_MLADY, CZC_ANY, "Star�" },
	{ CZP_MLADY, CZC_ANY, "Star�" },
	{ CZP_MLADY, CZC_ANY, "Nov�" },
	{ CZP_MLADY, CZC_ANY, "Nov�" },
	{ CZP_MLADY, CZC_ANY, "Mlad�" },
	{ CZP_MLADY, CZC_ANY, "Kr�lovsk�" },
	{ CZP_MLADY, CZC_ANY, "Kamenn�" },
	{ CZP_MLADY, CZC_ANY, "Cihlov�" },
	{ CZP_MLADY, CZC_ANY, "Divn�" },
	{ CZP_MLADY, CZC_COLOR, "Cerven�" },
	{ CZP_MLADY, CZC_COLOR, "Cerven�" },
	{ CZP_MLADY, CZC_COLOR, "Cerven�" },
	{ CZP_MLADY, CZC_COLOR, "Zelen�" },
	{ CZP_MLADY, CZC_COLOR, "Zlut�" },
	{ CZP_MLADY, CZC_COLOR, "Siv�" },
	{ CZP_MLADY, CZC_COLOR, "Sed�" },
	{ CZP_MLADY, CZC_COLOR, "B�l�" },
	{ CZP_MLADY, CZC_COLOR, "B�l�" },
	{ CZP_MLADY, CZC_COLOR, "Modr�" },
	{ CZP_MLADY, CZC_COLOR, "Ruzov�" },
	{ CZP_MLADY, CZC_COLOR, "Cern�" },
	{ CZP_PRIVL, CZC_ANY, "Kr�lova" },
	{ CZP_PRIVL, CZC_ANY, "Janova" },
	{ CZP_PRIVL, CZC_ANY, "Karlova" },
	{ CZP_PRIVL, CZC_ANY, "Krystofova" },
	{ CZP_PRIVL, CZC_ANY, "Jir�kova" },
	{ CZP_PRIVL, CZC_ANY, "Petrova" },
	{ CZP_PRIVL, CZC_ANY, "Sudovo" },
};

// Considered a stem for choose/allow matching purposes.
static const CzechNameSubst name_czech_subst_full[] = {
	{ CZG_SMASC, CZA_ALL, CZC_COLOR, "Sedlec" },
	{ CZG_SMASC, CZA_ALL, CZC_COLOR, "Brod" },
	{ CZG_SMASC, CZA_ALL, CZC_COLOR, "Brod" },
	{ CZG_SMASC, CZA_ALL, CZC_NONE, "�val" },
	{ CZG_SMASC, CZA_ALL, CZC_COLOR, "Zd�r" },
	{ CZG_SMASC, CZA_ALL, CZC_COLOR, "Smrk" },
	{ CZG_SFEM,  CZA_ALL, CZC_COLOR, "Hora" },
	{ CZG_SFEM,  CZA_ALL, CZC_COLOR, "Lhota" },
	{ CZG_SFEM,  CZA_ALL, CZC_COLOR, "Lhota" },
	{ CZG_SFEM,  CZA_ALL, CZC_COLOR, "Hlava" },
	{ CZG_SFEM,  CZA_ALL, CZC_COLOR, "L�pa" },
	{ CZG_SNEUT, CZA_ALL, CZC_COLOR, "Pole" },
	{ CZG_SNEUT, CZA_ALL, CZC_COLOR, "�dol�" },
	{ CZG_PMASC, CZA_ALL, CZC_NONE, "�valy" },
	{ CZG_PFEM,  CZA_ALL, CZC_COLOR, "Luka" },
	{ CZG_PNEUT, CZA_ALL, CZC_COLOR, "Pole" },
};

// TODO: More stems needed. --pasky
static const CzechNameSubst name_czech_subst_stem[] = {
	{ CZG_SMASC,             CZA_MIDDLE,            CZC_COLOR, "Kostel" },
	{ CZG_SMASC,             CZA_MIDDLE,            CZC_COLOR, "Kl�ster" },
	{ CZG_SMASC, CZA_SHORT,                         CZC_COLOR, "Lhot" },
	{ CZG_SFEM,  CZA_SHORT,                         CZC_COLOR, "Lhot" },
	{ CZG_SFEM,  CZA_SHORT,                         CZC_COLOR, "Hur" },
	{ CZG_FREE,              CZA_MIDDLE | CZA_LONG, CZC_NONE, "Sedl" },
	{ CZG_FREE,  CZA_SHORT | CZA_MIDDLE | CZA_LONG, CZC_COLOR, "Hrad" },
	{ CZG_NFREE,             CZA_MIDDLE,            CZC_NONE, "Pras" },
	{ CZG_NFREE,             CZA_MIDDLE,            CZC_NONE, "Baz" },
	{ CZG_NFREE,             CZA_MIDDLE,            CZC_NONE, "Tes" },
	{ CZG_NFREE,             CZA_MIDDLE,            CZC_NONE, "Uz" },
	{ CZG_NFREE,             CZA_MIDDLE | CZA_LONG, CZC_POSTFIX, "Br" },
	{ CZG_NFREE,             CZA_MIDDLE | CZA_LONG, CZC_NONE, "Vod" },
	{ CZG_NFREE,             CZA_MIDDLE | CZA_LONG, CZC_NONE, "Jan" },
	{ CZG_NFREE,                          CZA_LONG, CZC_NONE, "Prach" },
	{ CZG_NFREE,                          CZA_LONG, CZC_NONE, "Kunr" },
	{ CZG_NFREE,                          CZA_LONG, CZC_NONE, "Strak" },
	{ CZG_NFREE,                          CZA_LONG, CZC_NONE, "Vit" },
	{ CZG_NFREE,                          CZA_LONG, CZC_NONE, "Vys" },
	{ CZG_NFREE,                          CZA_LONG, CZC_NONE, "Zat" },
	{ CZG_NFREE,                          CZA_LONG, CZC_NONE, "Zer" },
	{ CZG_NFREE,                          CZA_LONG, CZC_NONE, "Stred" },
	{ CZG_NFREE,                          CZA_LONG, CZC_NONE, "Harv" },
	{ CZG_NFREE,                          CZA_LONG, CZC_NONE, "Pruh" },
	{ CZG_NFREE,                          CZA_LONG, CZC_NONE, "Tach" },
	{ CZG_NFREE,                          CZA_LONG, CZC_NONE, "P�sn" },
	{ CZG_NFREE,                          CZA_LONG, CZC_NONE, "Jin" },
	{ CZG_NFREE,                          CZA_LONG, CZC_NONE, "Jes" },
	{ CZG_NFREE,                          CZA_LONG, CZC_NONE, "Jar" },
	{ CZG_NFREE,                          CZA_LONG, CZC_NONE, "Sok" },
	{ CZG_NFREE,                          CZA_LONG, CZC_NONE, "Hod" },
	{ CZG_NFREE,                          CZA_LONG, CZC_NONE, "Net" },
	{ CZG_FREE,                           CZA_LONG, CZC_NONE, "Praz" },
	{ CZG_FREE,                           CZA_LONG, CZC_NONE, "Nerat" },
	{ CZG_FREE,                           CZA_LONG, CZC_NONE, "Kral" },
	{ CZG_FREE,                           CZA_LONG, CZC_NONE, "Hut" },
	{ CZG_FREE,                           CZA_LONG, CZC_NOPOSTFIX, "Pan" },
	{ CZG_FREE,  CZA_SHORT | CZA_MIDDLE | CZA_LONG, CZC_NOPOSTFIX, "Odstred" },
	{ CZG_FREE,  CZA_SHORT | CZA_MIDDLE | CZA_LONG, CZC_COLOR, "Mrat" },
	{ CZG_FREE,                           CZA_LONG, CZC_COLOR, "Hlav" },
	{ CZG_FREE,  CZA_SHORT | CZA_MIDDLE,            CZC_NONE, "Mer" },
	{ CZG_FREE,              CZA_MIDDLE | CZA_LONG, CZC_NONE, "Lip" },
};

// Optional postfix inserted between stem and ending.
static const char *name_czech_subst_postfix[] = {
	"av", "an", "at",
	"ov", "on", "ot",
	"ev", "en", "et",
};

// This array must have the both neutral genders at the end!
static const CzechNameSubst name_czech_subst_ending[] = {
	{ CZG_SMASC, CZA_SHORT | CZA_MIDDLE,            CZC_ANY, "ec" },
	{ CZG_SMASC, CZA_SHORT | CZA_MIDDLE,            CZC_ANY, "�n" },
	{ CZG_SMASC, CZA_SHORT | CZA_MIDDLE | CZA_LONG, CZC_ANY, "ov" },
	{ CZG_SMASC, CZA_SHORT       |        CZA_LONG, CZC_ANY, "kov" },
	{ CZG_SMASC,                          CZA_LONG, CZC_POSTFIX, "�n" },
	{ CZG_SMASC,                          CZA_LONG, CZC_POSTFIX, "n�k" },
	{ CZG_SMASC,                          CZA_LONG, CZC_ANY, "burk" },
	{ CZG_SFEM,  CZA_SHORT,                         CZC_ANY, "ka" },
	{ CZG_SFEM,              CZA_MIDDLE,            CZC_ANY, "inka" },
	{ CZG_SFEM,              CZA_MIDDLE,            CZC_ANY, "n�" },
	{ CZG_SFEM,                           CZA_LONG, CZC_ANY, "ava" },
	{ CZG_PMASC,                          CZA_LONG, CZC_POSTFIX, "�ky" },
	{ CZG_PMASC,                          CZA_LONG, CZC_ANY, "upy" },
	{ CZG_PMASC,                          CZA_LONG, CZC_ANY, "olupy" },
	{ CZG_PFEM,                           CZA_LONG, CZC_ANY, "avy" },
	{ CZG_PFEM,  CZA_SHORT | CZA_MIDDLE | CZA_LONG, CZC_ANY, "ice" },
	{ CZG_PFEM,  CZA_SHORT | CZA_MIDDLE | CZA_LONG, CZC_ANY, "icky" },
	{ CZG_PNEUT, CZA_SHORT | CZA_MIDDLE,            CZC_ANY, "na" },
	{ CZG_SNEUT, CZA_SHORT | CZA_MIDDLE,            CZC_ANY, "no" },
	{ CZG_SNEUT,                          CZA_LONG, CZC_ANY, "iste" },
};

static const char *name_czech_suffix[] = {
	"nad Cydlinou",
	"nad Dyj�",
	"nad Jihlavou",
	"nad Labem",
	"nad Lesy",
	"nad Moravou",
	"nad Nisou",
	"nad Odrou",
	"nad Ostravic�",
	"nad S�zavou",
	"nad Vltavou",
	"pod Pradedem",
	"pod Radhostem",
	"pod R�pem",
	"pod Snezkou",
	"pod Spic�kem",
	"pod Sedlem",
	"v Cechach",
	"na Morave",
};



static const char *name_romanian_real[]= {
	"Adjud",
	"Alba Iulia",
	"Alexandria",
	"Babadag",
	"Bac�u",
	"Baia Mare",
	"B�ile Herculane",
	"B�ilesti",
	"B�rlad",
	"Bicaz",
	"Bistrita",
	"Blaj",
	"Borsec",
	"Botosani",
	"Br�ila",
	"Brasov",
	"Bucuresti",
	"Buftea",
	"Buz�u",
	"C�l�rasi",
	"Caransebes",
	"Cernavod�",
	"Cluj-Napoca",
	"Constanta",
	"Covasna",
	"Craiova",
	"Dej",
	"Deva",
	"Dorohoi",
	"Dr.-Tr. Severin",
	"Dr�g�sani",
	"F�g�ras",
	"F�lticeni",
	"Fetesti",
	"Focsani",
	"Galati",
	"Gheorgheni",
	"Giurgiu",
	"H�rsova",
	"Hunedoara",
	"Husi",
	"Iasi",
	"Isaccea",
	"Lugoj",
	"M�cin",
	"Mangalia",
	"Medgidia",
	"Medias",
	"Miercurea Ciuc",
	"Mizil",
	"Motru",
	"N�s�ud",
	"N�vodari",
	"Odobesti",
	"Oltenita",
	"Onesti",
	"Oradea",
	"Orsova",
	"Petrosani",
	"Piatra Neamt",
	"Pitesti",
	"Ploiesti",
	"Predeal",
	"R�mnicu V�lcea",
	"Reghin",
	"Resita",
	"Roman",
	"Rosiorii de Vede",
	"Satu Mare",
	"Sebes",
	"Sf�ntu Gheorghe",
	"Sibiu",
	"Sighisoara",
	"Sinaia",
	"Slatina",
	"Slobozia",
	"Sovata",
	"Suceava",
	"Sulina",
	"T�nd�rei",
	"T�rgoviste",
	"T�rgu Jiu",
	"T�rgu Mures",
	"Tecuci",
	"Timisoara",
	"Tulcea",
	"Turda",
	"Turnu M�gurele",
	"Urziceni",
	"Vaslui",
	"Vatra Dornei",
	"Victoria",
	"Videle",
	"Zal�u"
};

static const char *name_slovak_real[] = {
	"Bratislava",
	"Banovce nad Bebravou",
	"Banska Bystrica",
	"Banska Stiavnica",
	"Bardejov",
	"Brezno",
	"Brezova pod Bradlom",
	"Bytca",
	"Cadca",
	"Cierna nad Tisou",
	"Detva",
	"Detva",
	"Dolny Kubin",
	"Dolny Kubin",
	"Dunajska Streda",
	"Gabcikovo",
	"Galanta",
	"Gbely",
	"Gelnica",
	"Handlova",
	"Hlohovec",
	"Holic",
	"Humenne",
	"Hurbanovo",
	"Kezmarok",
	"Komarno",
	"Kosice",
	"Kremnica",
	"Krompachy",
	"Kuty",
	"Leopoldov",
	"Levoca",
	"Liptovsky Mikulas",
	"Lucenec",
	"Malacky",
	"Martin",
	"Medzilaborce",
	"Michalovce",
	"Modra",
	"Myjava",
	"Namestovo",
	"Nitra",
	"Nova Bana",
	"Nove Mesto nad Vahom",
	"Nove Zamky",
	"Partizanske",
	"Pezinok",
	"Piestany",
	"Poltar",
	"Poprad",
	"Povazska Bystrica",
	"Prievidza",
	"Puchov",
	"Revuca",
	"Rimavska Sobota",
	"Roznava",
	"Ruzomberok",
	"Sabinov",
	"Sala",
	"Senec",
	"Senica",
	"Sered",
	"Skalica",
	"Sladkovicovo",
	"Smolenice",
	"Snina",
	"Stara Lubovna",
	"Stara Tura",
	"Strazske",
	"Stropkov",
	"Stupava",
	"Sturovo",
	"Sulekovo",
	"Topolcany",
	"Trebisov",
	"Trencin",
	"Trnava",
	"Turcianske Teplice",
	"Tvrdosin",
	"Vrable",
	"Vranov nad Toplov",
	"Zahorska Bystrica",
	"Zdiar",
	"Ziar nad Hronom",
	"Zilina",
	"Zlate Moravce",
	"Zvolen"
};

static const char *name_norwegian_1[] = {
	"Arna",
	"Aust",
	"Bj�rk",
	"Bj�rn",
	"Brand",
	"B�ver",
	"Drag",
	"Dr�",
	"Eids",
	"Egge",
	"Fager",
	"Finns",
	"Flat",
	"Foll",
	"Foss",
	"Fugle",
	"Furu",
	"Gaus",
	"Galte",
	"Geir",
	"Gl�s",
	"Gran",
	"Grind",
	"Grims",
	"Gr�n",
	"Gr�t",
	"Gulle",
	"Haka",
	"Hammer",
	"Haug",
	"Hol",
	"Hon",
	"Hop",
	"Hov",
	"Jess",
	"Kabel",
	"Kjerns",
	"Kjerring",
	"Knatte",
	"Krok",
	"K�y",
	"Lang",
	"Lauv",
	"Leir",
	"Lund",
	"Logn",
	"Lo",
	"Lyng",
	"L�n",
	"Mesna",
	"Mel",
	"Mo",
	"Nar",
	"Nitte",
	"Nord",
	"Odd",
	"Ola",
	"Otte",
	"Ran",
	"Rev",
	"Rog",
	"Roms",
	"Rosen",
	"Sand",
	"Sau",
	"Sel",
	"Sol",
	"Sjur",
	"Sk�r",
	"Sl�tt",
	"Stj�r",
	"Stor",
	"Svart",
	"Svens",
	"Svin",
	"Sylte",
	"Syn",
	"Tran",
	"Vass",
	"Ved",
	"Vest",
	"Vesle",
	"Vik",
	"V�g"
};

static const char *name_norwegian_2[] = {
	"aker",
	"anger",
	"bakken",
	"bekk",
	"berg",
	"botn",
	"breen",
	"bu",
	"bugen",
	"by",
	"bygd",
	"b�",
	"dal",
	"egga",
	"eid",
	"elv",
	"enga",
	"foss",
	"fjell",
	"fjord",
	"foten",
	"gard",
	"grend",
	"hammer",
	"haug",
	"havn",
	"heim",
	"hella",
	"hovda",
	"h�a",
	"h�gda",
	"kampen",
	"kj�len",
	"kollen",
	"kroken",
	"land",
	"lia",
	"mark",
	"moen",
	"myr",
	"nes",
	"nuten",
	"osen",
	"rike",
	"rud",
	"sand",
	"set",
	"sj�en",
	"skogen",
	"slette",
	"snipa",
	"stad",
	"stua",
	"stulen",
	"sund",
	"svingen",
	"s�tra",
	"tinden",
	"tun",
	"vang",
	"vatn",
	"veid",
	"vik",
	"voll",
	"v�g",
	"um",
	"�sen"
};

static const char *name_norwegian_real[] = {
	"Alta",
	"Arendal",
	"Askim",
	"Bergen",
	"Bod�",
	"Brevik",
	"Bryne",
	"Br�nn�ysund",
	"Drammen",
	"Dr�bak",
	"Egersund",
	"Elverum",
	"Farsund",
	"Fauske",
	"Finnsnes",
	"Flekkefjord",
	"Flora",
	"Fosnav�g",
	"Fredrikstad",
	"F�rde",
	"Gj�vik",
	"Grimstad",
	"Halden",
	"Hamar",
	"Hammerfest",
	"Harstad",
	"Haugesund",
	"Holmestrand",
	"Horten",
	"J�rpeland",
	"Kirkenes",
	"Kolvereid",
	"Kongsberg",
	"Kongsvinger",
	"Kopervik",
	"Krager�",
	"Kristiansand",
	"Kristiansund",
	"Langesund",
	"Larvik",
	"Leirvik",
	"Leknes",
	"Levanger",
	"Lillehammer",
	"Lillesand",
	"Lillestr�m",
	"Lyngdal",
	"L�renskog",
	"Mandal",
	"Mo i Rana",
	"Molde",
	"Mosj�en",
	"Moss",
	"Mysen",
	"M�l�y",
	"Namsos",
	"Narvik",
	"Notodden",
	"Odda",
	"Oslo",
	"Otta",
	"Porsgrunn",
	"Ringerike",
	"Ris�r",
	"Rjukan",
	"Sandefjord",
	"Sandnes",
	"Sandnessj�en",
	"Sandvika",
	"Sarpsborg",
	"Sauda",
	"Ski",
	"Skien",
	"Skudeneshavn",
	"Sortland",
	"Stathelle",
	"Stavanger",
	"Steinkjer",
	"Stj�rdal",
	"Stokmarknes",
	"Stord",
	"Svelvik",
	"Svolv�r",
	"Troms�",
	"Trondheim",
	"Tvedestrand",
	"T�nsberg",
	"Ulsteinvik",
	"Vads�",
	"Vard�",
	"Verdals�ra",
	"�krehamn",
	"�lesund",
	"�ndalsnes"
};

static const char *name_hungarian_1[] = {
	"Nagy-",
	"Kis-",
	"Fels�-",
	"Als�-",
	"�j-"
};

static const char *name_hungarian_2[] = {
	"Bodrog",
	"Dr�va",
	"Duna",
	"Hej�",
	"Hern�d",
	"R�ba",
	"Saj�",
	"Szamos",
	"Tisza",
	"Zala",
	"Balaton",
	"Fert�",
	"Bakony",
	"Cserh�t",
	"Bihar",
	"Hajd�",
	"J�sz",
	"Kun",
	"Magyar",
	"N�gr�d",
	"Ny�r",
	"Somogy",
	"Sz�kely",
	"Buda",
	"Gy�r",
	"Pest",
	"Feh�r",
	"Cser�p",
	"Erd�",
	"Hegy",
	"Homok",
	"Mez�",
	"Puszta",
	"S�r",
	"Cs�sz�r",
	"Herceg",
	"Kir�ly",
	"Nemes",
	"P�sp�k",
	"Szent",
	"Alm�s",
	"Szilv�s",
	"Agg",
	"Aranyos",
	"B�k�s",
	"Egyh�zas",
	"Gagy",
	"Heves",
	"Kapos",
	"T�pi�",
	"Torna",
	"Vas",
	"V�mos",
	"V�s�ros"
};

static const char *name_hungarian_3[] = {
	"ap�ti",
	"b�ba",
	"bikk",
	"dob",
	"fa",
	"f�ld",
	"hegyes",
	"kak",
	"kereszt",
	"k�rt",
	"lad�ny",
	"m�rges",
	"szalonta",
	"telek",
	"vas",
	"v�lgy"
};

static const char *name_hungarian_4[] = {
	"alja",
	"egyh�za",
	"h�za",
	"�r",
	"v�r"
};

static const char *name_hungarian_real[] = {
	"Ajka",
	"Asz�d",
	"Badacsony",
	"Baja",
	"Budapest",
	"Debrecen",
	"Eger",
	"Fony�d",
	"G�d�ll�",
	"Gy�r",
	"Gyula",
	"Karcag",
	"Kecskem�t",
	"Keszthely",
	"Kisk�re",
	"Kocsord",
	"Kom�rom",
	"K�szeg",
	"Mak�",
	"Moh�cs",
	"Miskolc",
	"�zd",
	"Paks",
	"P�pa",
	"P�cs",
	"Polg�r",
	"Sarkad",
	"Si�fok",
	"Szeged",
	"Szentes",
	"Szolnok",
	"Tihany",
	"Tokaj",
	"V�c",
	"Z�hony",
	"Zirc"
};

static const char *name_swiss_real[] = {
	"Aarau",
	"Aesch",
	"Altdorf",
	"Arosa",
	"Appenzell",
	"Arbon",
	"Altst�tten",
	"Baar",
	"Baden",
	"Bellinzona",
	"Brig-Glis",
	"Bienne",
	"Bulle",
	"Binningen",
	"Burgdorf",
	"Bern",
	"Basel",
	"B�lach",
	"Carouge",
	"Cham",
	"Chiasso",
	"Chur",
	"Davos",
	"Del�mont",
	"Dietikon",
	"D�bendorf",
	"Emmen",
	"Freienbach-Pf�ffikon",
	"Fribourg",
	"Frauenfeld",
	"Gen�ve",
	"Glarus",
	"Gossau",
	"Grenchen",
	"Herisau",
	"Horgen",
	"Horw",
	"Illnau-Effretikon",
	"Ittigen",
	"Jona",
	"Kriens",
	"Kloten",
	"K�niz",
	"Kreuzlingen",
	"K�snacht",
	"Agen",
	"Lancy",
	"La Chaux-de-Fonds",
	"Lenzburg",
	"Lugano",
	"Langenthal",
	"Littau",
	"Le Locle",
	"La Neuveville",
	"Locarno",
	"Liestal",
	"La Tour-de-Peilz",
	"Lausanne",
	"Lyss",
	"Luzern",
	"Martigny",
	"M�nchenstein",
	"Meyrin",
	"Montreux",
	"Monthey",
	"Morges",
	"Murten",
	"Moutier",
	"Muttenz",
	"Neuch�tel",
	"Neuhausen am Rheinfall",
	"Nyon",
	"Olten",
	"Onex",
	"Opfikon",
	"Ostermundigen",
	"Payerne",
	"Peseux",
	"Prilly",
	"Pully",
	"Rapperswil",
	"Richterswil",
	"Regensdorf",
	"Rheinfelden",
	"Riehen",
	"Renens",
	"Romanshorn",
	"Rorschach",
	"Stans",
	"Schaffhausen",
	"Steffisburg",
	"St. Gallen",
	"Schlieren",
	"Sierre",
	"Solothurn",
	"St. Moritz",
	"Sion",
	"Spiez",
	"St�fa",
	"Sursee",
	"Schwyz",
	"Thalwil",
	"Th�nex",
	"Thun",
	"Uster",
	"Uzwil",
	"Vernier",
	"Volketswil",
	"Versoix",
	"Vevey",
	"W�denswil",
	"Wettingen",
	"Wil",
	"Wallisellen",
	"Winterthur",
	"Wohlen",
	"Worb",
	"Wetzikon",
	"Yverdon-les-Bains",
	"Zollikon",
	"Zofingen",
	"Z�rich",
	"Zug",
};
