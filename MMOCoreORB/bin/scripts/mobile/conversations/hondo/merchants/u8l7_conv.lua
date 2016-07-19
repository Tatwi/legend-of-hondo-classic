-- Legend of Hondo Merchant System
-- By Tatwi www.tpot.ca 2015


u8l7_template = ConvoTemplate:new {
	initialScreen = "start",
	templateType = "Lua",
	luaClassHandler = "u8l7_convo_handler",
	screens = {}
}


u8l7_start = ConvoScreen:new {
  id = "start",
  leftDialog = "",
  customDialogText = "Hello, I am U8L7, Human - Cyborg relations. How may I be of assistance today?",
  stopConversation = "false",
  options = {
  	{"I need help.", "help"},
    {"I need some basic crafting equipment.", "shop"},
    {"Know where I can find a starter weapon?", "shop"},
    {"Hey! You dropped your pocket!", "nope"}
  }
}
u8l7_template:addScreen(u8l7_start);


u8l7_shop = ConvoScreen:new {
  id = "shop",
  leftDialog = "",
  customDialogText = "Indeed! The city supplies me with an endless amount of items people like yourself might find useful. Here is what I have available.",
  stopConversation = "false",
  options = { 
  }
}
u8l7_template:addScreen(u8l7_shop);


u8l7_confirm_purchase = ConvoScreen:new {
  id = "confirm_purchase",
  leftDialog = "",
  customDialogText = "Are you sure you would like to make this purchase?",
  stopConversation = "false",
  options = { 
  }
}
u8l7_template:addScreen(u8l7_confirm_purchase);


u8l7_bye = ConvoScreen:new {
  id = "bye",
  leftDialog = "",
  customDialogText = "Do take care of yourself.",
  stopConversation = "true",
  options = {
  }
}
u8l7_template:addScreen(u8l7_bye);


u8l7_nope = ConvoScreen:new {
  id = "nope",
  leftDialog = "",
  customDialogText = "Hmmm.... Head lamp fluid I can understand, but in this dusty environment it's a travesty that they're out of elbow grease! ***BZZZZRRRRP ERR...OR*** Sorry, were you talking?",
  stopConversation = "true",
  options = { 
  }
}
u8l7_template:addScreen(u8l7_nope);


u8l7_get_lost = ConvoScreen:new {
  id = "get_lost",
  leftDialog = "",
  customDialogText = "You've got some nerve showing your face around here!",
  stopConversation = "false",
  options = {
	{"Says the tin man.", "get_lost_reply"}
  }
}
u8l7_template:addScreen(u8l7_get_lost);

u8l7_get_lost_reply = ConvoScreen:new {
  id = "get_lost_reply",
  leftDialog = "",
  customDialogText = "Please don't make me contact the authorities.",
  stopConversation = "true",
  options = {
  }
}
u8l7_template:addScreen(u8l7_get_lost_reply);


u8l7_faction_too_low = ConvoScreen:new {
  id = "faction_too_low",
  leftDialog = "",
  customDialogText = "Sorry, but I don't trust you enough to do business with you.",
  stopConversation = "false",
  options = {
	{"I get that. I really do... Bye", "bye"}
  }
}
u8l7_template:addScreen(u8l7_faction_too_low);


u8l7_insufficient_funds = ConvoScreen:new {
  id = "insufficient_funds",
  leftDialog = "",
  customDialogText = "Sorry, but you do not have enough credits on hand to make this purchase.",
  stopConversation = "true",
  options = { 
  }
}
u8l7_template:addScreen(u8l7_insufficient_funds);


u8l7_help = ConvoScreen:new {
  id = "help",
  leftDialog = "",
  customDialogText = "What subject can I help you with?",
  stopConversation = "false",
  options = {
    {"What's the point of it all?", "help1"},
    {"Earning credits", "help2"},
    {"Buying Stuff", "help3"},
    {"Combat", "help4"},
    {"Crafting and Resources", "help5"},
    {"Housing", "help6"},
  }
}
u8l7_template:addScreen(u8l7_help);


u8l7_help1 = ConvoScreen:new {
  id = "help1",
  leftDialog = "",
  customDialogText = "Sir, you are leading a member of a group of adventuring entrepreneurs who recently relocated here from Lok. Your generousity and hard work has really made a positive impact here in Mos Espa. In fact, the crime rate has declined so much that the Imperial presence has dimimished significantly beyond their garrison on the ourskirts of town. You'll find many comforts and facilities are available to you here in Mos Espa. It's your home, after all.",
  stopConversation = "false",
  options = {
    {"But... what do I do?", "help1a"},
  }
}
u8l7_template:addScreen(u8l7_help1);


u8l7_help1a = ConvoScreen:new {
  id = "help1a",
  leftDialog = "",
  customDialogText = "Why, you work on becoming the most widly renoun and, possibly even infamous, pirate in the known galaxy, of course! At least that's what I have heard.",
  stopConversation = "false",
  options = {
    {"And how do I do that?", "help1b"},
  }
}
u8l7_template:addScreen(u8l7_help1a);


u8l7_help1b = ConvoScreen:new {
  id = "help1b",
  leftDialog = "",
  customDialogText = "Managing businesses, completing tasks, adventuring, and other such activities will increase your wealth and influence. Such things are often refered to as 'Renown'. You will also gain 'Infamy' by completing certain destroy missions, adventuring in dangerous locations, and completing some quests. Much of what you and your crew can do will help, in one way or another. Having higher Renown and Infamy is not only an indication of the type of pirate you've become, but it also changes the way people interact with you. In a way, it quantifies your own place in galactic history. Your own legend, if you will.",
  stopConversation = "false",
  options = {
    {"How does the business thing work?", "help1c"},
  }
}
u8l7_template:addScreen(u8l7_help1b);


u8l7_help1c = ConvoScreen:new {
  id = "help1c",
  leftDialog = "",
  customDialogText = "You're able to register as the owner of certain business, each for a substantial fee and most requiring the placement of expensive structures as well. Once you have a business, you will need to manage various aspects of its operation. With hard work and success, you will see healthy returns on your investments as well as a steady flow of Renown. Failure, I've heard, is considerably less rewarding.",
  stopConversation = "false",
  options = {
    {"Thanks. Can we start over?", "start"},
  }
}
u8l7_template:addScreen(u8l7_help1c);


u8l7_help2 = ConvoScreen:new {
  id = "help2",
  leftDialog = "",
  customDialogText = "Your primary source of income will likely be completing tasks that you pick up from the various types of mission terminals. By collecting the payout and selling items to the Junk Dealers, you'll earn a reasonable living. Should you or a crew member take up crafting, the Junk Dealers will also purchase any items you happen to craft. Additionally, you will find that there are many people who need help, but aren't familiar with putting their problems on mission terminals.",
  stopConversation = "false",
  options = {
    {"So... what about pirating?", "help2a"},
  }
}
u8l7_template:addScreen(u8l7_help2);


u8l7_help2a = ConvoScreen:new {
  id = "help2a",
  leftDialog = "",
  customDialogText = "Rumor has it that destroy missions terminals are sometimes 'sliced' by less than savory sorts who then inject nefarious missions to pillage known convoys. All manner of supplies can be found by completing these missions, anything from resources to canned ronto meat. Care should be taken when completing these types of missions, Sir. They can be deadly and will most certainly make you a more infamous person. However, along with Survey Missions, they will be your primary source of the resources used in crafting.",
  stopConversation = "false",
  options = {
    {"Any profit in joining the Empire or Rebellion?", "help2b"},
  }
}
u8l7_template:addScreen(u8l7_help2a);


u8l7_help2b = ConvoScreen:new {
  id = "help2b",
  leftDialog = "",
  customDialogText = "Absolutely, Sir. By choosing a side in the galactic civil war, you or your crew member will gain access to a host of helpful and profitable resources. Faction specific missions, adventures, battles, supplies, a free travel system, and combat support personel will be at your disposal. Do note that as your Infamy and Renown as a pirate increases, your ability to rise in the Rebel or Imperial ranks will be significantly dimished, as neither entity fully approve of such activities.",
  stopConversation = "false",
  options = {
    {"Thanks. Can we start over?", "start"},
  }
}
u8l7_template:addScreen(u8l7_help2b);


u8l7_help3 = ConvoScreen:new {
  id = "help3",
  leftDialog = "",
  customDialogText = "Here on Tatooine, particularly in Mos Espa, you will find many Merchants who are able to sell you all manner of useful objects. Mostly basic quality items, but useful none the less. For truly advanced equipment and suppiles you're best to work on teaching your crew to craft what you need. I should note that not all merchants will be happy to do business with you, while others may greatly favor you. It all depends on your standing with the various factions found throughout the galaxy.",
  stopConversation = "false",
  options = {
    {"I need a vehicle", "help3a"},
    {"I need a house", "help3b"},
    {"I need a weapon", "help3c"},
    {"I need some armor", "help3d"},
    {"I need medical supplies", "help3e"},
    {"Can I buy a pet?", "help3f"},
  }
}
u8l7_template:addScreen(u8l7_help3);


u8l7_help3a = ConvoScreen:new {
  id = "help3a",
  leftDialog = "",
  customDialogText = "Vehicle deeds can be purchased from Crazy Larry, who you will find here in Mos Espa at his garage. If you open your mini map and zoom out, you should see the garage behind me to the North East.",
  stopConversation = "false",
  options = {
    {"What else can I buy?", "help3"},
    {"Thanks. Can we start over?", "start"},
  }
}
u8l7_template:addScreen(u8l7_help3a);


u8l7_help3b = ConvoScreen:new {
  id = "help3b",
  leftDialog = "",
  customDialogText = "Houses, tents, and other such facilities are sold by merchants found all around Tatooine. For instance, that Jawa fellow over there rooting through the trash will likely have a tent to sell you. Similarly, Iken Wilyens in the crafter's guild hall has an assortment of Tatooine style homes. Other merchants you'll discover in your travels, usually through word of mouth.",
  stopConversation = "false",
  options = {
    {"What else can I buy?", "help3"},
    {"Thanks. Can we start over?", "start"},
  }
}
u8l7_template:addScreen(u8l7_help3b);


u8l7_help3c = ConvoScreen:new {
  id = "help3c",
  leftDialog = "",
  customDialogText = "If you're just starting out, I can sell you a basic weapon. However, if you're in need of a more advanced weapon, pop over to see Yivvits in the crafter's guild hall. I should tell you though that even a CDEF type weapon crafted by a Novice Artisan is much more effective than you would have previously experienced. If you're after the most powerful weapons, then I am afraid you'll have to either loot them or have someone on your crew craft them for you.",
  stopConversation = "false",
  options = {
    {"What else can I buy?", "help3"},
    {"Thanks. Can we start over?", "start"},
  }
}
u8l7_template:addScreen(u8l7_help3c);


u8l7_help3d = ConvoScreen:new {
  id = "help3d",
  leftDialog = "",
  customDialogText = "The local Armorsmith Trainer and his assistant Volrik usually have some basic armor sets for sale. While it's much better than you might expect, it's not as good as what you can earn by working for the Empire or the Rebelion. I've seen some of those Bounty Hunters who work for Jabba the Hutt wearing a special type of armor and heard the name 'Yaro'. That sort of thing doesn't mean much to a protocol droid like me, it all seems so far away. And frought with sand... In any event, armor as with most things, will need to be made by someone on your crew if it's going to be the best it can be.",
  stopConversation = "false",
  options = {
    {"What else can I buy?", "help3"},
    {"Thanks. Can we start over?", "start"},
  }
}
u8l7_template:addScreen(u8l7_help3d);


u8l7_help3e = ConvoScreen:new {
  id = "help3e",
  leftDialog = "",
  customDialogText = "Oh, I am afraid the Empire has really cracked down on stims and other such things. While you can obtain enhancements by using the Wound Terminal at any hospital on Tatooine, you're not likely to find any medical supplies for sale. Only licensed Medics and Doctors can make medicines and poisons these days. However, it is my understanding that learning to be a Medic is highly encouraged to ensure survival here in the harsh environment of Tatooine. You will find that medical training has improved considerably, along with the supplies you're able to craft.",
  stopConversation = "false",
  options = {
    {"What else can I buy?", "help3"},
    {"Thanks. Can we start over?", "start"},
  }
}
u8l7_template:addScreen(u8l7_help3e);


u8l7_help3f = ConvoScreen:new {
  id = "help3f",
  leftDialog = "",
  customDialogText = "Buy a pet? I don't believe so, Sir. However, if you join the Empire or the Rebellion you can most likely have some support personel assigned to you. That said, I guess have heard of some people stealing baby animals from the wild and training them, but that seems rather improbable to me. I'm more inclined to believe the stories of people engineering new animals in a lab. After all, I was designed and built by someone so it only makes sense that everything else would be too.",
  stopConversation = "false",
  options = {
    {"What else can I buy?", "help3"},
    {"Thanks. Can we start over?", "start"},
  }
}
u8l7_template:addScreen(u8l7_help3f);


u8l7_help4 = ConvoScreen:new {
  id = "help4",
  leftDialog = "",
  customDialogText = "Combat is similar to what you may have experience in other places, but it does have some more streamlined mechanics. Your main attributes as a living creature are Health, Action, and Mind. Each of those attributes has two components, one that controls efficiency and another that controls regeneration. When you equip armor, it negatively impacts your secondary attributes, but it does dramatically protect you from various types of damage. When you use attacks, your Action is consumed. When you take damage, your Health is lowered. Should all of your Health be depleted, you become incapacitated or die. To prevent death, while you're still mobile you may refule your Health and/or Action by using healing abilities that deplete your Mind. Attacks, both yours and those of others, will not deplete the Mind, however various actions have the chance to sap Action, as well as Health. Any questions?",
  stopConversation = "false",
  options = {
    {"What happens when I die?", "help4a"},
    {"Do I need a healer?", "help4b"},
    {"What about poisons?", "help4c"},
  }
}
u8l7_template:addScreen(u8l7_help4);


u8l7_help4a = ConvoScreen:new {
  id = "help4a",
  leftDialog = "",
  customDialogText = "Most likely you will be reborn as a clone, complete with all of your items that you had before you died. You may purchase insurance that will reduce the amount of damage your items will take when you die. It's all very strange, don't you think?",
  stopConversation = "false",
  options = {
    {"How does combat work again?", "help4"},
    {"Thanks. Can we start over?", "start"},
  }
}
u8l7_template:addScreen(u8l7_help4a);


u8l7_help4b = ConvoScreen:new {
  id = "help4b",
  leftDialog = "",
  customDialogText = "Everyone from the Empire to Jabba the Hutt's mother suggests learning, at the very least, some Medic skills so that you're able to look after yourself. Ideally, as a Master Medic you shouldn't need to rely on anyone else to keep you alive, even in the most dangerous of situations. However, you will most likely need bring more firepower, in the form of pets, droids, or other hired hands, to achieve your goals.",
  stopConversation = "false",
  options = {
    {"How does combat work again?", "help4"},
    {"Thanks. Can we start over?", "start"},
  }
}
u8l7_template:addScreen(u8l7_help4b);


u8l7_help4c = ConvoScreen:new {
  id = "help4c",
  leftDialog = "",
  customDialogText = "Indeed, I had quite forgotten for a moment that your kind is suseptiable to such ailments. Yes, in your adventures you might encounter poisons, diseases, and other horrors that slowly degrade your biological systems over time. It's recomended that you learn how to deal with such problems through basic medical training and ensure that you keep the relivant supplies on hand at all times.",
  stopConversation = "false",
  options = {
    {"How does combat work again?", "help4"},
    {"Thanks. Can we start over?", "start"},
  }
}
u8l7_template:addScreen(u8l7_help4c);


u8l7_help5 = ConvoScreen:new {
  id = "help5",
  leftDialog = "",
  customDialogText = "As you would expect, you may learn how to craft many things by becoming an Artisan and branching out into more specialized roles. You will note that some professions are different than you rememeber them. Trust that they have been designed to ensure they are both fun and useful, while also being rewarding at all levels. Speaking of rewards, you may gain items while crafting and should you choose explicitly to practice, you will gain significant amounts of extra knowledge.",
  stopConversation = "false",
  options = {
    {"How do I get resources?", "help5a"},
    {"Can I sell things I make?", "help5b"},
  }
}
u8l7_template:addScreen(u8l7_help5);


u8l7_help5a = ConvoScreen:new {
  id = "help5a",
  leftDialog = "",
  customDialogText = "There are three primary sources of resources you will find available to you. The first is by completing survey missions from the Artisan Mission Terminals. Each mission pays both credits and resources. The second most effective method of procuring resources is to... liberate it from harvesting operations while doing destroy missions. Additionally, you can purchase some basic resources from Resource Merchants, but the quality is often poor. Finally, if you're lucky you will encounter some old promotional resouce deeds that can be redeemed for 500 units of any resource you'd like. Your survey tools will not be a significant source of resouces, as they are for research rather than for sitting in a field doing nothing for hours on end.",
  stopConversation = "false",
  options = {
    {"What about harvesters? And no hand sampling?", "help5a1"},
  }
}
u8l7_template:addScreen(u8l7_help5a);


u8l7_help5a1 = ConvoScreen:new {
  id = "help5a1",
  leftDialog = "",
  customDialogText = "I have been programmed to inform you that... 'Harvesters and hand sampling are not in keeping with the design goals of Legend of Hondo. You'll be able to obtain all the resources you need by actively playing the game, engaging in both combat and non-combat activies', whatever that means.",
  stopConversation = "false",
  options = {
    {"How does crafting work again?", "help5"},
    {"Thanks. Can we start over?", "start"},
  }
}
u8l7_template:addScreen(u8l7_help5a1);


u8l7_help5b = ConvoScreen:new {
  id = "help5b",
  leftDialog = "",
  customDialogText = "Yes, Junk Dealers have a wide array of contacts that will allow them to find a market for anything you're able to make. Generally speaking, the better you're able to make something, the more it will be worth. Factory crated items will need to be removed from their crates before a Junk Dealer will accept them, but there's no limit on the amount of items they will purchase. It should be noted that some Junk Dealers specialize in purchasing only certain types of looted items and will therefore reject your crafted items.",
  stopConversation = "false",
  options = {
    {"How does crafting work again?", "help5"},
    {"Thanks. Can we start over?", "start"},
  }
}
u8l7_template:addScreen(u8l7_help5b);


u8l7_help6 = ConvoScreen:new {
  id = "help6",
  leftDialog = "",
  customDialogText = "Your home is Mos Espa and it is *only* here within the city that you're able to build structures. Owning a structure will give you a place to call your own and a place for your crafters to work. Some structures are also businesses that you can run or other services that benefit the populus as a whole - great for improving your renown as a respectable person. By adding a Set Designer to your crew, you will also have access to their wide variety of exclusive decorations and objects, many of which you can place outside to improve the city.",
  stopConversation = "false",
  options = {
    {"So I can only live in Mos Espa?", "help6a"},
    {"I can decorate outside?", "help6b"},
    {"What's a Set Deigner?", "help6c"},
  }
}
u8l7_template:addScreen(u8l7_help6);


u8l7_help6a = ConvoScreen:new {
  id = "help6a",
  leftDialog = "",
  customDialogText = "That's correct, Sir. However, the city council did a wonderful job of clearing out structures that were damaged by a recent earthquake, resulting in ample room for future development of the city. Some say there is perhaps more room in Mos Espa than we'll ever truly need!",
  stopConversation = "false",
  options = {
    {"How does housing work again?", "help6"},
    {"Thanks. Can we start over?", "start"},
  }
}
u8l7_template:addScreen(u8l7_help6a);


u8l7_help6b = ConvoScreen:new {
  id = "help6b",
  leftDialog = "",
  customDialogText = "You most certainly can and should liven up Mos Espa to your liking, Sir. Any item crafted by a Set Designer that is classed as a 'City Decoration' can be placed outside, moved, and rotated. These items will stand the test of time, remaining in the world unless you happen to remove them yourself. Set Designers are also able to craft over fifty differnt styles of gardens.",
  stopConversation = "false",
  options = {
    {"How does housing work again?", "help6"},
    {"Thanks. Can we start over?", "start"},
  }
}
u8l7_template:addScreen(u8l7_help6b);


u8l7_help6c = ConvoScreen:new {
  id = "help6c",
  leftDialog = "",
  customDialogText = "Set Designer is a profession that is related to the Architect, but much more intersting. With training in everything from carpentry to special effects, Set Designers can replicate the look of almost anything. Their furniture is popular, because often their replicas are better than the original. A Set Designer can liven up your home inside and out, with decor that ranges from complete gardens to simple walls, arches, and candles. They do not, however, craft functional buildings, starships, or other machinery.",
  stopConversation = "false",
  options = {
    {"How does housing work again?", "help6"},
    {"Thanks. Can we start over?", "start"},
  }
}
u8l7_template:addScreen(u8l7_help6c);


-- Template Footer
addConversationTemplate("u8l7_template", u8l7_template);
