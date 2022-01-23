#pragma once

//printSplashScreen
char pString[16][173]  = {{ "\n\n\n\n\t\t\tPPPPPPPPPPPPPPPPP        AAA                  CCCCCCCCCCCCC                 MMMMMMMM               MMMMMMMM               AAA               NNNNNNNN        NNNNNNNN\n"},
		{"\t\t\tP::::::::::::::::P      A:::A              CCC::::::::::::C                 M:::::::M             M:::::::M              A:::A              N:::::::N       N::::::N\n"},
		{"\t\t\tP::::::PPPPPP:::::P    A:::::A           CC:::::::::::::::C                 M::::::::M           M::::::::M             A:::::A             N::::::::N      N::::::N\n"},
		{"\t\t\tPP::::: P     P::::P  A:::::::A         C:::::CCCCCCCC::::C                 M:::::::::M         M:::::::::M            A:::::::A            N:::::::::N     N::::::N\n"},
		{"\t\t\t  P::::P     P:::::P A:::::::::A       C:::::C       CCCCCC                 M::::::::::M       M::::::::::M           A:::::::::A           N::::::::::N    N::::::N\n"},
		{"\t\t\t  P::::P     P:::::PA:::::A:::::A     C:::::C                               M:::::::::::M     M:::::::::::M          A:::::A:::::A          N:::::::::::N   N::::::N\n"},
		{"\t\t\t  P::::PPPPPP:::::PA:::::A A:::::A    C:::::C                               M:::::::M::::M   M::::M:::::::M         A:::::A A:::::A         N:::::::N::::N  N::::::N\n"},
		{"\t\t\t  P:::::::::::::PPA:::::A   A:::::A   C:::::C              ===============  M::::::M M::::M M::::M M::::::M        A:::::A   A:::::A        N::::::N N::::N N::::::N\n"},
		{"\t\t\t  P::::PPPPPPPPP A:::::A     A:::::A  C:::::C             - ============= - M::::::M  M::::M::::M  M::::::M       A:::::A     A:::::A       N::::::N  N::::N:::::::N\n"},
		{"\t\t\t  P::::P        A:::::AAAAAAAAA:::::A C:::::C              ===============  M::::::M   M:::::::M   M::::::M      A:::::AAAAAAAAA:::::A      N::::::N   N:::::::::::N\n"},
		{"\t\t\t  P::::P       A:::::::::::::::::::::AC:::::C                               M::::::M    M:::::M    M::::::M     A:::::::::::::::::::::A     N::::::N    N::::::::::N\n"},
		{"\t\t\t  P::::P      A:::::AAAAAAAAAAAAA:::::AC:::::C       CCCCCC                 M::::::M     MMMMM     M::::::M    A:::::AAAAAAAAAAAAA:::::A    N::::::N     N:::::::::N\n"},
		{"\t\t\tPP::::::PP   A:::::A             A:::::AC:::::CCCCCCCC::::C                 M::::::M               M::::::M   A:::::A             A:::::A   N::::::N      N::::::::N\n"},
		{"\t\t\tP::::::::P  A:::::A               A:::::ACC:::::::::::::::C                 M::::::M               M::::::M  A:::::A               A:::::A  N::::::N       N:::::::N\n"},
		{"\t\t\tP::::::::P A:::::A                 A:::::A CCC::::::::::::C                 M::::::M               M::::::M A:::::A                 A:::::A N::::::N        N::::::N\n"},
		{"\t\t\tPPPPPPPPPPAAAAAAA                   AAAAAAA   CCCCCCCCCCCCC                 MMMMMMMM               MMMMMMMMAAAAAAA                   AAAAAAANNNNNNNN         NNNNNNN\n"} };

char cont[5][150] = {{ "\t\t\t\t\t\t\t\t.--.                    .---.     .             .                     .                 \n"},
		{"\t        |   )                   |       _ | _         _ | _                 _ | _  o\n"},
		{"|--'.--..-.  .--..--.   |--- .--. |  .-. .--.   |  .-.    .-..-. .--. |    .  .--. .  . .-. \n"},
		{"       |   |  (. -' `--.`--.   |    |  | | (.-' |      | (   )  (  (   )|  | |    |  |  | |  |(. -' \n"},
		{"               '   '   `- -'`--'`- -'  '---''  `-`-'`--''      `-'`-'    `-'`-' '  `-`-'-' `-'  `-`--`-`--'\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t"}, };		

//mainMenuScene
char pacmanArt[25][250] = {{ "\n\n               xolcccccccccclokK                                                                                                                                                   Kkolc::cc::::ccox0              \n"},
		{"          KkxdddxkOO000000OkxxddxxOXW                                                                                                                                         WXOxddddxkO00000OOOkxdddxkK          \n"},
		{"       XkdddOKKKKKKKKKKKKKKKKXXK0kdddO                                                                                                                                      Ododk0KKXKKKKKKKKKKKKKKK0kdodkX        \n"},
		{"     XxodOKKKKKKKKKKKKKKKKKKKKKKKKKKkoo                                                                                                                                    oookKKKKKKKKKKKKKKKKKKKKKKKKKKOdox      \n"},
		{"    kld0KKKKKKKKKKKKKKKKKKKKKKKKKKKK0x                                                                                                                                      cd0KXKKKKKKKKKKKKKKKKKKKKKKKKKK0dlk    \n"},
		{"  KooOKKKKKKKKKKKXKKKK0OOKKKKKKKKK0do                                                                                                                                         od0KKKKKKKKKOO0KKKKXKKKKKKKKKKKOooK  \n"},
		{" Kld0KKKKKKKKKKKKKKKKx   cOKKKKKOdo                                                                                                                                             odOKKKKKOc   xKKKKKKKKKKKKKKKK0olK \n"},
		{"XooKKKKKKKKKKKKKKKKK0o   kXKKOdok                                                                                                                                                kooOKKXkk   KXKKKKKKKKKKKKKKKKolK\n"},
		{"dl0KKKKKKKKKKKKKKKKKK0xodOKKkook                                                                                                                                                   kookKKOdox0KKKKKKKKKKKKKKKKKK0ld\n"},
		{"cxKKKKKKKKKKKKKKKKKKKKKKKKkooO                                                                                                                                                       OookKKKKKKKKKKKKKKKKKKKKKKXKxc\n"},
		{"cOXKKKKKKKKKKKKKKKKKKKK0kodO                                                                                                                                                           0doxKKKKKKKKKKKKKKKKKKKKKXOc\n"},
		{"c0KKKKKKKKKKKKKKKKKKKKOll0W                                                                                                                                                             W0clOKKKKKKKKKKKKKKKKKKKK0c\n"},
		{"c0KKKKKKKKKKKKKKKKKKKK0xlxX                                                                                                                                                             Xxld0KKKKKKKKKKKKKKKKKKKK0c\n"},
		{"ckXKKKKKKKKKKKKKKKKKKKKK0dok                                                                                                                                                           kld0KKKKKKKKKKKKKKKKKKKKKXkc\n"},
		{"loKKKKKKKKKKKKKKKKXKKKKKKKOoo0                                                                                                                                                       OooOKKKKKKXKKKKKKKKKKKKKKKKKol\n"},
		{"OlkKKKKKKKKKKKKKKKKKKKKKKKKKkodK                                                                                                                                                   KdokKKKKKKKKKKKKKKKKKKKKKKKKKkck\n"},
		{" xlOKKKKKKKKKKKKKKKKKKKKKKKKK0xlx                                                                                                                                                Xxlx0KKKKKKKKKKKKKKKKKKKKKKKKKklx \n"},
		{"  xlkKKKKKKKKKKKKKKKKKKKKKXKKKK0dok                                                                                                                                             kld0KKKKKKKKKKKKKKKKKKKKKKXKKKklx  \n"},
		{"   Old0KKKKKKKKKKKKKKKKKKKKKKKKKKOooO                                                                                                                                         OooOKKKKKKKKKKKKKKKKKKKKKKKKKK0dlO   \n"},
		{"    Xxod0KKKKKKKKKKKKKKKKKKKKKKKKKKkoo0                                                                                                                                     0olkKKKKKKKKKKKKKKKKKKKKKKKKKK0dlxX    \n"},
		{"      Kxodk0KKKKKKKKKKKKKKKKKKKKKK0xol0                                                                                                                                     0llx0KKKKKKKKKKKKKKKKKKKKKK0kdoxK      \n"},
		{"         Oxddxk0KKXXXXXKKKXKKK0kdddx0N                                                                                                                                       W0xdddkOKKKXKKKKKXXXKK0kdddxO         \n"},
		{"            KkxxxddddddddddddxxkOKW                                                                                                                                             WKOxxxdddddddddddddxxkK            \n"},
		{"                 KOkkxxxxxk0XN                                                                                                                                                       K0kxxddxkOOK                 \n"} };

char pacmanTitle[10][120] = { { "\t\t\t\t\t\t\t  ooooooooo.         .o.         .oooooo.           ooo        ooooo       .o.       ooooo      ooo \n"},
		{"\t\t\t\t\t\t\t  `888   `Y88.      .888.       d8P'  `Y8b          `88.       .888'      .888.      `888b.     `8'\n"},
		{"\t\t\t\t\t\t\t   888   .d88'     .8\"888.     888                   888b    d' 888      .8\"888.      8 `88b.    8 \n"},
		{"\t\t\t\t\t\t\t   888ooo88P'     .8' `888.    888                   8 Y88..P   888     .8' `888.     8   `88b.  8  \n"},
		{"\t\t\t\t\t\t\t   888           .88ooo8888.   888          8888888  8  `888'   888    .88ooo8888.    8     `88b.8\n"},
		{"\t\t\t\t\t\t\t   888          .8'     `888.  `88b    ooo           8    Y     888   .8'     `888.   8       `888\n"},
		{"\t\t\t\t\t\t\t  o888o        o88o     o8888o  `Y8bood8P'          o8o        o888o o88o     o8888o o8o        `8\n"} };
				
char menuSelection[9][45] = { { "\n\n\t\t\t\t\t\t\t\t\t\t\t\t+-+-+-+-+-+ +-+-+-+-+\n"},
		{"\t\t\t\t\t\t\t\t\t\t\t        |S|T|A|R|T| |G|A|M|E|\n" },
		{"\t\t\t\t\t\t\t\t\t\t\t\t+-+-+-+-+-+ +-+-+-+-+\n\n\n"},
		{"\t\t\t\t\t\t\t\t\t\t\t\t   +-+-+-+-+-+-+-+\n"},
		{"\t\t\t\t\t\t\t\t\t\t\t           |C|R|E|D|I|T|S|\n"},
		{"\t\t\t\t\t\t\t\t\t\t\t\t   +-+-+-+-+-+-+-+\n\n\n"},
		{"\t\t\t\t\t\t\t\t\t\t\t\t      +-+-+-+-+\n"},
		{"\t\t\t\t\t\t\t\t\t\t\t              |E|X|I|T|\n"},
		{"\t\t\t\t\t\t\t\t\t\t\t\t      +-+-+-+-+\n\n"} };
		
//instructionsScene
char howTo[16][160] = {{ "\n\n\t\t\t\t    ooooo   ooooo   .oooooo.   oooooo   oooooo     oooo      ooooooooooooo   .oooooo.        ooooooooo.   ooooo              .o.       oooooo   oooo\n"},
		{"\t\t\t\t    `888'   `888'  d8P'  `Y8b   `888.    `888.     .8'       8'   888   `8  d8P'  `Y8b       `888   `Y88. `888'             .888.       `888.   .8'  \n"},
		{"\t\t\t\t     888     888  888      888   `888.   .8888.   .8'             888      888      888       888   .d88'  888             .8\"888.       `888. .8'   \n"},
		{"\t\t\t\t     888ooooo888  888      888    `888  .8'`888. .8'              888      888      888       888ooo88P'   888            .8' `888.       `888.8'    \n"},
		{"\t\t\t\t     888     888  888      888     `888.8'  `888.8'               888      888      888       888          888           .88ooo8888.       `888'\n"},
		{"\t\t\t\t     888     888  `88b    d88'      `888'    `888'                888      `88b    d88'       888          888       o  .8'     `888.       888\n"},
		{"\t\t\t\t    o888o   o888o  `Y8bood8P'        `8'      `8'                o888o      `Y8bood8P'       o888o        o888ooooood8 o88o     o8888o     o888o\n"},
		{ "\n\n\t\t\t\t           __   ___               __   __     __   __          __   __   __                ___      __     ___  __            __        ___ \n"},
		{"\t\t\t\t     |  | /__` | __    |  |  /\\  /__` |  \\   /  \\ |__)    /\\  |__) |__) /  \\ |  |    |__/ |__  \\ / /__`     |  /  \\     |\\/| /  \\ \\  / |__\n"},
		{"\t\t\t\t     \\__/ .__/ |___    |/\\| /~~\\ .__/ |__/   \\__/ |  \\   /~~\\ |  \\ |  \\ \\__/ |/\\|    |  \\ |___  |  .__/     |  \\__/     |  | \\__/  \\/  |___\n"},
	  	{"\n\n\t\t\t        __   __             ___  __  ___                       __   __         ___  __     ___  __      ___           __                ___       ___   \n"},
		{"\t\t\t       /  ` /  \\ |    |    |__  /  `  |      /\\  |    |       |__) /  \\ | |\\ |  |  /__`     |  /  \\    |__  | |\\ | | /__` |__|    |    |__  \\  / |__  | \n"},
		{"\t\t\t       \\__, \\__/ |___ |___ |___ \\__,  |     /~~\\ |___ |___    |    \\__/ | | \\|  |  .__/     |  \\__/    |    | | \\| | .__/ |  |    |___ |___  \\/  |___ |___\n"},
	    {"\n\n\t\t\t\t\t          __   ___      __   __        ___  __           __   __     ___  __      ___      ___     __        __    __  ___  __  \n"},
		{"\t\t\t\t\t    |  | /__` |__      |__) /  \\ |  | |__  |__) __ |  | |__) /__`     |  /  \\    |__   /\\   |     / _` |__| /  \\  /__`  |  /__`\n"},
		{"\t\t\t\t\t    \\__/ .__/ |___     |    \\__/ |/\\| |___ |  \\    \\__/ |    .__/     |  \\__/    |___ /~~\\  |     \\__> |  | \\__/  .__/  |  .__/ \n"}};
		
char spade[11][60] =  {{"\n\t\t\t\t\t\t\t\t\t\t                       ,,               \n"},
		{"\t\t\t\t\t\t\t\t\t\t                     ,,,,,,             \n"},
		{"\t\t\t\t\t\t\t\t\t\t                   ,,,,,,,,,,           \n"},
		{"\t\t\t\t\t\t\t\t\t\t                 ,,,,,,,,,,,,,,         \n"},
		{"\t\t\t\t\t\t\t\t\t\t               ,,,,,,,,,,,,,,,,,,       \n"},
		{"\t\t\t\t\t\t\t\t\t\t             ,,,,,,,,,,,,,,,,,,,,,,     \n"},
		{"\t\t\t\t\t\t\t\t\t\t            ,,,,,,,,,,,,,,,,,,,,,,,,    \n"},
		{"\t\t\t\t\t\t\t\t\t\t            ,,,,,,,,,,,,,,,,,,,,,,,,    \n"},
		{"\t\t\t\t\t\t\t\t\t\t              ,,,,,,   ,,   ,,,,,,      \n"},
		{"\t\t\t\t\t\t\t\t\t\t                      ,,,,              \n"},
		{"\t\t\t\t\t\t\t\t\t\t                      ,,,,              \n"} };
		
char ghostsArray[7][107] = { {"          ,,                   ,,                   ,,                   ,,                   ,,         \n"},
		{"        ,,,,,,               ,,,,,,               ,,,,,,               ,,,,,,               ,,,,,,       \n"},
		{"    ,,,,      ,,,,       ,,,,      ,,,,       ,,,,      ,,,,       ,,,,      ,,,,       ,,,,      ,,,,   \n"},
		{"  ,,,            ,,,   ,,,            ,,,   ,,,            ,,,   ,,,            ,,,   ,,,            ,,, \n"},
		{"  ,,,            ,,,   ,,,            ,,,   ,,,            ,,,   ,,,            ,,,   ,,,            ,,, \n"},
		{"  ,,,            ,,,   ,,,            ,,,   ,,,            ,,,   ,,,            ,,,   ,,,            ,,, \n"},
		{"  ,,,,,,,,,,,,,,,,,,   ,,,,,,,,,,,,,,,,,,   ,,,,,,,,,,,,,,,,,,   ,,,,,,,,,,,,,,,,,,   ,,,,,,,,,,,,,,,,,, \n"}, };
			
//gameMenuScene
char characterSelection[24][100] = { {"\n\n\n\n\n\n\n"}, {"\n\t\t\t\t\t\t\t\t          .';codddddoc:'.                                    .';coddddol:,. \n"},
		{ "       .,lx0KKK00000KKK0kl, .                             .cxOKKKKKKKKKK0ko, .\n"},
		{	"      ,d0KK0xl:,''',:ok0KK0d,                           .cOKKKKKKKKKKKKKKKK0d,   \n"},
		{	"    .cOKK0d,.         .;d0KKOc.                        'd0KKKKKKKKKKKKKKKKKKKO:.      \n"},
		{	"   .l0KKO:.             .cOKK0l.                      'xKKKKKKKKKKKKKKKKKKKKKKOc.     \n"},
		{	"   c0KKO;                 :OKKO:                     .oKKKKKKKKK0KKKKKKKKKKKK0KO;\n"},
		{	"  'kKK0l.   ..       ..   .l0KKx'                    :OKKKK0xlox0KKKK0Odlok0KK0Kd.\n"},
		{	"  c0KKx'  'okxl.   .lkko'  ,kKK0:                   .oKK0KO:.  .cOKKKd'   'd0K0KO;  \n"},
		{	" .dKK0o. .xK0KKl. .o0K0Kd. .d0KKo.                  'kKKKKd.    .xKK0:     ;OK0K0c    \n"},
		{	" .xKK0c  .o0KK0c  .c0KK0o. .l0KKd.                  ,OKK0Kk,    ;kKK0o.   .l0KKKKl.\n"},
		{ 	" .xKK0:   .;ll,.   .;ll;.   c0KKd.                  ,OKK0KKkl;;lk0KKK0d:;:d0KKKKKo.\n"},
		{	" .dKK0l.                   .l0KKd.                  ,OKKKKKKKKKKKKKKKKKKKKKKKKK0Kl.\n"},
		{	" .oK00o.  .'.         .'.   xKK0l                   .xKK0KK00KKKKKKKKKKKKK0KK00K0c\n"},
		{	"  :OKKk, .dko : , ..',:oOo. ;OKKO,                  .o0KKKKOolk0KKKKKKKOdlkKKK0Kk,  \n"},
		{	"  .xKK0o. .l0KK00000KKOc.  .dKK0o.                   ,kKK0KO: .':llllc;. .dKKKK0o.    \n"},
		{	"   ;OKK0c.  .;x0KKKKK0d,  .l0KKk'                    .l0KKK0o.           ;kKKKKk'\n"},
		{	"    :OKK0l.  .,:lll:'.   .o0KKk;                      .o0K0K0x:.      .,oOKKKKk;      \n"},
		{	"     ;k0K0x:.         .:k0K0x,                         .l0KKKK0Odlcccok0KKKKKk, \n"},
		{	"      .lOKK0koc;,,,;cdO0K0k:.                           .;x0K00KKKKKKKKK0KKOl.\n"},
		{	"        .cdOKKKKKKKKKK0Oo:.                               .;ok0KKKKKKKKKOxc.\n"},
		{	"           .,:llooolc:, .                                    .,:llooolc;'.            \n\n\n"}, };		
		
char difficultySelection[12][78] = { { "\n\n\t\t\t\t\t\t\t\t                __        __              \n"},
		{	"\t\t\t\t\t\t\t\t               /  `  /\\  /__` |  |  /\\  | \n"},
		{	"\t\t\t\t\t\t\t\t               \\__, /~~\\ .__/ \\__/ /~~\\ |___ \n\n"},
		{ "\t\t\t\t\t\t\t\t\t       You have little or no experience playing arcade games"},
		{"\n\n\t\t\t\t\t\t\t\t                     __   __         \n"},
		{	"\t\t\t\t\t\t\t\t               |\\ | /  \\ |__)  |\\/|  /\\  | \n"},
		{	"\t\t\t\t\t\t\t\t               | \\| \\__/ |  \\  |  | /~~\\ |___\n\n"},
		{ "\t\t\t\t\t\t\t\t\t       You have some experience playing arcade games"},
		{"\n\n\t\t\t\t\t\t\t\t                          __   __  \n"},
		{	"\t\t\t\t\t\t\t\t               |__|  /\\  |__) |  \\\n"},
		{	"\t\t\t\t\t\t\t\t               |  | /~~\\ |  \\ |__/ \n\n"},
		{ "\t\t\t\t\t\t\t\t\t       Only choose Hard if you are a Pac-Man veteren\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t"}, };
	
char controlSelection[20][90] = { { "\n\n\n\n\n\n\n\n\t\t\t\t\t                _______        \t\t\t\t\t\t\t\t                    _______        \n"},
		{"\t\t\t\t\t               |\\     /|          \t\t\t\t\t\t\t\t           |\\     /|       \n" },
		{ "\t\t\t\t\t               | +---+ |           \t\t\t\t\t\t\t\t           | +---+ |        \n"},
		{ "\t\t\t\t\t               | |   | |           \t\t\t\t\t\t\t\t           | |   | |       \n"},
		{ "\t\t\t\t\t               | | W | |           \t\t\t\t\t\t\t\t           | |   | |       \n" },
		{ "\t\t\t\t\t               | +---+ |           \t\t\t\t\t\t\t\t           | +---+ |       \n"},
		{ "\t\t\t\t\t               |/_____\\|          \t\t\t\t\t\t\t\t           |/_____\\|      \n"},
		{ "\t\t\t\t\t        _______ _______ _______    \t\t\t\t\t\t\t\t    _______ _______ _______ \n"},
		{ "\t\t\t\t\t       |\\     /|\\     /|\\     /|\t\t\t\t\t\t\t\t   |\\     /|\\     /|\\     /|\n"},
		{ "\t\t\t\t\t       | +---+ | +---+ | +---+ |   \t\t\t\t\t\t\t\t   | +---+ | +---+ | +---+ | \n"},
		{ "\t\t\t\t\t       | |   | | |   | | |   | |   \t\t\t\t\t\t\t\t   | |   | | |   | | |   | |\n"},
		{ "\t\t\t\t\t       | | A | | | S | | | D | |   \t\t\t\t\t\t\t\t   | |   | | |   | | |   | |\n"},
		{ "\t\t\t\t\t       | +---+ | +---+ | +---+ |   \t\t\t\t\t\t\t\t   | +---+ | +---+ | +---+ | \n"},
		{"\t\t\t\t\t       |/_____\\|/_____\\|/_____\\|\t\t\t\t\t\t\t\t   |/_____\\|/_____\\|/_____\\| \n"}, };
			
//creditScene
char credits[35][190] = { {"\n\n\n\n\t\t\t\t\t\t\t\t\t    .|'''.|   '||''\\\\   '||''''|  '||''|.   '||' |''||''|  .|'''.|  \n"},
		{"\t\t\t\t\t\t\t\t\t  .|'      '   ||   ||   ||  .     ||   ||   ||     ||     ||..  '  \n"},
		{"\t\t\t\t\t\t\t\t\t  ||           ||--\\\\    ||''|     ||    ||  ||     ||      ''|||.  \n"},
		{"\t\t\t\t\t\t\t\t\t  '|.      .   ||   \\\\   ||        ||    ||  ||     ||    .     '|| \n"},
		{"\t\t\t\t\t\t\t\t\t   ''|....'   .||.   \\\\ .||.....| .||...|'  .||.   .||.   |'....|'\n"},
		{ "\n\n\n\t\t        ___       ___         __   ___  __     __                    __      __             __       __  ___  ___  __     __        __  ___  __          __      ___    __\n"},
		{"\t\t  |    |__  \\  / |__  |      |  \\ | __ /__` | / _` |\\ |    /\\  |\\ | |  \\    /  ` |__|  /\\  |__) /\\  /  `  |  |__  |__)   /  ` |  | /__`  |  /  \\  |\\/| |  /  /\\   |  | /  \\ |\\ | \n"},
		{"\t\t  |___ |___  \\/  |___ |___   |__/ |___ .__/ | \\__> | \\|   /~~\\ | \\| |__/    \\__, |  | /~~\\ | \\ /~~\\ \\__,  |  |___ | \\    \\__, \\__/ .__/  |  \\__/  |  | | /_ /~~\\  |  | \\__/ | \\|\n"},
		{"\t\t  ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------"},
		{ "\n\t\t\t\t\t\t\t\t\t         __   __        __   ___  ___  __                __\n"},
		{"\t\t\t\t\t\t\t\t\t        / _` /  \\ |  | |__) |__  |__  /__`  /\\  |\\ |    /__`\n"},
		{"\t\t\t\t\t\t\t\t\t        \\__> \\__/ |/\\| |  \\ |___ |___ .__/ /~~\\ | \\|    .__/ .\n\n\n"},
		{ "\n\n\t\t\t\t\t\t\t\t             __   __     __               __     ___  ___  __  ___         __  \n"},
		{"\t\t\t\t\t\t\t\t       |    /  \\ / _` | /  `    /\\  |\\ | |  \\     |  |__  /__`  |  | |\\ | / _`\n"},
		{"\t\t\t\t\t\t\t\t       |___ \\__/ \\__> | \\__,   /~~\\ | \\| |__/     |  |___ .__/  |  | | \\| \\__>\n"},
		{"\t\t\t\t\t\t\t\t       -----------------------------------------------------------------------"},
		{ "\n\t\t\t\t\t\t\t\t\t\t                  __  ___         __          ___  \n"},
		{"\t\t\t\t\t\t\t\t\t\t      |__/   /\\  |__)  |  |__| | /  ` |__/     |\n"},
		{"\t\t\t\t\t\t\t\t\t\t      |  \\  /~~\\ |  \\  |  |  | | \\__, |  \\     | .\n\n\n"},	
		{"\n\n\t\t\t\t\t\t\t\t\t\t\t\t        |  | |\n"},
		{"\t\t\t\t\t\t\t\t\t\t\t\t        \\__/ | \n"},
		{"\t\t\t\t\t\t\t\t\t\t\t\t        ------"},
		{"\n\t\t\t\t\t\t\t\t\t\t      __   ___         __  ___                 \n"},
		{"\t\t\t\t\t\t\t\t\t\t     /__` |__  |\\ | | /__`  |   /\\  |\\ |     |\n"},
		{"\t\t\t\t\t\t\t\t\t\t     .__/ |___ | \\| | .__/  |  /~~\\ | \\|  \\__/ .\n\n\n"},
		{"\n\n\t\t\t\t\t\t\t\t\t\t\t\t      __   ___  \n"},
		{"\t\t\t\t\t\t\t\t\t\t\t\t   | |  \\ |__   /\\\n"},
		{"\t\t\t\t\t\t\t\t\t\t\t\t   | |__/ |___ /~~\\\n"},
		{"\t\t\t\t\t\t\t\t\t\t\t\t   ----------------"},
		{"\n\t\t\t\t\t\t\t\t\t\t          __        __       __                __\n"},
		{"\t\t\t\t\t\t\t\t\t\t  |__/ | |__) |  | |__) /\\  |__)  /\\  |\\ |    |__)\n"},
		{"\t\t\t\t\t\t\t\t\t\t  |  \\ | |  \\ \\__/ |   /~~\\ |  \\ /~~\\ | \\|    |  \\ .\n\n\n"}};

		
		
		
//checkScene
char chk[7][140] = { { "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t     ###    ########  ########    ##    ##  #######  ##     ##     ######  ##     ## ########  ########     #######  \n"},
		{"\t\t\t\t\t\t    ## ##   ##     ## ##           ##  ##  ##     ## ##     ##    ##    ## ##     ## ##     ## ##          ##     ## \n"},
		{"\t\t\t\t\t\t   ##   ##  ##     ## ##            ####   ##     ## ##     ##    ##       ##     ## ##     ## ##                ##  \n"},
		{"\t\t\t\t\t\t  ##     ## ########  ######         ##    ##     ## ##     ##     ######  ##     ## ########  ######          ###   \n"},
		{"\t\t\t\t\t\t  ######### ##   ##   ##             ##    ##     ## ##     ##          ## ##     ## ##   ##   ##             ##     \n"},
		{"\t\t\t\t\t\t  ##     ## ##    ##  ##             ##    ##     ## ##     ##    ##    ## ##     ## ##    ##  ##                    \n"},
		{"\t\t\t\t\t\t  ##     ## ##     ## ########       ##     #######   #######      ######   #######  ##     ## ########       ##     \n"} };
		
char checkSelection[8][118] = { { "\n\n\n\n\n\t\t\t##    ## ########  ###### \t\t\t\t\t\t\t\t                                                       ##    ##  #######  \n"},
		{"\t\t\t ##  ##  ##       ##    ##     \t\t\t\t\t\t\t\t\t                                               ###   ## ##     ## \n" },
		{ "\t\t\t  ####   ##       ##           \t\t\t\t\t\t\t\t\t                                               ####  ## ##     ## \n"},
		{ "\t\t\t   ##    ######    ######      \t\t\t\t\t\t\t\t\t                                               ## ## ## ##     ##\n"},
		{ "\t\t\t   ##    ##             ##     \t\t\t\t\t\t\t\t\t                                               ##  #### ##     ## \n"},
		{ "\t\t\t   ##    ##       ##    ##     \t\t\t\t\t\t\t\t\t                                               ##   ### ##     ##\n"},
		{ "\t\t\t   ##    ########  ######      \t\t\t\t\t\t\t\t\t                                               ##    ##  ####### \n"},
		{"\n\t\t\t\t        \t\t\t\t\t\t\t\t\t\t                                                          \n"} };
					
//loadingScene
char lvl1[7][100] =  {{"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t  ##       ######## ##     ## ######## ##          #### \n"},
		{"\t\t\t\t\t\t\t\t\t\t  ##       ##       ##     ## ##       ##           ##  \n"},
		{"\t\t\t\t\t\t\t\t\t\t  ##       ##       ##     ## ##       ##           ##  \n"},
		{"\t\t\t\t\t\t\t\t\t\t  ##       ######   ##     ## ######   ##           ##  \n"},
		{"\t\t\t\t\t\t\t\t\t\t  ##       ##        ##   ##  ##       ##           ##  \n"},
		{"\t\t\t\t\t\t\t\t\t\t  ##       ##         ## ##   ##       ##           ##  \n"},
		{"\t\t\t\t\t\t\t\t\t\t  ######## ########    ###    ######## ########    #### \n"} };
			
char lvl2[7][100] = {{"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t##       ######## ##     ## ######## ##          #### #### \n"},
		{"\t\t\t\t\t\t\t\t\t\t##       ##       ##     ## ##       ##           ##   ##  \n"},
		{"\t\t\t\t\t\t\t\t\t\t##       ##       ##     ## ##       ##           ##   ##  \n"},
		{"\t\t\t\t\t\t\t\t\t\t##       ######   ##     ## ######   ##           ##   ##  \n"},
		{"\t\t\t\t\t\t\t\t\t\t##       ##        ##   ##  ##       ##           ##   ##  \n"},
		{"\t\t\t\t\t\t\t\t\t\t##       ##         ## ##   ##       ##           ##   ##  \n"},
		{"\t\t\t\t\t\t\t\t\t\t######## ########    ###    ######## ########    #### #### \n"} };
			
char lvl3[7][100] = { { "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t     ##       ######## ##     ## ######## ##          #### #### #### \n"},
		{"\t\t\t\t\t\t\t\t\t     ##       ##       ##     ## ##       ##           ##   ##   ##  \n"},
		{"\t\t\t\t\t\t\t\t\t     ##       ##       ##     ## ##       ##           ##   ##   ##  \n"},
		{"\t\t\t\t\t\t\t\t\t     ##       ######   ##     ## ######   ##           ##   ##   ##  \n"},
		{"\t\t\t\t\t\t\t\t\t     ##       ##        ##   ##  ##       ##           ##   ##   ##  \n"},
		{"\t\t\t\t\t\t\t\t\t     ##       ##         ## ##   ##       ##           ##   ##   ##  \n"},
		{"\t\t\t\t\t\t\t\t\t     ######## ########    ###    ######## ########    #### #### #### \n"} };
		
//pauseScene
char pause[8][100] = { { "\n\n\n\n\t\t\t\t\t\t\t\t\t  ########      ###     ##     ##   ######   ########  ########  \n"},
		{"\t\t\t\t\t\t\t\t\t  ##     ##    ## ##    ##     ##  ##    ##  ##        ##     ## \n"},
		{"\t\t\t\t\t\t\t\t\t  ##     ##   ##   ##   ##     ##  ##        ##        ##     ## \n"},
		{"\t\t\t\t\t\t\t\t\t  ########   ##     ##  ##     ##   ######   ######    ##     ## \n"},
		{"\t\t\t\t\t\t\t\t\t  ##         #########  ##     ##        ##  ##        ##     ## \n"},
		{"\t\t\t\t\t\t\t\t\t  ##         ##     ##  ##     ##  ##    ##  ##        ##     ## \n"},
		{"\t\t\t\t\t\t\t\t\t  ##         ##     ##   #######    ######   ########  ######## \n\n\n\n\n\n"} };
			
char pauseSelection[12][45] = { {"\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t   +-+-+-+-+-+-+\n"},
		{"\t\t\t\t\t\t\t\t\t\t\t           |R|E|S|U|M|E|\n" },
		{"\t\t\t\t\t\t\t\t\t\t\t\t   +-+-+-+-+-+-+\n\n\n"},
		{ "\t\t\t\t\t\t\t\t\t\t\t\t +-+-+-+ +-+-+-+-+\n"},
		{"\t\t\t\t\t\t\t\t\t\t\t         |N|E|W| |G|A|M|E|\n"},
		{"\t\t\t\t\t\t\t\t\t\t\t\t +-+-+-+ +-+-+-+-+\n\n\n"},
		{ "\t\t\t\t\t\t\t\t\t\t\t\t+-+-+-+-+ +-+-+-+-+\n"},
		{"\t\t\t\t\t\t\t\t\t\t\t        |M|A|I|N| |M|E|N|U|\n"},
		{"\t\t\t\t\t\t\t\t\t\t\t\t+-+-+-+-+ +-+-+-+-+\n\n\n"},
		{"\t\t\t\t\t\t\t\t\t\t\t\t     +-+-+-+-+\n"},
		{"\t\t\t\t\t\t\t\t\t\t\t             |E|X|I|T|\n"},
		{"\t\t\t\t\t\t\t\t\t\t\t\t     +-+-+-+-+\n\n\n\n\n"}, };
			
//congratsScene
char cong1[8][150] = {{ "\n\n\n\t\t\t\t\t\t\t  ##    ##   #######   ##     ##      ##     ##     ###     ########   ########     ####  ######## \n"},
		{"\t\t\t\t\t\t\t   ##  ##   ##     ##  ##     ##      ###   ###    ## ##    ##     ##  ##            ##      ##    \n"},
		{"\t\t\t\t\t\t\t    ####    ##     ##  ##     ##      #### ####   ##   ##   ##     ##  ##            ##      ##    \n"},
		{"\t\t\t\t\t\t\t     ##     ##     ##  ##     ##      ## ### ##  ##     ##  ##     ##  ######        ##      ##    \n"},
		{"\t\t\t\t\t\t\t     ##     ##     ##  ##     ##      ##     ##  #########  ##     ##  ##            ##      ##    \n"},
		{"\t\t\t\t\t\t\t     ##     ##     ##  ##     ##      ##     ##  ##     ##  ##     ##  ##            ##      ##    \n"},
		{"\t\t\t\t\t\t\t     ##      #######    #######       ##     ##  ##     ##  ########   ########     ####     ##    \n"} };		
			
char cong2[8][150] = {{ "\n\n\n\t\t\t\t\t\t\t\t    ######   #######  ##    ##  ######   ########     ###    ########  ######  \n"},
		{"\t\t\t\t\t\t\t\t   ##    ## ##     ## ###   ## ##    ##  ##     ##   ## ##      ##    ##    ## \n"},
		{"\t\t\t\t\t\t\t\t   ##       ##     ## ####  ## ##        ##     ##  ##   ##     ##    ##       \n"},
		{"\t\t\t\t\t\t\t\t   ##       ##     ## ## ## ## ##   #### ########  ##     ##    ##     ######  \n"},
		{"\t\t\t\t\t\t\t\t   ##       ##     ## ##  #### ##    ##  ##   ##   #########    ##          ## \n"},
		{"\t\t\t\t\t\t\t\t   ##    ## ##     ## ##   ### ##    ##  ##    ##  ##     ##    ##    ##    ## \n"},
		{"\t\t\t\t\t\t\t\t    ######   #######  ##    ##  ######   ##     ## ##     ##    ##     ###### \n"}};
		
char final[32][210] = {{"\n\n\n\t___                      __      ___  __   __      __                        __           ___  ___  __     __        __   __   __   __  ___         __                 __       __  ___            \n"},
		{"\t |  |__|  /\\  |\\ | |__/ /__`    |__  /  \\ |__)    |__) |     /\\  \\ / | |\\ | / _`    |__/ |__  |__  |__)   /__` |  | |__) |__) /  \\ |__)  |  | |\\ | / _`      /\\  |\\ | |  \\     /__`  |   /\\  \\ / \n"},
		{"\t |  |  | /~~\\ | \\| |  \\ .__/    |    \\__/ |  \\    |    |___ /~~\\  |  | | \\| \\__> ,  |  \\ |___ |___ |      .__/ \\__/ |    |    \\__/ |  \\  |  | | \\| \\__>     /~~\\ | \\| |__/     .__/  |  /~~\\  |   \n"},
		{"\n\t\t\t\t\t\t      ___            ___  __      ___  __   __           __   __   ___           __   __       ___  ___  __  \n"},
		{"\t\t\t\t\t\t       |  |  | |\\ | |__  |  \\    |__  /  \\ |__)    |\\/| /  \\ |__) | __     |  | |__) |  \\  /\\   |  |__  /__`\n"},
		{"\t\t\t\t\t\t       |  \\__/ | \\| |___ |__/    |    \\__/ |  \\    |  | \\__/ |  \\ |___     \\__/ |    |__/ /~~\\  |  |___ .__/ \n"},
		{"\n\t\t\t          ___           ___       ___          __                    __           __     ___  ___  ___  __   ___      ___     __     ___  ___    __            ___     \n"},
		{"\t\t\t|  | |\\ |  |  | |        |  |__| |__  |\\ |    |__) |     /\\  \\ /    /  \\ |\\ |    |  \\ | |__  |__  |__  |__) | __ |\\ |  |     |  \\ | |__  |__  | /  ` |  | |     |  \\ / \n"},
		{"\t\t\t\\__/ | \\|  |  | |___     |  |  | |___ | \\|    |    |___ /~~\\  |     \\__/ | \\|    |__/ | |    |    |___ |  \\ |___ | \\|  |     |__/ | |    |    | \\__, \\__/ |___  |   | \n"},
		{"\n\n\t\t\t\t\t\t\t\t                                                                                                                      ......                      \n"},
		{"\t\t\t\t\t\t\t\t\t\t                                                                                                     ..,;;;,.                     \n"},
		{"\t\t\t\t\t\t\t\t\t\t                                                                                                      .;:cc:;'.                   \n"},
		{"\t\t\t\t\t\t\t\t\t\t                                                                                                      .;:cclc:;,..                \n"},
		{"\t\t\t\t\t\t\t\t\t\t                                                                                                      .;llooolc;;,..............''\n"},
		{"\t\t\t\t\t\t\t\t\t\t                                                                                                      .:dddoool:'..............,,'\n"},
		{"\t\t\t\t\t\t\t\t\t\t                                                                                                      .:olllcc;,'',:ll:'......,;::\n"},
		{"\t\t\t\t\t\t\t\t\t\t                                                                                                      ,olcc:;:::ldxOO0kl,,,,'.'',;\n"},
		{"\t\t\t\t\t\t\t\t\t\t                                                                                                      ;lccccclldxkOOO00Odc:;,,',,,\n"},
		{"\t\t\t\t\t\t\t\t\t\t                                                                                                     .,;;;::cooxkkOOOOO0Oxoc:;,;;,\n"},
		{"\t\t\t\t\t\t\t\t\t\t                                                                                                   ..,;'.....':oxkOOOOOOkxdlc:::;;\n"},
		{"\t\t\t\t\t\t\t\t\t\t                                                                                                  .'';:,.  ..';cdkkOOOOkdc,''..','\n"},
		{"\t\t\t\t\t\t\t\t\t\t                                                                                          ,dd'   .,.,;ccc:;;::codxkkOOOxc,......;,\n"},
		{"\t\t\t\t\t\t\t\t\t\t                                                                                         .xK0c. .;'':ldxOOOOOkxxdxxxkkkdcc:;'',;:c\n"},
		{"\t\t\t\t\t\t\t\t\t\t                                                                                     .;odOKKKl. ':,,codkOOOOO0kdodxxxxkOOOkdlcc:cd\n"},
		{"\t\t\t\t\t\t\t\t\t\t                                                                                   .:OXXKKOxkd. .cccdxxxxxkkkOxoldxddxO00K0Okolldx\n"},
		{"\t\t\t\t\t\t\t\t\t\t                                                                                  .lKX0OOxdoox: .cxkOOkxddxxxxxolloddxkOOOOOkxxxxk\n"},
		{"\t\t\t\t\t\t\t\t\t\t                                                                                  .OK0OOkdolodc..:OOOOkkxdddddollllodxxxxkkkxxxxxx\n"},
		{"\t\t\t\t\t\t\t\t\t\t                                                                                   l0OkxxdolooddldOOOOOOkkkxddooooooooddddddxxkkkk\n"},
		{"\t\t\t\t\t\t\t\t\t\t                                                                                   .;oxxdddoodxkO00OO0OOOOOkxxxxxxxddddddddxxkkkkk\n"},
		{"\t\t\t\t\t\t\t\t\t\t                                                                                      :OOkxxxxxkkkOOOOOOOOOOkxxdddddxxxdddddddoddd\n"},
		{"\t\t\t\t\t\t\t\t\t\t                                                                                      .oK0kkkkkkkkkkOkkkOOOOkkkxdddddddoollccc:;:c\n"},
		{"\t\t\t\t\t\t\t\t\t\t                                                                                       ;0KOOkkkkkkkkkkkkOOOkkkkkxxdddddlc:;;;'...'\n\t\t\t\t\t\t\t\t\t\t\t"}} ;
		
//gameOverScene
char gmover[7][150] =  {{"\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t        *******       **      ****     ****  ********     *******    **      **  ********  *******  \n"},
		{"\t\t\t\t\t\t\t      **      **     ****     ** **   ** **  **          **     **   **      **  **        **    ** \n"},
		{"\t\t\t\t\t\t\t     **             **  **    **  ** **  **  **         **       **  **      **  **        **    ** \n"},
		{"\t\t\t\t\t\t\t     **            **    **   **   ***   **  *******    **       **   **    **   *******   *******\n"},
		{"\t\t\t\t\t\t\t     **    *****  **********  **    *    **  **         **       **    **  **    **        **   **  \n"},
		{"\t\t\t\t\t\t\t      **      **  **      **  **         **  **          **     **      ****     **        **    ** \n"},
		{"\t\t\t\t\t\t\t       ********   **      **  **         **  ********     *******        **      ********  **     **\n"} };
		
char menuSelectionII[9][45] = { { "\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t   +-+-+-+ +-+-+-+-+-+\n"},
		{"\t\t\t\t\t\t\t\t\t\t\t           |T|R|Y| |A|G|A|I|N|\n" },
		{ "\t\t\t\t\t\t\t\t\t\t\t\t   +-+-+-+ +-+-+-+-+-+\n\n\n"},
		{ "\t\t\t\t\t\t\t\t\t\t\t\t   +-+-+-+-+ +-+-+-+-+\n"},
		{ "\t\t\t\t\t\t\t\t\t\t \t           |M|A|I|N| |M|E|N|U|\n"},
		{ "\t\t\t\t\t\t\t\t\t\t\t\t   +-+-+-+-+ +-+-+-+-+\n\n\n"},
		{ "\t\t\t\t\t\t\t\t\t\t\t \t        +-+-+-+-+\n"},
		{ "\t\t\t\t\t\t\t\t\t\t\t                |E|X|I|T|\n"},
		{"\t\t\t\t\t\t\t\t\t\t\t \t        +-+-+-+-+\n\n\n\n\n"}, };		
		
//healthScene
char heartSymbolOne[14][33] = { {"       ******       ******\n"},//2D heart array
		{"     **********   **********\n"},
		{"   ************* *************\n"},
		{"  *****************************\n"},
		{"  *****************************\n"},
		{"  *****************************\n"},
		{"   ***************************\n"},
		{"     ***********************\n"},
		{"       *******************\n"},
		{"         ***************\n"},
		{"           ***********\n"},
		{"             *******\n"},
		{"               ***\n"},
		{"                *\n"} };

char heartSymbolTwo[14][100] =  {{"\n\n\n\n\t\t\t\t\t\t\t\t\t     ******       ******                  ******       ******               \n"},
		{"\t\t\t\t\t\t\t\t\t   **********   **********              **********   **********   \n"},
		{"\t\t\t\t\t\t\t\t\t ************* *************          ************* ************* \n"},
		{"\t\t\t\t\t\t\t\t\t*****************************        *****************************\n"},
		{"\t\t\t\t\t\t\t\t\t*****************************        *****************************\n"},
		{"\t\t\t\t\t\t\t\t\t*****************************        *****************************\n"},
		{"\t\t\t\t\t\t\t\t\t ***************************          *************************** \n"},
		{"\t\t\t\t\t\t\t\t\t   ***********************              ***********************   \n"},
		{"\t\t\t\t\t\t\t\t\t     *******************                  *******************     \n"},
		{"\t\t\t\t\t\t\t\t\t       ***************                      ***************       \n"},
		{"\t\t\t\t\t\t\t\t\t         ***********                          ***********         \n"},
		{"\t\t\t\t\t\t\t\t\t           *******                              *******           \n"},
		{"\t\t\t\t\t\t\t\t\t             ***                                  ***             \n"},
		{"\t\t\t\t\t\t\t\t\t              *                                    *              \n"} };
			
			

		
