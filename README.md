# Legend of Hondo
A unique single player Star Wars experience, based on SWGEmu and Star Wars Galaxies. Enjoy a player centric world where your characters are members of a pirate gang based out of Mos Espa, Tatooine. Adventure on Dantooine, Dathomir, Endor, Lok, and Tatooine, with your band of 10 pirates and their supporting NPC community!

Due to the single player nature of this game, it's significantly different than normal SWG and as a result, I absolutely DO NOT recomend using LoH as the base for a multi-player server. 

Legend of Hondo has heavily modified functionality to combat, housing, and other systems that I am sure many die hard SWG fans will utterly despise, but more importantly, some functionality absolutely WILL cause issues in a multiplayer environment. I don't care, because this is a single player game, but as a server admin, you will care when the complaints start rolling in! 

It must be kept in mind that Legend of Hondo is not intended to be a "live" or "production" SWGEmu sever. Not at all. It's simply a personal project I am doing for the sake of doing so and sharing for the sake of helping those who may want to modify their own servers. Therefore, should you choose to use any of the code in this repo for any purpose, you do so entirely at your own risk and with absolutely no suggested or implied warranty or support from R. Bassett Jr. (Tatwi). That said, you're welcome to use any code or concepts you find here in your own projects - that's why this repo is here! There's lots of stuff in here that can, at the very least, give you an idea of how you could do something similar on your own server.

This is a project I started back in 2014 for something creative to enjoy on my own. The initial code base for the current repo was pulled from the unstable branch of the SWGEmu Gerrit in June, 2015, when I restarted the project. I am going to use this code base until the SWGEmu project reaches its 1.0 release, at which point I will start working on Legend of Hondo 2 that will be based on SWGEmu 1.0.


# Design Points

As I stated in the begining, Legend of Hondo is a single player experience. As such, most of the changes to SWG that I am making revolve around making SWG work as open world, single player RPG. Have a peak into the LoH_Features_Log file for a run through of what I have completed. My To_Do_List contains stuff that I thought of doing in the future, some of which will most likely change as I learn from what I have already accomplished. I have tried organized most customizations into "Features" so that it's easier for others who come later to understand the changes I made, in case they want to do something similar on their own server. I try to keep the commit history as sensible and as well documented as I can!

I decided that it would be better to have a smaller amount of planets that are full of "stuff to do", than it would be to have a bunch of pretty much useless planets, becuase I don't have time fill them all with fun stuff. The narative of the game is that your characters are the leaders of a pirate gang who moved from Lok to Tatooine and made themselves a new home. They still have friendly ties to Nym, so they're welcome on Lok. I chose Endor, Dantooine, and Dathomir, because they each have a unique feel and there aren't ton of NPC cities that I couldn't hope to have time to make interesting. I might add Rori down the road, because I like its ambiance and I can probably make Narmle and Restuss more interesting.

About Jedi: There aren't any. Personally, I never cared about Jedi in SWG, not even in the NGE when you could start as one. The SWG Jedi stuff just doesn't appeal to me and I don't see a need for them in the Legend of Hondo narative. That said, I will most likely make use of the Jedi, Sith, and Force sensitive lore in some quests, because some of that stuff is interesting. Force sensitivity as a game play mechanic tended to simply be a way to make the game easier, "because The Force!", rather than making the game more interesting, therefore I have no desire to do anything of the sort. I might let people find a lightsaber and play around with it, but I am not going to add anything that gives the player bonuses or makes them into a Jedi or Sith. Of course, that doesn't mean that the player won't encounter force users in their travels.

At the end of the day, Legend of Hondo is a project designed for me. Absolutely no effort is being made to make anyone else happy.  


# Requirements

To use this project you NEED:

1. A valid copy of the Star Wars Galaxies client, which one can usually find on Ebay or Amazon.
2. Some understanding of how use Virtualbox, MySQL workbench, Lua scripting, and general experience using GNU/Linux. Once it's setup, you really only need to type a couple commands to make it go.
3. The ability to research solutions and guides by searching the internet. I'm not being cheeky here - even though I have used Linux since 1998 I still look things up all the time, because I just can't know or remember everything! 

Instructions and scripts for building a server VM from scratch:
https://github.com/Scurby/deb7

Or you can download a public version of my VM here:
https://mega.nz/#F!aIMA2Zzb!XXX-fVi5B8iU05NyNVo56A

My VM is compressed with 7zip and split into 700mb chunks, so just download the three parts and open the first one with 7zip and it will unzip them. There is a readme file included, but if you need help with setting up the VM itself, just web search how to setup a VirtualBox VM, because there are lots of guides out there. I configured git for public use on it, so it can pull in the most recent version with "git pull". Then build it with "build". Then run it with "gohondo". 

If you want to further develop Legend of Hondo on your own, then fork this repo and follow these steps:

1. Remove the "origin" that points to gitub.com/tatwi/legend-of-hondo and replace it with yours.
https://git-scm.com/book/en/v2/Git-Basics-Working-with-Remotes
2. Change the git username and password and setup an SSH key with github.
https://help.github.com/articles/set-up-git/
3. Now that you have your own project setup, you can merge in any changes I make to my git repo and you can easily manage any changes you make to your own git repo.

I wish it was easier to use Legend of Hondo (and SWG in general), but game client needs a server to bring it to life. That's just the way it was made and we work with what we're given, right? :)

LoH only uses 5 of the 10 planets (I may add another later) in SWG and it is intended for only a single person to use. Therefore the server system requirements are quite low. Compiling the software in a virtual machine with 4 cores of my 3.5GHz AMD FX-8230 is about 2.5 times faster than compiling on my 1.8GHz dual core AMD Turion64x2 laptop. GCC loves integer cores! Running the server only requires about 1.5GB of RAM and it seems happy enough to live on a dual core system or virtual machine. Here is what I have used in the past as  dedicated server hardware,

Server (Frankenputer):
- Physical remains of a Dell Inspiron 1501 laptop, with custom desktop heatsink/fan.
- Debian 7 Wheezy 64Bit
- 1.8GHz AMD Turion64x2 CPU
- 2.5GB DDR2 RAM
- 80GB 5400RPM Toshiba hard drive

I do all of my development work in a Linux virtual machine, with a Window 7 host, because both the game client and several SWG tools function properly only in Windows. Virtualbox makes the whole thing quite seemless and enjoyable. 

Workspace:
- Virtualbox VM running Debian 7 Wheezy 64Bit
- 4 Cores, 3GB RAM allocated
- AMD FX-8320 CPU
- 8GB virtual hard drive
- XFCE desktop, Geany programming editor

That said, I really don't think it makes a lot of sense to run a server 24/7/365 just so that the game world of a single player game can observe the passage of time. It's, if nothing else, a waste of electricity. With this in mind, I am making changes that reduce the impact of turning the server off for extended periods of time. When the server boots, it will apply the passage of time to a degree, but not to the point where all your buildings blow up and you lose all your stuff, etc. Games are supposed to be fun, right? :)


# Roleplay Introduction

Instead, LoH begins the tale of a fledgling pirate gang in a galaxy of mystery, wonder, and conflict. 
 
You start your adventures at your home base of Mos Espa, Tatooine. Through your younger years, growing up in Nym's Hovel on the planet Lok, you were inspired by the tales you heard of Hondo Ohnaka, the renown pirate from Florrum who enjoyed many adventures during the Clone Wars. 
 
One day, after being picked up by the Empire and dumped on Tatooine as a "refugee" (which is Imperial for, "anyone we've messed with and we don't want to hear from again") while you were on a perfectly legitimate trip to tour the cities of Naboo, you decided that you had to stop coasting through life. You had to build a name for yourself. Sure, Nym knew you by name and all, but you weren't ranked high in his order. Anyone could mess with you, Empire, Rebellion, Jabba the Hutt... it didn't matter. Ultimately, as respected as you were, you were replaceable and not worth the risk to rescue. 
 
So, you called in some favors and gathered a small crew, a nice combination of life-long friends and general riff-raff, and set about procuring a ship. All pirates need a ship! After a few smaller heists on Tatooine, mostly Imperial supply runs, you and your crew managed to score the big time when you teamed up with an old friend for an off world caper. 
 
In an amusing twist of fate, you found a beat up old Incom X-4 Gunship buried in a swamp while you and your crew were lost on Yavin4 - after being double crossed by your former partner, of course. The ship's log indicated that it was being ferried to some rebel hideout for outfitting, but you're pretty sure it never made it, because apart from the mud and snakes it didn't look very lived in when you found it. In any case, it had long since been forgotten by its original owners, so you tidied it up and used its radio to call the mining outpost for some help. It's amazing how a handful of credits and a bottle of whiskey was enough to subdue any questions from the local forman and his crew, who made quick work of sucking YOUR ship out of the muck that day... 
 
So here you are, ready to start building your own pirate legacy. Let the adventures begin!



Enjoy, 

- Tatwi

Ps. I have included the additional files needed for some of these customizations in the tre folder. You can use Sytner's Iff Editor to repack the tre folder into a .tre file, then include that file on your client and server. Or you can download just the parts you want to use in your own projects.
