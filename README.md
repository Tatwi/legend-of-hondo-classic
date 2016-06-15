# Legend of Hondo
A unique single player Star Wars experience, based on SWGEmu and Star Wars Galaxies. Enjoy a player centric world where your characters are members of a pirate gang based out of Mos Entha, Tatooine. Adventure on Dantooine, Dathomir, Endor, Lok, and Tatooine, with your band of 10 pirates and their supporting NPC community!

Due to the single player nature of this game, it significantly different than normal SWG and as a result, I absolutely DO NOT recomend using LoH as the base for a multi-player server. It has heavily modified functionality to combat, housing, and other systems that I am sure many die hard SWG fans will utterly despise. Furthermore, some functionality absolutely WILL cause issues in a multiplayer environment, but I don't care, because this is a single player game! This is why it must be kept in mind that Legend of Hondo is not intended to be a "live" or "production" SWGEmu sever. Not at all. It's simply a personal project I am doing for the sake of doing so and sharing for the sake of helping those who may want to modify their own servers. Therefore, should you choose to use any of the code in this repo for any purpose, you do so entirely at your own risk and with absolutely no suggested or implied warranty or support from R. Bassett Jr. (Tatwi). That said, you're welcome to use any code or concepts you find here in your own projects - that's why this repo is here!

This is a project I started back in 2014 for something creative to enjoy on my own. The initial code base for the current repo was pulled from the unstable branch of the SWGEmu Gerrit in June, 2015, when I restarted the project. As of July 29th, 2015 I have completed all of the fundimental changes I wanted for basic game play. In the future I will be adding mostly story type content, molding the planets I am using into the pirate focused story I would like to tell. Though there are a few game mechanics I will add or expand on eventually as well.


# Design Points

Have a peak into the LoH_Features_Log file for what I have completed and a guideline of what I am likely to work on later. I have organized most customizations into "feature chunks" so they're easier for others who come later to understand than just browsing the repo.


# Requirements

To use this project you NEED:

1. To understand how to build a server environement that can compile and run the SWGEmu server. See https://github.com/scurby for how to do that.
2. A valid copy of the Star Wars Galaxies client, which one can usually find on Ebay.
3. Some understanding of how use Virtualbox or VMWare, MySQL workbench, Lua scripting, and general experience using GNU/Linux. 

LoH only uses 5 of the 10 planets in SWG and it is intended for only a single person to use. Therefore its system requirements are quite low. Compiling the software in a virtual machine with 4 cores of my 3.5GHz AMD FX-8230 is about 2.5 times faster than compiling on my 1.8GHz dual core AMD Turion64x2 laptop. GCC loves integer cores! Running the server only requires about 1.5GB of RAM and it seems happy enough to live on a dual core system or virtual machine. Here is what I use:

Server (Frankenputer):
- Physical remains of a Dell Inspiron 1501 laptop, with custom desktop heatsink/fan.
- Debian 7 Wheezy 64Bit
- 1.8GHz AMD Turion64x2 CPU
- 2.5GB DDR2 RAM
- 80GB 5400RPM Toshiba hard drive

Workspace:
- Virtualbox VM running Debian 7 Wheezy 64Bit
- 4 Cores, 3GB RAM allocated
- AMD FX-8320 CPU
- 8GB virtual hard drive
- XFCE desktop, Geany programming editor

I decided to use the Frankenputer as a server, because it saves electricity, as I don't need to run the server VM on my power sucking desktop machine all the time. It's really easy to use SSH, the screen command, and a simple shell script to keep the server running. I added a copy of my reboot script, loophondo, to the repo as an example for others. I also used xvnc and the Xfce desktop when I imported my SQL database using MySQL Workbench. So the whole server can be setup and run "headless" pretty easily if you are familiar with Linux. The server idles at 0-5% CPU usage. Server loading time from my workspace VM on my old OCZ SSD is around 80 seconds, but it is more like 4 minutes on the old Toshiba drive. Database saves seem to take only a few seconds on either drive type, but occassionally will take 10 - 15 seconds so best to give them a 1 minute window when scripting the save function to be safe. SQL backups are quick as well, because very little is stored in the SQL database. The MMOCoreORB/bin/databases/ directory contains all the actually in game server data and it can be backed up / restored by compressing it into tar.gz format or by putting it into a loopback ext3 or ext4 file system and mounting that system at the databases directory. I personally recommend the loopback method, as it kinda idiot proof - just copy and paste it to backup/restore it. Also, these Berkley Database files simply will NOT function if they are hosted on an NTFS partition. However, the TRE game files can live on an NTFS partition just fine (I use the same files for the client and serverVM by mounting the Windows shared folder in my VM - saves space on my tiny SSD!). Best of luck to ya!


# Roleplay Introduction

Instead, LoH begins the tale of a fledgling pirate, you, in a galaxy of mystery, wonder, and conflict. 
 
You start your adventures on Tatooine, as a member of Nyms gang of pirates. Through your younger years, growing up in Nym's Hovel on the planet Lok, you were inspired by the tales you heard of Hondo Ohnaka, the renown pirate from Florrum who enjoyed many adventures during the Clone Wars.  
 
One day, after being picked up by the Empire and dumped on Tatooine as a "refugee" (which is Imperial for, "anyone we've messed with and we don't want to hear from again") while you were on a perfectly legitimate trip to tour the cities of Naboo, you decided that you had to stop coasting through life. You had to build a name for yourself. Sure, Nym knew you by name and all, but you weren't ranked high in his order. Anyone could mess with you, Empire, Rebellion, Jabba the Hutt... it didn't matter. Ultimately, as respected as you were, you were replaceable and not worth the risk to rescue. 
 
So, you called in some favors and gathered a small crew, a nice combination of life-long friends and general riff-raff,  and set about procuring a ship. All pirates need a ship! After a few smaller heists on Tatooine, mostly Imperial supply runs, you and your crew managed to score the big time when you teamed up with an old friend for an off world caper. 
 
In an amusing twist of fate, you found a beat up old Incom X-4 Gunship buried in a swamp while you and your crew were lost Yavin4 - after being double crossed by your former partner, of course. The ship's log indicated that it was being ferried to some rebel hideout for outfitting, but you're pretty sure it never made it, because apart from the mud and snakes it didn't look very lived in when you found it. In any case, it had long since been forgotten by its original owners, so you tidied it up and used its radio to call the mining outpost for some help.  Pretty amazing how a handful of credits and a bottle of whiskey was enough to subdue any questions from the local forman and his crew, who made quick work of sucking YOUR ship out of the muck... 
 
So here you are, ready to start building your own pirate legacy. Let the adventures begin!



Enjoy, 

- Tatwi

Ps. I have included the additional files needed for some of these customizations in the tre folder. You can use Sytner's Iff Editor to repack the tre folder into a .tre file, then include that file on your client and server. Or you can download just the parts you want to use in your own projects.
