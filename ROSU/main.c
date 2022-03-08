#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{	

	printf("\n************************************************************************************************************************");
	printf("\t\t\t\t---D.O.F.T. RASTGELE OYUN SECIM UYGULAMASINA HOSGELDINIZ---\n");
	printf("************************************************************************************************************************\n\n");
	printf("Uygulamamizdaki oyunlar arasindan secim yapmak icin 1'i tuslayiniz.\n\n");
	printf("Ben kendi oyunlarimi getirdim diyenlerdenseniz 2'yi tuslayarak devam ediniz.\n\n");
	int  i , k , j;
	char temp , t , o;
	don:printf("Seciminiz:");
	scanf("%s" , &temp);
	if(temp == '1'){
		char gameList[100][80] = {"The Walking Dead-Telltale Games" , "Borderlands" , "Alien: Isolation" , "Assassins Creed Syndicate" , "Batman Arkham Trilogy" , "Brothers- A tale of Two Sons" , "Darksiders Trilogy" , "Frostpunk" , "Godfall" , "Heavy Rain" ,"Hitman" , "Inside" , "Just Cause" , "Loop Hero" , "Mafia 1-2" , "Metro 2033" , "Metro Last Light" , "Nioh" , "Overcooked 1-2" , "Pillars of Eternity" ,"Prey" , "Rage 2" , "Rayman Legends" , "Remnant From the Ashes" , "Tomb Raider Trilogy" , "Saints Row The Third" , "Salt and Sanctuary" , "Shenmue 3" , "Sherlock Holmes Crimes&Punishments" , "Stranded Deep" ,"Surviving Mars" , "The Long Dark" , "The Lion's Song" , "The Messenger" , "The Wolf Among Us" , "Vampyr" , "Watch Dogs 1-2" , "BioShock 1-2" , "Bully" , "Deus Ex: Mankind Divided" ,"The Elder Scrolls V: Skyrim" , "Game Dev Tycoon" , "GTA: Vice City" , "Graveyard Keeper" , "Hades" , "Hellblade: Senua's Sacrifice" , "Hollow Knight" , "Max Payne 1-2" , "Middle Earth: Shadow of War" , "Murdered: Soul Suspect" ,"Outlast" , "Papers, Please" , "Portal 1-2" , "Raft" , "Ranch Simulator" , "Ronin: Two Souls" , "Saints Row IV" , "Saints Row: Gat out of Hell" , "Sleeping Dogs" , "Sniper: Ghost Warrior Trilogy" ,"Startup Company" , "Suicide Guy" , "Thief" , "This War of Mine" , "Timberborn" , "Uruz" , "Yakuza 0" , "Witcher 2-3" , "Call of Juarez Gunslinger" , "Disco Elysium" ,"Late Shift" , "Life is Strange" , "Sherlock Holmes: The Devil's Daughter" , "Farcry 5" , "Assassin's Creed 2" , "Assassin's Creed Brotherhood" , "Assassin's Creed Revelations" , "Assassin's Creed 3" , "Assassin's Creed Unity" , "Assassin's Creed Valhalla" ,"Farcry 3" , "Farcry New Dawn" , "Battlefield 4" , "Battlefield 1" , "Battlefield V" , "Dragon Age Inquisition" , "Mount and Blade 2: Bannerlord" , "Liberated" , "Batman TellTale"};
		burasi:srand (time( NULL ));
		k = rand() % 89;
		printf("Sansli sayin %d\nYani Oynaman Gereken Oyun: %s\n\n", k+1 ,gameList[k]);
		printf("Oynadiysan baska bir oyun secmek icin 5 tusuna nazikce tikla.\nEger oynamadiysan siddetle 4 tusuna basip uygulamayi kapatabilirsin.\nSeciminiz:");
		scanf("%s" , &t);
			if(t == '5'){
				goto burasi;
			}else if(t == '4'){
				printf("Beni kullandigin icin tesekkurler. Artik bir kenara atip unutabilirsin. Tipki eski sevgilim gibi.");
				getch();
			}else{
				printf("Kandirdim enai. 5 disinda herhangi bir tusa basinca uygulama kapaniyordu zaten.");
				getch();
			}
	}
	else if(temp == '2'){
		printf("\nOyun Listenizde Kac Oyun Var?\nSayi olarak giriniz:");
		scanf("%d" , &j);
		if(j == 1){
			printf("Dalga mi geciyorsun canim?");
			getch();
		}else{
		char gameList2[j][80];
		for (i=1; i <= j; i++)
		{
		printf ("%d. oyunu giriniz:" , i);
		scanf ("%s", gameList2[i]);
		}
		srand (time( NULL ));
		k = rand() % j+1;
		printf("Sansli sayin %d\nYani Oynaman Gereken Oyun: %s", k ,gameList2[k]);
		getch();}
	}
	else{
		printf("Yanlis tusa bastin enai\nTekrar dene!\n");
		goto don;
	}

return 0;
}
