#include <iostream>
#include <cmath>
using namespace std;
int main(){
		int scelta;
		cout<<"Benvenuto nel D-GAME."<<endl;
		cout<<"Inserire la parola chiave per poter passare.";
		cin>>scelta;
		if (scelta==2005)
				{
					cout<<"Possiamo iniziare."<<endl;
					int game;
					cout<<"Scegliere un game."<<endl;
					cout<<"I game vanno dal numero 0 al numero 21."<<endl; 
					cin>>game;
					if (game==0)/*I numeri dal 0 al 9 sono di squadra*/
					{
						cout<<"Game n°0"<<endl;
						cout<<"Nome del game : the fool"<<endl;
						cout<<"Regole : siete una squadra, ogni partecipante dovrà collaborare per decodificare la propria parte di messaggio."<<endl;
						cout<<"DECODIFICA : USARE CODIFICA SEMPLICE."<<endl;
					}
					if (game==1)
					{
						cout<<"Game n°1"<<endl;
						cout<<"Nome del game : the magician"<<endl;
						cout<<"Regole : vi verrà data un indirizzo ip, avrete 5 ore per ottenere almeno 7 informazioni corrette sul dispositivo."<<endl;
						cout<<"TRUCCO : l'informazione dell'ip in sé costituisce una informazione corretta."<<endl;
					}
					if (game==2)
					{
						cout<<"Game n°2"<<endl;
						cout<<"Nome del game : the high priestess"<<endl;
						cout<<"Regole del game : la squadrà affronterà una serie di 5 domande, per ogni risposta corretta avranno 5 punti."<<endl;
						cout<<"All'inizio avrete 15 punti"<<endl;
						cout<<"Per ogni risposta inesatta toglieremo 5 punti."<<endl;
						cout<<"Ogni giocatore che arriva a 0 otterrà un game over."<<endl;
						cout<<"Per ogni game over gli altri giocatori riceveranno 5 punti."<<endl;
						cout<<"Il punteggio da raggiungere è 50."<<endl;
						cout<<"Nel caso dopo le 4 domande nessuno dei presenti ha raggiunto il punteggio di 50 si proseguirà ad oltranza."<<endl;
						cout<<"TRUCCO : i giocatori potranno cercare di raggiungere il livello 50 normalmente oppure eliminando un altro giocatore."<<endl;
					}
					if (game==3)
					{
						cout<<"Game n°3"<<endl;
						cout<<"Nome del game : the empress"<<endl;
						cout<<"Regolen del game : tra di voi vi è l'imperatrice."<<endl;
						cout<<"Dovrete eleggere l'imperatrice."<<endl;
						cout<<"L'imperatrice dovrà amministrare i soldi in modo tale da creare 3 classi iniziali."<<endl;
						cout<<"I soldi iniziali saranno 200."<<endl;
						cout<<"Le classi sono quella povera da 0 a 40, quella benestante da 50 a 60 e quella ricca da 70 a 100."<<endl;
						cout<<"Creare almeno 2 poveri, 2 benestanti e 2 ricchi."<<endl;
						cout<<"Se restano dei soldi quelli andranno all'imperatrice."<<endl;
						cout<<"L'imperatrice dovrà trasferire i soldi dei giocatori tra di loro in modo da rendere poveri i ricchi e viceversa."<<endl;
						cout<<"Il denaro dell'imperatrice non potrà essere usato."<<endl;
						cout<<"Ogni giocatore può solo dare o ricevere per ogni turno, non potrà sia dare che ricevere."<<endl;
						cout<<"La massima somma di trasferimento è di 40, i turni di gioco sono 3."<<endl;
						cout<<"Se i poveri superano i 2 sarà game over, se i ricchi superano i 2 sarà game over."<<endl;
					}
					if (game==4)
					{
						cout<<"Game n°4"<<endl;
						cout<<"Nome del game : the emperor"<<endl;
						cout<<"Regole del game : tra di voi si nasconde un regicida ed un imperatore."<<endl;
						cout<<"Il turno è in 3 fasi : mattina, pomeriggio e sera."<<endl;
						cout<<"Di mattina potrete parlare tra di voi, di pomeriggio potrete seguire qualcuno e se siete il regicida potrete decidere di uccidere."<<endl;
						cout<<"Di sera potrete votare per decidere chi è il regicida."<<endl;
						cout<<"Ogni voto normale conta 1"<<endl;
						cout<<"Il voto dell'imperatore e del regicida contano 2"<<endl;
					}
					if (game==5)
					{
						cout<<"Game n°5"<<endl;
						cout<<"Nome del game : the hierophant"<<endl;
						cout<<"Regole del game : uno di voi è il capo della setta."<<endl;
						cout<<"Gli altri saranno i seguaci e ci sarà un infedele."<<endl;
						cout<<"Il capo della setta può decidere chi eliminare ad ogni turno."<<endl;
						cout<<"Azioni : i seguaci potranno scegliere di seguire un giocatore oppure di pregare."<<endl;
						cout<<"Il capo della setta non può pregare."<<endl;
						cout<<"Mentre pregano saranno al sicuro, ma potranno pregare solo 1 volta su 5 turni."<<endl;
						cout<<"L'infedele non può pregare."<<endl;
						cout<<"Verrà comunicato pubblicamente il numero di persone che stavano pregando."<<endl;
						cout<<"Se seguirete qualcuno che prega usarete la vostra unica azione di preghiera."<<endl;
						cout<<"Il capo religioso soltanto 1 volta potrà decidere di nascondere un seguace in modo tale che sia al sicuro per quel turno."<<endl;
						cout<<"Se il capo religioso muore è game over per tutti i seguaci."<<endl;
						cout<<"Se l'infedele muore allora tutti i seguaci vivi avranno vinto."<<endl;
					}
					if (game==6)
					{
						cout<<"Game n°6"<<endl;
						cout<<"Nome del game : the lovers"<<endl;
						cout<<"Regole del game : ognuno di voi è innamorato di un altro giocatore."<<endl;
						cout<<"Non potete dire direttamente chi amate."<<endl;
						cout<<"Dovrete dire pubblicamente secondo voi chi ama chi, ma solo una coppia per volta."<<endl;
						cout<<"1 sola volta su 3 turni potrete ricevere una informazione certa.";
						cout<<"L'informazione resterà bera se sarete i primi a chiederla su quella persona."<<endl;
						cout<<"Chi dichiare un innamoramento sbagliato muore."<<endl;
						cout<<"Vince chi dichiarerà 3 innamoramenti giusti"<<endl;
					}
					if (game==7)
					{
						cout<<"Game n°7"<<endl;
						cout<<"Nome del game : the chariot"<<endl;
						cout<<"Regole del game : avrete 10 link, solo 2 di questi sono link sicuri."<<endl;
						cout<<"I giocatori avranno 5 minuti di tempo per verificare i link e dare una risposta."<<endl;
					}
					if (game==8)
					{
						cout<<"Game n°8"<<endl;
						cout<<"Nome del game : strenght"<<endl;
						cout<<"Regole del game : Vi sarà dato un bersaglio da doxxare."<<endl;
						cout<<"Avrete 5 minuti per trovare almeno 6 informazioni valide."<<endl;
						
					}
					if (game==9)
					{
						cout<<"Game n°9"<<endl;
						cout<<"Nome del game the hermit"<<endl;
						cout<<"Regole del game : l'eremita si nasconde tra di voi."<<endl;
						cout<<"L'obiettivo dei giocatori è decodificare con successo 4 codici."<<endl;
						cout<<"Ad ognuno di voi verrà dato un codice singolarmente."<<endl;
						cout<<"L'eremita dovrà ottenere almeno due codici dagli altri per poter risolvere il suo."<<endl;
						cout<<"Se l'eremita non decodifica il suo codice avrete vinto altrimenti per voi sarà game over."<<endl;
					}
					if (game==10)/*I numeri dal 10 al 15 sono di psicologia*/
					{
						cout<<"Game n°10"<<endl;
						cout<<"Nome del game : the wheel of fortune"<<endl;
						cout<<"Vi dividerete in coppie, scegliete un compagno."<<endl;
						cout<<"Bene, dovrete giocare alla roulette russa quindi sarà una questione di fortuna."<<endl;
						cout<<"I vincitori andranno a scontrarsi fino a quando non ne resterà uno solo"<<endl;
					}
					if (game==11)
					{
						cout<<"Game n°11"<<endl;
						cout<<"Nome del game : Justice"<<endl;
						cout<<"Regole del game : Vi verranno dati 50 nomi, avrete circa 5 minuti per identificarli."<<endl;
						cout<<"15 di loro sono innocenti, 5 non esistono."<<endl;
						cout<<"Avrete 5 minuti per farlo."<<endl;
						cout<<"Ogni persona innocente vi costerà 5 punti, ogni criminale vi darà 5 punti."<<endl;
						cout<<"Nominare una persona che non esiste vi costerà 10 punti."<<endl;
						cout<<"Per vincere dovrete ottenere 40 punti."<<endl;
					}
					if (game==12)
					{
						cout<<"Game n°12"<<endl;
						cout<<"Nome del game : the hanged man"<<endl;
						cout<<"Regole del game : giocherete all'impiccato."<<endl;
						cout<<"Eppure per ogni lettera sbagliata o per ogni proposta di parola sbagliata uno di voi sarà eliminato."<<endl;
						cout<<"Se nemmeno l'ultimo giocatore dirà la parola esatta allora sarà game over."<<endl;
					}
					if (game==13)
					{
						cout<<"Game n°13"<<endl;
						cout<<"Nome del game : Santa Muerte"<<endl;
						cout<<"Regole del game : La Santa Muerte ha deciso di darvi la conoscenza."<<endl;
						cout<<"Ognuno di voi ha a disposizione 5 link personali, ma solo 2 hanno una informazione importante e coerente."<<endl;
						cout<<"Dovrete ottenere dagli altri almeno 3 link giusti, se più di 2 persone hanno 3 link giusti sarà game over per tutti."<<endl;
					}
					if (game==14)
					{
						cout<<"Game n°14"<<endl;
						cout<<"Nome del game : temperance"<<endl;
						cout<<"Regole del game : Dovrete scegliere una persona sola tra di voi, colui che vi sembra avere più memoria."<<endl;
						cout<<"Avrà circa 30 minuti per raggiungere il punteggio di 120 su indefinite iterrogation."<<endl;
						cout<<"Se entro 30 minuti non è capace di mostrare quel risultato allora sarà game over."<<endl;
					}
					if (game==15)
					{
						cout<<"Game n°15"<<endl;
						cout<<"Nome del game : the devil"<<endl;
						cout<<"Regole del game : avrete circa 12 ore per eseguire i seguenti compiti."<<endl;
						cout<<"Ottenere il totale controllo su una community che non sia vostra."<<endl;
						cout<<"1) Ottenere i segreti sui founder."<<endl;
						cout<<"2) Fare in modo che tutti gli admin vi obbediscano."<<endl;
						cout<<"3) Fare in modo che gli utenti che parlano di più vi rispettino."<<endl;
						cout<<"Se entro le 12 ore non avrete soddisfatto le seguenti condizioni allora sarà game over."<<endl;
					}
					if (game==16)/*I numeri dal 16 al 21 sono di sopravvivenza*/
					{
						cout<<"Game n°16"<<endl;
						cout<<"Nome del game : the tower"<<endl;
						cout<<"Regole del game : siete intrappolati nella torre, dovete raggiungere l'uscita entro il tempo limite."<<endl;
						cout<<"Ogni stanza ha minimo 2 porte per un massimo di 3."<<endl;
						cout<<"Dovete scegliere quale porta aprire, ma quando ne aprirete tutte le altre si chiuderanno."<<endl;
						cout<<"Il piano possiede solo una uscita, potete decidere di dividervi."<<endl;
						cout<<"THE TOWER"<<endl;
						cout<<"**************************************"<<endl;
						cout<<"*       *       *       *      *		*"<<endl;
						cout<<"*   1   A   2   A   3   C      *		*"<<endl;
						cout<<"*       *       *       *      *		*"<<endl;
						cout<<"***B********B*******B*****************"<<endl;
						cout<<"*       *       *       *      *		*"<<endl;
						cout<<"*       *       A  4    C      *		*"<<endl;
						cout<<"********************B*****************"<<endl;
						cout<<"*               *       *       		*"<<endl;
						cout<<"*               A  5    C       		*"<<endl;
						cout<<"********************B*****************"<<endl;
						cout<<"*               *       *       		*"<<endl;
						cout<<"*               A  6    C       		*"<<endl;
						cout<<"*               *       *       		*"<<endl;
						cout<<"*               ****B****       		*"<<endl;
						cout<<"*               B   7   A       		*"<<endl;
						cout<<"*               ****C****       		*"<<endl;
						cout<<"*               *       *       		*"<<endl;
						cout<<"*               A   8   C       		*"<<endl;
						cout<<"********************B*****************"<<endl;
					}
					if (game==17)
					{
						cout<<"Game n°17"<<endl;
						cout<<"Nome del game : the star"<<endl;
						cout<<"Regole del game : inizierete con 20 punti, l'obiettivo è far arrivare a zero tutti gli altri."<<endl;
						cout<<"Giocherete a poker, ma scommetterete i vostri punti."<<endl;
						cout<<"Il pagamento per vedere normalmente sarà di un punto."<<endl;
						cout<<"Chi raggiunge zero punti otterrà un game over."<<endl;
						cout<<"Vince l'ultimo rimasto."<<endl;
					}
					if (game==18)
					{
						cout<<"Game n°18"<<endl;
						cout<<"Nome del game : the moon"<<endl;
						cout<<"Regole del game : Ognuno di voi dovrà scegliere 2 ragazze."<<endl;
						cout<<"Gli altri giocatori dovranno sedurle fino a farle innamorare di sè stessi."<<endl;
						cout<<"La prova di ciò saranno : A) 2 chiamate lunghe almeno 1 ora ciascuna. {10 punti ciascuna}"<<endl;
						cout<<"B) Una dedica. {5 punti}"<<endl;
						cout<<"C) Avere accesso ai suoi segreti. {15 punti}"<<endl;
						cout<<"Tempo a disposizione 2 ore."<<endl;
						cout<<"Punteggio da raggiungere : 40 punti."<<endl;
					}
					if (game==19)
					{
						cout<<"Game n°19"<<endl;
						cout<<"Nome del game : the sun"<<endl;
						cout<<"Regole del game : il sole sta per sorgere e voi non potete sopportarne la luce."<<endl;
						cout<<"L'obiettivo è raggiungere la caverna entro 5 minuti per poi dire la parola d'ordine per poter restare."<<endl;
						cout<<"Chi sarà fuori dalla caverna allo scadere del tempo avrà perso."<<endl;

					}
					if (game==20)
					{
						cout<<"Game n°20"<<endl;
						cout<<"Nome del game : the judgement"<<endl;
						cout<<"Regole del game : il giudizio si sta abbattendo su di voi."<<endl;
						cout<<"Il giudice vi sottoporrà a 10 quesiti di cui dovrete trovare la risposta entro 2 ore."<<endl;
						cout<<"Se non riuscirete a dare una risposta a tutti e 10 i quesiti sarà game over."<<endl;
					}
					if (game==21)
					{
						cout<<"Game n°21"<<endl;
						cout<<"Nome del game : the world"<<endl;
						cout<<"Regole del game : congratulazioni, siete arrivati al livello finale."<<endl;
						cout<<"Avrete 24 ore di tempo per entrare in un sito e ottenere quanti più dati possibili."<<endl;
						cout<<"Il sito sarà protetto da un giocatore che dovrà ostacolare tutti gli altri e farli fallire."<<endl;
						cout<<"Il come exploitare il sito è solo affar vostro."<<endl;
						cout<<"Se entro le 24 ore non avrete ottenuto il file nascosto allora sarà game over."<<endl;
						cout<<"Se i giocatori non ottengono il file, l'impostore avrà vinto."<<endl;
					}
				}
		else{
			cout<<"Non sei adatto."<<endl;
		}
	return 0;		
}
