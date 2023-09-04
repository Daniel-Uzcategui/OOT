#include "util.h"

#include <z64item.h>
#include "Enhancements/randomizer/randomizerTypes.h"
#include <vector>
#include <map>

std::vector<std::string> sceneNames = {
    "Inside the Deku Tree",
    "Dodongo's Cavern",
    "Inside Jabu-Jabu's Belly",
    "Forest Temple",
    "Fire Temple",
    "Water Temple",
    "Spirit Temple",
    "Shadow Temple",
    "Bottom of the Well",
    "Ice Cavern",
    "Ganon's Tower",
    "Gerudo Training Ground",
    "Thieves' Hideout",
    "Inside Ganon's Castle",
    "Ganon's Tower (Collapsing)",
    "Inside Ganon's Castle (Collapsing)",
    "Treasure Box Shop",
    "Gohma's Lair",
    "King Dodongo's Lair",
    "Barinade's Lair",
    "Phantom Ganon's Lair",
    "Volvagia's Lair",
    "Morpha's Lair",
    "Twinrova's Lair",
    "Bongo Bongo's Lair",
    "Ganondorf's Lair",
    "Tower Collapse Exterior",
    "Market Entrance (Child - Day)",
    "Market Entrance (Child - Night)",
    "Market Entrance (Ruins)",
    "Back Alley (Child - Day)",
    "Back Alley (Child - Night)",
    "Market (Child - Day)",
    "Market (Child - Night)",
    "Market (Ruins)",
    "Temple of Time Exterior (Child - Day)",
    "Temple of Time Exterior (Child - Night)",
    "Temple of Time Exterior (Ruins)",
    "Know-It-All Brothers' House",
    "House of Twins",
    "Mido's House",
    "Saria's House",
    "Carpenter Boss's House",
    "Back Alley House (Man in Green)",
    "Bazaar",
    "Kokiri Shop",
    "Goron Shop",
    "Zora Shop",
    "Kakariko Potion Shop",
    "Market Potion Shop",
    "Bombchu Shop",
    "Happy Mask Shop",
    "Link's House",
    "Back Alley House (Dog Lady)",
    "Stable",
    "Impa's House",
    "Lakeside Laboratory",
    "Carpenters' Tent",
    "Gravekeeper's Hut",
    "Great Fairy's Fountain (Upgrades)",
    "Fairy's Fountain",
    "Great Fairy's Fountain (Spells)",
    "Grottos",
    "Grave (Redead)",
    "Grave (Fairy's Fountain)",
    "Royal Family's Tomb",
    "Shooting Gallery",
    "Temple of Time",
    "Chamber of the Sages",
    "Castle Hedge Maze (Day)",
    "Castle Hedge Maze (Night)",
    "Cutscene Map",
    "Dampe's Grave & Windmill",
    "Fishing Pond",
    "Castle Courtyard",
    "Bombchu Bowling Alley",
    "Ranch House & Silo",
    "Guard House",
    "Granny's Potion Shop",
    "Ganon's Tower Collapse & Arena",
    "House of Skulltula",
    "Hyrule Field",
    "Kakariko Village",
    "Graveyard",
    "Zora's River",
    "Kokiri Forest",
    "Sacred Forest Meadow",
    "Lake Hylia",
    "Zora's Domain",
    "Zora's Fountain",
    "Gerudo Valley",
    "Lost Woods",
    "Desert Colossus",
    "Gerudo's Fortress",
    "Haunted Wasteland",
    "Hyrule Castle",
    "Death Mountain Trail",
    "Death Mountain Crater",
    "Goron City",
    "Lon Lon Ranch",
    "Ganon's Castle Exterior",
    "Jungle Gym",
    "Ganondorf Test Room",
    "Depth Test",
    "Stalfos Mini-Boss Room",
    "Stalfos Boss Room",
    "Sutaru",
    "Castle Hedge Maze (Early)",
    "Sasa Test",
    "Treasure Chest Room",
};

std::vector<std::string> itemNames = {
    "Deku Stick",
    "Deku Nut",
    "Bomb",
    "Fairy Bow",
    "Fire Arrow",
    "Din's Fire",
    "Fairy Slingshot",
    "Fairy Ocarina",
    "Ocarina of Time",
    "Bombchu",
    "Hookshot",
    "Longshot",
    "Ice Arrow",
    "Farore's Wind",
    "Boomerang",
    "Lens of Truth",
    "Magic Bean",
    "Megaton Hammer",
    "Light Arrow",
    "Nayru's Love",
    "Empty Bottle",
    "Red Potion",
    "Green Potion",
    "Blue Potion",
    "Bottled Fairy",
    "Fish",
    "Lon Lon Milk & Bottle",
    "Ruto's Letter",
    "Blue Fire",
    "Bug",
    "Big Poe",
    "Lon Lon Milk (Half)",
    "Poe",
    "Weird Egg",
    "Chicken",
    "Zelda's Letter",
    "Keaton Mask",
    "Skull Mask",
    "Spooky Mask",
    "Bunny Hood",
    "Goron Mask",
    "Zora Mask",
    "Gerudo Mask",
    "Mask of Truth",
    "SOLD OUT",
    "Pocket Egg",
    "Pocket Cucco",
    "Cojiro",
    "Odd Mushroom",
    "Odd Potion",
    "Poacher's Saw",
    "Goron's Sword (Broken)",
    "Prescription",
    "Eyeball Frog",
    "Eye Drops",
    "Claim Check",
    "Fairy Bow & Fire Arrow",
    "Fairy Bow & Ice Arrow",
    "Fairy Bow & Light Arrow",
    "Kokiri Sword",
    "Master Sword",
    "Giant's Knife & Biggoron's Sword",
    "Deku Shield",
    "Hylian Shield",
    "Mirror Shield",
    "Kokiri Tunic",
    "Goron Tunic",
    "Zora Tunic",
    "Kokiri Boots",
    "Iron Boots",
    "Hover Boots",
    "Bullet Bag (30)",
    "Bullet Bag (40)",
    "Bullet Bag (50)",
    "Quiver (30)",
    "Big Quiver (40)",
    "Biggest Quiver (50)",
    "Bomb Bag (20)",
    "Big Bomb Bag (30)",
    "Biggest Bomb Bag (40)",
    "Goron's Bracelet",
    "Silver Gauntlets",
    "Golden Gauntlets",
    "Silver Scale",
    "Golden Scale",
    "Giant's Knife (Broken)",
    "Adult's Wallet",
    "Giant's Wallet",
    "Deku Seeds (5)",
    "Fishing Pole",
    "Minuet of Forest",
    "Bolero of Fire",
    "Serenade of Water",
    "Requiem of Spirit",
    "Nocturne of Shadow",
    "Prelude of Light",
    "Zelda's Lullaby",
    "Epona's Song",
    "Saria's Song",
    "Sun's Song",
    "Song of Time",
    "Song of Storms",
    "Forest Medallion",
    "Fire Medallion",
    "Water Medallion",
    "Spirit Medallion",
    "Shadow Medallion",
    "Light Medallion",
    "Kokiri's Emerald",
    "Goron's Ruby",
    "Zora's Sapphire",
    "Stone of Agony",
    "Gerudo's Card",
    "Gold Skulltula Token",
    "Heart Container",
    "Piece of Heart",
    "Boss Key",
    "Compass",
    "Dungeon Map",
    "Small Key",
    "Small Magic Jar",
    "Large Magic Jar",
    "Piece of Heart",
    "[Removed]",
    "[Removed]",
    "[Removed]",
    "[Removed]",
    "[Removed]",
    "[Removed]",
    "[Removed]",
    "Lon Lon Milk",
    "Recovery Heart",
    "Green Rupee",
    "Blue Rupee",
    "Red Rupee",
    "Purple Rupee",
    "Huge Rupee",
    "[Removed]",
    "Deku Sticks (5)",
    "Deku Sticks (10)",
    "Deku Nuts (5)",
    "Deku Nuts (10)",
    "Bombs (5)",
    "Bombs (10)",
    "Bombs (20)",
    "Bombs (30)",
    "Arrows (Small)",
    "Arrows (Medium)",
    "Arrows (Large)",
    "Deku Seeds (30)",
    "Bombchu (5)",
    "Bombchu (20)",
    "Deku Stick Upgrade (20)",
    "Deku Stick Upgrade (30)",
    "Deku Nut Upgrade (30)",
    "Deku Nut Upgrade (40)",
};

std::vector<std::string> randomizerItemNames = {
    "Nothing",
    "Kokiri Sword",
    "Giant's Knife",
    "Biggoron Sword",
    "Deku Shield",
    "Hylian Shield",
    "Mirror Shield",
    "Goron Tunic",
    "Zora Tunic",
    "Iron Boots",
    "Hover Boots",
    "Boomerang",
    "Lens of Truth",
    "Megaton Hammer",
    "Stone of Agony",
    "Din's Fire",
    "Farore's Wind",
    "Nayru's Love",
    "Fire Arrows",
    "Ice Arrows",
    "Light Arrows",
    "Gerudo Membership Card",
    "Magic Bean",
    "Magic Bean Pack",
    "Double Defense",
    "Weird Egg",
    "Zelda's Letter",
    "Pocket Egg",
    "Cojiro",
    "Odd Mushroom",
    "Odd Potion",
    "Poacher's Saw",
    "Broken Sword",
    "Prescription",
    "Eyeball Frog",
    "Eyedrops",
    "Claim Check",
    "Gold Skulltula Token",
    "Progressive Hookshot",
    "Progressive Strength",
    "Progressive Bomb Bag",
    "Progressive Bow",
    "Progressive Slingshot",
    "Progressive Wallet",
    "Progressive Scale",
    "Progressive Nut Upgrade",
    "Progressive Stick Upgrade",
    "Progressive Bombchus",
    "Progressive Magic Meter",
    "Magic Single",
    "Magic Double",
    "Progressive Ocarina",
    "Progressive Goron Sword",
    "Empty Bottle",
    "Bottle with Milk",
    "Bottle with Red Potion",
    "Bottle with Green Potion",
    "Bottle with Blue Potion",
    "Bottle with Fairy",
    "Bottle with Fish",
    "Bottle with Blue Fire",
    "Bottle with Bugs",
    "Bottle with Poe",
    "Ruto's Letter",
    "Bottle with Big Poe",
    "Zelda's Lullaby",
    "Epona's Song",
    "Saria's Song",
    "Sun's Song",
    "Song of Time",
    "Song of Storms",
    "Minuet of Forest",
    "Bolero of Fire",
    "Serenade of Water",
    "Requiem of Spirit",
    "Nocturne of Shadow",
    "Prelude of Light",
    "Deku Tree Map",
    "Dodongo's Cavern Map",
    "Jabu Jabu's Belly Map",
    "Forest Temple Map",
    "Fire Temple Map",
    "Water Temple Map",
    "Spirit Temple Map",
    "Shadow Temple Map",
    "Bottom of the Well Map",
    "Ice Cavern Map",
    "Deku Tree Compass",
    "Dodongo's Cavern Compass",
    "Jabu Jabu's Belly Compass",
    "Forest Temple Compass",
    "Fire Temple Compass",
    "Water Temple Compass",
    "Spirit Temple Compass",
    "Shadow Temple Compass",
    "Bottom of the Well Compass",
    "Ice Cavern Compass",
    "Forest Temple Boss Key",
    "Fire Temple Boss Key",
    "Water Temple Boss Key",
    "Spirit Temple Boss Key",
    "Shadow Temple Boss Key",
    "Ganon's Castle Boss Key",
    "Forest Temple Small Key",
    "Fire Temple Small Key",
    "Water Temple Small Key",
    "Spirit Temple Small Key",
    "Shadow Temple Small Key",
    "Bottom of the Well Small Key",
    "Gerudo Training Grounds Small Key",
    "Gerudo Fortress Small Key",
    "Ganon's Castle Small Key",
    "Treasure Game Small Key",
    "Forest Temple Key Ring",
    "Fire Temple Key Ring",
    "Water Temple Key Ring",
    "Spirit Temple Key Ring",
    "Shadow Temple Key Ring",
    "Bottom of the Well Key Ring",
    "Gerudo Training Grounds Key Ring",
    "Gerudo Fortress Key Ring",
    "Ganon's Castle Key Ring",
    "Kokiri Emerald",
    "Goron Ruby",
    "Zora Sapphire",
    "Forest Medallion",
    "Fire Medallion",
    "Water Medallion",
    "Spirit Medallion",
    "Shadow Medallion",
    "Light Medallion",
    "Recovery Heart",
    "Green Rupee",
    "Greg Rupee",
    "Blue Rupee",
    "Red Rupee",
    "Purple Rupee",
    "Huge Rupee",
    "Piece of Heart",
    "Heart Container",
    "Ice Trap",
    "Milk",
    "Bombs (5)",
    "Bombs (10)",
    "Bombs (20)",
    "Bombchu (5)",
    "Bombchu (10)",
    "Bombchu (20)",
    "Bombchu Drop",
    "Arrows (5)",
    "Arrows (10)",
    "Arrows (30)",
    "Deku Nuts (5)",
    "Deku Nuts (10)",
    "Deku Seeds (30)",
    "Deku Stick (1)",
    "Red Potion Refill",
    "Green Potion Refill",
    "Blue Potion Refill",
    "Treasure Game Heart",
    "Treasure Game Green Rupee",
    "Buy Deku Nut (5)",
    "Buy Arrows (30)",
    "Buy Arrows (50)",
    "Buy Bombs (5/25)",
    "Buy Deku Nut (10)",
    "Buy Deku Stick (1)",
    "Buy Bombs (10)",
    "Buy Fish",
    "Buy Red Potion (30)",
    "Buy Green Potion",
    "Buy Blue Potion",
    "Buy Hylian Shield",
    "Buy Deku Shield",
    "Buy Goron Tunic",
    "Buy Zora Tunic",
    "Buy Heart",
    "Buy Bombchu (10)",
    "Buy Bombchu (20)",
    "Buy Deku Seeds (30)",
    "Sold Out",
    "Buy Blue Fire",
    "Buy Bottle Bug",
    "Buy Poe",
    "Buy Fairy's Spirit",
    "Buy Arrows (10)",
    "Buy Bombs (20)",
    "Buy Bombs (30)",
    "Buy Bombs (5/35)",
    "Buy Red Potion (40)",
    "Buy Red Potion (50)",
    "Triforce",
    "Triforce Piece",
    "Hint",
    "Tycoon Wallet"
};

std::vector<std::string> questItemNames = {
        "Forest Medallion",
        "Fire Medallion",
        "Water Medallion",
        "Spirit Medallion",
        "Shadow Medallion",
        "Light Medallion",
        "Minuet of Forest",
        "Bolero of Fire",
        "Serenade of Water",
        "Requiem of Spirit",
        "Nocturne of Shadow",
        "Prelude of Light",
        "Zelda's Lullaby",
        "Epona's Song",
        "Saria's Song",
        "Sun's Song",
        "Song of Time",
        "Song of Storms",
        "Kokiri's Emerald",
        "Goron's Ruby",
        "Zora's Sapphire",
        "Stone of Agony",
        "Gerudo's Card",
        "Gold Skulltula Token",
        "Heart Piece",
};

#define ITEM_ICON(id) \
    { id, #id }

// Maps items ids to info for use in ImGui
std::map<uint32_t, const char*> itemIcons = {
    ITEM_ICON(ITEM_STICK),
    ITEM_ICON(ITEM_NUT),
    ITEM_ICON(ITEM_BOMB),
    ITEM_ICON(ITEM_BOW),
    ITEM_ICON(ITEM_ARROW_FIRE),
    ITEM_ICON(ITEM_DINS_FIRE),
    ITEM_ICON(ITEM_SLINGSHOT),
    ITEM_ICON(ITEM_OCARINA_FAIRY),
    ITEM_ICON(ITEM_OCARINA_TIME),
    ITEM_ICON(ITEM_BOMBCHU),
    ITEM_ICON(ITEM_HOOKSHOT),
    ITEM_ICON(ITEM_LONGSHOT),
    ITEM_ICON(ITEM_ARROW_ICE),
    ITEM_ICON(ITEM_FARORES_WIND),
    ITEM_ICON(ITEM_BOOMERANG),
    ITEM_ICON(ITEM_LENS),
    ITEM_ICON(ITEM_BEAN),
    ITEM_ICON(ITEM_HAMMER),
    ITEM_ICON(ITEM_ARROW_LIGHT),
    ITEM_ICON(ITEM_NAYRUS_LOVE),
    ITEM_ICON(ITEM_BOTTLE),
    ITEM_ICON(ITEM_POTION_RED),
    ITEM_ICON(ITEM_POTION_GREEN),
    ITEM_ICON(ITEM_POTION_BLUE),
    ITEM_ICON(ITEM_FAIRY),
    ITEM_ICON(ITEM_FISH),
    ITEM_ICON(ITEM_MILK_BOTTLE),
    ITEM_ICON(ITEM_LETTER_RUTO),
    ITEM_ICON(ITEM_BLUE_FIRE),
    ITEM_ICON(ITEM_BUG),
    ITEM_ICON(ITEM_BIG_POE),
    ITEM_ICON(ITEM_MILK_HALF),
    ITEM_ICON(ITEM_POE),
    ITEM_ICON(ITEM_WEIRD_EGG),
    ITEM_ICON(ITEM_CHICKEN),
    ITEM_ICON(ITEM_LETTER_ZELDA),
    ITEM_ICON(ITEM_MASK_KEATON),
    ITEM_ICON(ITEM_MASK_SKULL),
    ITEM_ICON(ITEM_MASK_SPOOKY),
    ITEM_ICON(ITEM_MASK_BUNNY),
    ITEM_ICON(ITEM_MASK_GORON),
    ITEM_ICON(ITEM_MASK_ZORA),
    ITEM_ICON(ITEM_MASK_GERUDO),
    ITEM_ICON(ITEM_MASK_TRUTH),
    ITEM_ICON(ITEM_SOLD_OUT),
    ITEM_ICON(ITEM_POCKET_EGG),
    ITEM_ICON(ITEM_POCKET_CUCCO),
    ITEM_ICON(ITEM_COJIRO),
    ITEM_ICON(ITEM_ODD_MUSHROOM),
    ITEM_ICON(ITEM_ODD_POTION),
    ITEM_ICON(ITEM_SAW),
    ITEM_ICON(ITEM_SWORD_BROKEN),
    ITEM_ICON(ITEM_PRESCRIPTION),
    ITEM_ICON(ITEM_FROG),
    ITEM_ICON(ITEM_EYEDROPS),
    ITEM_ICON(ITEM_CLAIM_CHECK),
    ITEM_ICON(ITEM_BOW_ARROW_FIRE),
    ITEM_ICON(ITEM_BOW_ARROW_ICE),
    ITEM_ICON(ITEM_BOW_ARROW_LIGHT),
    ITEM_ICON(ITEM_SWORD_KOKIRI),
    ITEM_ICON(ITEM_SWORD_MASTER),
    ITEM_ICON(ITEM_SWORD_BGS),
    ITEM_ICON(ITEM_SHIELD_DEKU),
    ITEM_ICON(ITEM_SHIELD_HYLIAN),
    ITEM_ICON(ITEM_SHIELD_MIRROR),
    ITEM_ICON(ITEM_TUNIC_KOKIRI),
    ITEM_ICON(ITEM_TUNIC_GORON),
    ITEM_ICON(ITEM_TUNIC_ZORA),
    ITEM_ICON(ITEM_BOOTS_KOKIRI),
    ITEM_ICON(ITEM_BOOTS_IRON),
    ITEM_ICON(ITEM_BOOTS_HOVER),
    ITEM_ICON(ITEM_BULLET_BAG_30),
    ITEM_ICON(ITEM_BULLET_BAG_40),
    ITEM_ICON(ITEM_BULLET_BAG_50),
    ITEM_ICON(ITEM_QUIVER_30),
    ITEM_ICON(ITEM_QUIVER_40),
    ITEM_ICON(ITEM_QUIVER_50),
    ITEM_ICON(ITEM_BOMB_BAG_20),
    ITEM_ICON(ITEM_BOMB_BAG_30),
    ITEM_ICON(ITEM_BOMB_BAG_40),
    ITEM_ICON(ITEM_BRACELET),
    ITEM_ICON(ITEM_GAUNTLETS_SILVER),
    ITEM_ICON(ITEM_GAUNTLETS_GOLD),
    ITEM_ICON(ITEM_SCALE_SILVER),
    ITEM_ICON(ITEM_SCALE_GOLDEN),
    ITEM_ICON(ITEM_SWORD_KNIFE),
    ITEM_ICON(ITEM_WALLET_ADULT),
    ITEM_ICON(ITEM_WALLET_GIANT),
    ITEM_ICON(ITEM_SEEDS),
    ITEM_ICON(ITEM_FISHING_POLE),
    ITEM_ICON(ITEM_SONG_MINUET),
    ITEM_ICON(ITEM_SONG_BOLERO),
    ITEM_ICON(ITEM_SONG_SERENADE),
    ITEM_ICON(ITEM_SONG_REQUIEM),
    ITEM_ICON(ITEM_SONG_NOCTURNE),
    ITEM_ICON(ITEM_SONG_PRELUDE),
    ITEM_ICON(ITEM_SONG_LULLABY),
    ITEM_ICON(ITEM_SONG_EPONA),
    ITEM_ICON(ITEM_SONG_SARIA),
    ITEM_ICON(ITEM_SONG_SUN),
    ITEM_ICON(ITEM_SONG_TIME),
    ITEM_ICON(ITEM_SONG_STORMS),
    ITEM_ICON(ITEM_MEDALLION_FOREST),
    ITEM_ICON(ITEM_MEDALLION_FIRE),
    ITEM_ICON(ITEM_MEDALLION_WATER),
    ITEM_ICON(ITEM_MEDALLION_SPIRIT),
    ITEM_ICON(ITEM_MEDALLION_SHADOW),
    ITEM_ICON(ITEM_MEDALLION_LIGHT),
    ITEM_ICON(ITEM_KOKIRI_EMERALD),
    ITEM_ICON(ITEM_GORON_RUBY),
    ITEM_ICON(ITEM_ZORA_SAPPHIRE),
    ITEM_ICON(ITEM_STONE_OF_AGONY),
    ITEM_ICON(ITEM_GERUDO_CARD),
    ITEM_ICON(ITEM_SKULL_TOKEN),
    ITEM_ICON(ITEM_HEART_CONTAINER),
    ITEM_ICON(ITEM_HEART_PIECE),
    ITEM_ICON(ITEM_KEY_BOSS),
    ITEM_ICON(ITEM_COMPASS),
    ITEM_ICON(ITEM_DUNGEON_MAP),
    ITEM_ICON(ITEM_KEY_SMALL),
    ITEM_ICON(ITEM_MAGIC_SMALL),
    ITEM_ICON(ITEM_MAGIC_LARGE),
    ITEM_ICON(RG_TRIFORCE_PIECE),
};

std::map<int32_t, int32_t> randomizerGetToItemIdIcon = {
    { RG_NONE, ITEM_NONE },
    { RG_KOKIRI_SWORD, ITEM_SWORD_KOKIRI },
    { RG_GIANTS_KNIFE, ITEM_SWORD_KNIFE },
    { RG_BIGGORON_SWORD, ITEM_SWORD_BGS },
    { RG_DEKU_SHIELD, ITEM_SHIELD_DEKU },
    { RG_HYLIAN_SHIELD, ITEM_SHIELD_HYLIAN },
    { RG_MIRROR_SHIELD, ITEM_SHIELD_MIRROR },
    { RG_GORON_TUNIC, ITEM_TUNIC_GORON },
    { RG_ZORA_TUNIC, ITEM_TUNIC_ZORA },
    { RG_IRON_BOOTS, ITEM_BOOTS_IRON },
    { RG_HOVER_BOOTS, ITEM_BOOTS_HOVER },
    { RG_BOOMERANG, ITEM_BOOMERANG },
    { RG_LENS_OF_TRUTH, ITEM_LENS },
    { RG_MEGATON_HAMMER, ITEM_HAMMER },
    { RG_STONE_OF_AGONY, ITEM_STONE_OF_AGONY },
    { RG_DINS_FIRE, ITEM_DINS_FIRE },
    { RG_FARORES_WIND, ITEM_FARORES_WIND },
    { RG_NAYRUS_LOVE, ITEM_NAYRUS_LOVE },
    { RG_FIRE_ARROWS, ITEM_ARROW_FIRE },
    { RG_ICE_ARROWS, ITEM_ARROW_ICE },
    { RG_LIGHT_ARROWS, ITEM_ARROW_LIGHT },
    { RG_GERUDO_MEMBERSHIP_CARD, ITEM_GERUDO_CARD },
    { RG_MAGIC_BEAN, ITEM_BEAN },
    { RG_MAGIC_BEAN_PACK, ITEM_BEAN },
    { RG_DOUBLE_DEFENSE, ITEM_DOUBLE_DEFENSE },
    { RG_WEIRD_EGG, ITEM_WEIRD_EGG },
    { RG_ZELDAS_LETTER, ITEM_LETTER_ZELDA },
    { RG_POCKET_EGG, ITEM_POCKET_EGG },
    { RG_COJIRO, ITEM_COJIRO },
    { RG_ODD_MUSHROOM, ITEM_ODD_MUSHROOM },
    { RG_ODD_POTION, ITEM_ODD_POTION },
    { RG_POACHERS_SAW, ITEM_SAW },
    { RG_BROKEN_SWORD, ITEM_SWORD_BROKEN },
    { RG_PRESCRIPTION, ITEM_PRESCRIPTION },
    { RG_EYEBALL_FROG, ITEM_FROG },
    { RG_EYEDROPS, ITEM_EYEDROPS },
    { RG_CLAIM_CHECK, ITEM_CLAIM_CHECK },
    { RG_GOLD_SKULLTULA_TOKEN, ITEM_SKULL_TOKEN },
    { RG_PROGRESSIVE_HOOKSHOT, ITEM_HOOKSHOT },
    { RG_PROGRESSIVE_STRENGTH, ITEM_BRACELET },
    { RG_PROGRESSIVE_BOMB_BAG, ITEM_BOMB_BAG_20 },
    { RG_PROGRESSIVE_BOW, ITEM_BOW },
    { RG_PROGRESSIVE_SLINGSHOT, ITEM_SLINGSHOT },
    { RG_PROGRESSIVE_WALLET, ITEM_WALLET_ADULT },
    { RG_PROGRESSIVE_SCALE, ITEM_SCALE_SILVER },
    { RG_PROGRESSIVE_NUT_UPGRADE, ITEM_NUT },
    { RG_PROGRESSIVE_STICK_UPGRADE, ITEM_STICK },
    { RG_PROGRESSIVE_BOMBCHUS, ITEM_BOMBCHU },
    { RG_PROGRESSIVE_MAGIC_METER, ITEM_MAGIC_SMALL },
    { RG_MAGIC_SINGLE, ITEM_MAGIC_SMALL },
    { RG_MAGIC_DOUBLE, ITEM_MAGIC_LARGE },
    { RG_PROGRESSIVE_OCARINA, ITEM_OCARINA_FAIRY },
    { RG_PROGRESSIVE_GORONSWORD, ITEM_SWORD_BGS },
    { RG_EMPTY_BOTTLE, ITEM_BOTTLE },
    { RG_BOTTLE_WITH_MILK, ITEM_MILK_BOTTLE },
    { RG_BOTTLE_WITH_RED_POTION, ITEM_POTION_RED },
    { RG_BOTTLE_WITH_GREEN_POTION, ITEM_POTION_GREEN },
    { RG_BOTTLE_WITH_BLUE_POTION, ITEM_POTION_BLUE },
    { RG_BOTTLE_WITH_FAIRY, ITEM_FAIRY },
    { RG_BOTTLE_WITH_FISH, ITEM_FISH },
    { RG_BOTTLE_WITH_BLUE_FIRE, ITEM_BLUE_FIRE },
    { RG_BOTTLE_WITH_BUGS, ITEM_BUG },
    { RG_BOTTLE_WITH_POE, ITEM_POE },
    { RG_RUTOS_LETTER, ITEM_LETTER_RUTO },
    { RG_BOTTLE_WITH_BIG_POE, ITEM_BIG_POE },
    { RG_ZELDAS_LULLABY, ITEM_SONG_LULLABY },
    { RG_EPONAS_SONG, ITEM_SONG_EPONA },
    { RG_SARIAS_SONG, ITEM_SONG_SARIA },
    { RG_SUNS_SONG, ITEM_SONG_SUN },
    { RG_SONG_OF_TIME, ITEM_SONG_TIME },
    { RG_SONG_OF_STORMS, ITEM_SONG_STORMS },
    { RG_MINUET_OF_FOREST, ITEM_SONG_MINUET },
    { RG_BOLERO_OF_FIRE, ITEM_SONG_BOLERO },
    { RG_SERENADE_OF_WATER, ITEM_SONG_SERENADE },
    { RG_REQUIEM_OF_SPIRIT, ITEM_SONG_REQUIEM },
    { RG_NOCTURNE_OF_SHADOW, ITEM_SONG_NOCTURNE },
    { RG_PRELUDE_OF_LIGHT, ITEM_SONG_PRELUDE },
    { RG_DEKU_TREE_MAP, ITEM_DUNGEON_MAP },
    { RG_DODONGOS_CAVERN_MAP, ITEM_DUNGEON_MAP },
    { RG_JABU_JABUS_BELLY_MAP, ITEM_DUNGEON_MAP },
    { RG_FOREST_TEMPLE_MAP, ITEM_DUNGEON_MAP },
    { RG_FIRE_TEMPLE_MAP, ITEM_DUNGEON_MAP },
    { RG_WATER_TEMPLE_MAP, ITEM_DUNGEON_MAP },
    { RG_SPIRIT_TEMPLE_MAP, ITEM_DUNGEON_MAP },
    { RG_SHADOW_TEMPLE_MAP, ITEM_DUNGEON_MAP },
    { RG_BOTTOM_OF_THE_WELL_MAP, ITEM_DUNGEON_MAP },
    { RG_ICE_CAVERN_MAP, ITEM_DUNGEON_MAP },
    { RG_DEKU_TREE_COMPASS, ITEM_COMPASS },
    { RG_DODONGOS_CAVERN_COMPASS, ITEM_COMPASS },
    { RG_JABU_JABUS_BELLY_COMPASS, ITEM_COMPASS },
    { RG_FOREST_TEMPLE_COMPASS, ITEM_COMPASS },
    { RG_FIRE_TEMPLE_COMPASS, ITEM_COMPASS },
    { RG_WATER_TEMPLE_COMPASS, ITEM_COMPASS },
    { RG_SPIRIT_TEMPLE_COMPASS, ITEM_COMPASS },
    { RG_SHADOW_TEMPLE_COMPASS, ITEM_COMPASS },
    { RG_BOTTOM_OF_THE_WELL_COMPASS, ITEM_COMPASS },
    { RG_ICE_CAVERN_COMPASS, ITEM_COMPASS },
    { RG_FOREST_TEMPLE_BOSS_KEY, ITEM_KEY_BOSS },
    { RG_FIRE_TEMPLE_BOSS_KEY, ITEM_KEY_BOSS },
    { RG_WATER_TEMPLE_BOSS_KEY, ITEM_KEY_BOSS },
    { RG_SPIRIT_TEMPLE_BOSS_KEY, ITEM_KEY_BOSS },
    { RG_SHADOW_TEMPLE_BOSS_KEY, ITEM_KEY_BOSS },
    { RG_GANONS_CASTLE_BOSS_KEY, ITEM_KEY_BOSS },
    { RG_FOREST_TEMPLE_SMALL_KEY, ITEM_KEY_SMALL },
    { RG_FIRE_TEMPLE_SMALL_KEY, ITEM_KEY_SMALL },
    { RG_WATER_TEMPLE_SMALL_KEY, ITEM_KEY_SMALL },
    { RG_SPIRIT_TEMPLE_SMALL_KEY, ITEM_KEY_SMALL },
    { RG_SHADOW_TEMPLE_SMALL_KEY, ITEM_KEY_SMALL },
    { RG_BOTTOM_OF_THE_WELL_SMALL_KEY, ITEM_KEY_SMALL },
    { RG_GERUDO_TRAINING_GROUNDS_SMALL_KEY, ITEM_KEY_SMALL },
    { RG_GERUDO_FORTRESS_SMALL_KEY, ITEM_KEY_SMALL },
    { RG_GANONS_CASTLE_SMALL_KEY, ITEM_KEY_SMALL },
    { RG_TREASURE_GAME_SMALL_KEY, ITEM_KEY_SMALL },
    { RG_FOREST_TEMPLE_KEY_RING, ITEM_KEY_SMALL },
    { RG_FIRE_TEMPLE_KEY_RING, ITEM_KEY_SMALL },
    { RG_WATER_TEMPLE_KEY_RING, ITEM_KEY_SMALL },
    { RG_SPIRIT_TEMPLE_KEY_RING, ITEM_KEY_SMALL },
    { RG_SHADOW_TEMPLE_KEY_RING, ITEM_KEY_SMALL },
    { RG_BOTTOM_OF_THE_WELL_KEY_RING, ITEM_KEY_SMALL },
    { RG_GERUDO_TRAINING_GROUNDS_KEY_RING, ITEM_KEY_SMALL },
    { RG_GERUDO_FORTRESS_KEY_RING, ITEM_KEY_SMALL },
    { RG_GANONS_CASTLE_KEY_RING, ITEM_KEY_SMALL },
    { RG_KOKIRI_EMERALD, ITEM_KOKIRI_EMERALD },
    { RG_GORON_RUBY, ITEM_GORON_RUBY },
    { RG_ZORA_SAPPHIRE, ITEM_ZORA_SAPPHIRE },
    { RG_FOREST_MEDALLION, ITEM_MEDALLION_FOREST },
    { RG_FIRE_MEDALLION, ITEM_MEDALLION_FIRE },
    { RG_WATER_MEDALLION, ITEM_MEDALLION_WATER },
    { RG_SPIRIT_MEDALLION, ITEM_MEDALLION_SPIRIT },
    { RG_SHADOW_MEDALLION, ITEM_MEDALLION_SHADOW },
    { RG_LIGHT_MEDALLION, ITEM_MEDALLION_LIGHT },
    { RG_RECOVERY_HEART, ITEM_HEART },
    { RG_GREEN_RUPEE, ITEM_RUPEE_GREEN },
    { RG_GREG_RUPEE, ITEM_RUPEE_GREEN },
    { RG_BLUE_RUPEE, ITEM_RUPEE_BLUE },
    { RG_RED_RUPEE, ITEM_RUPEE_RED },
    { RG_PURPLE_RUPEE, ITEM_RUPEE_PURPLE },
    { RG_HUGE_RUPEE, ITEM_RUPEE_GOLD },
    { RG_PIECE_OF_HEART, ITEM_HEART_PIECE },
    { RG_HEART_CONTAINER, ITEM_HEART_CONTAINER },
    { RG_ICE_TRAP, ITEM_NONE },
    { RG_MILK, ITEM_MILK_BOTTLE },
    { RG_BOMBS_5, ITEM_BOMB },
    { RG_BOMBS_10, ITEM_BOMB },
    { RG_BOMBS_20, ITEM_BOMB },
    { RG_BOMBCHU_5, ITEM_BOMBCHU },
    { RG_BOMBCHU_10, ITEM_BOMBCHU },
    { RG_BOMBCHU_20, ITEM_BOMBCHU },
    { RG_BOMBCHU_DROP, ITEM_BOMBCHU },
    { RG_ARROWS_5, ITEM_ARROWS_SMALL },
    { RG_ARROWS_10, ITEM_ARROWS_MEDIUM },
    { RG_ARROWS_30, ITEM_ARROWS_LARGE },
    { RG_DEKU_NUTS_5, ITEM_NUT },
    { RG_DEKU_NUTS_10, ITEM_NUT },
    { RG_DEKU_SEEDS_30, ITEM_SEEDS },
    { RG_DEKU_STICK_1, ITEM_STICK },
    { RG_RED_POTION_REFILL, ITEM_POTION_RED },
    { RG_GREEN_POTION_REFILL, ITEM_POTION_GREEN },
    { RG_BLUE_POTION_REFILL, ITEM_POTION_BLUE },
    { RG_TREASURE_GAME_HEART, ITEM_HEART_PIECE },
    { RG_TREASURE_GAME_GREEN_RUPEE, ITEM_RUPEE_GREEN },
    { RG_BUY_DEKU_NUT_5, ITEM_NUT },
    { RG_BUY_ARROWS_30, ITEM_ARROWS_MEDIUM },
    { RG_BUY_ARROWS_50, ITEM_ARROWS_LARGE },
    { RG_BUY_BOMBS_525, ITEM_BOMB },
    { RG_BUY_DEKU_NUT_10, ITEM_NUT },
    { RG_BUY_DEKU_STICK_1, ITEM_STICK },
    { RG_BUY_BOMBS_10, ITEM_BOMB },
    { RG_BUY_FISH, ITEM_FISH },
    { RG_BUY_RED_POTION_30, ITEM_POTION_RED },
    { RG_BUY_GREEN_POTION, ITEM_POTION_GREEN },
    { RG_BUY_BLUE_POTION, ITEM_POTION_BLUE },
    { RG_BUY_HYLIAN_SHIELD, ITEM_SHIELD_HYLIAN },
    { RG_BUY_DEKU_SHIELD, ITEM_SHIELD_DEKU },
    { RG_BUY_GORON_TUNIC, ITEM_TUNIC_GORON },
    { RG_BUY_ZORA_TUNIC, ITEM_TUNIC_ZORA },
    { RG_BUY_HEART, ITEM_HEART },
    { RG_BUY_BOMBCHU_10, ITEM_BOMBCHU },
    { RG_BUY_BOMBCHU_20, ITEM_BOMBCHU },
    { RG_BUY_DEKU_SEEDS_30, ITEM_SEEDS },
    { RG_SOLD_OUT, ITEM_SOLD_OUT },
    { RG_BUY_BLUE_FIRE, ITEM_BLUE_FIRE },
    { RG_BUY_BOTTLE_BUG, ITEM_BUG },
    { RG_BUY_POE, ITEM_POE },
    { RG_BUY_FAIRYS_SPIRIT, ITEM_FAIRY },
    { RG_BUY_ARROWS_10, ITEM_ARROWS_SMALL },
    { RG_BUY_BOMBS_20, ITEM_BOMB },
    { RG_BUY_BOMBS_30, ITEM_BOMB },
    { RG_BUY_BOMBS_535, ITEM_BOMB },
    { RG_BUY_RED_POTION_40, ITEM_POTION_RED },
    { RG_BUY_RED_POTION_50, ITEM_POTION_RED },
    { RG_TYCOON_WALLET, ITEM_WALLET_GIANT },
    { RG_TRIFORCE_PIECE, RG_TRIFORCE_PIECE },
};

int32_t SohUtils::GetItemIdIconFromRandomizerGet(int32_t randomizerGet) {
    return randomizerGetToItemIdIcon.contains(randomizerGet) ? randomizerGetToItemIdIcon[randomizerGet] : ITEM_NONE;
}

const char* SohUtils::GetIconNameFromItemID(int32_t itemId) {
    return itemIcons.contains(itemId) ? itemIcons[itemId] : nullptr;
}

// To be used with SceneID enum (SCENE_ prefix)
const std::string& SohUtils::GetSceneName(int32_t scene) {
    return sceneNames[scene];
}

// To be used with ItemID enum (ITEM_ prefix)
const std::string& SohUtils::GetItemName(int32_t item) {
    return itemNames[item];
}

// To be used with RandomizerGet enum (RG_ prefix)
const std::string& SohUtils::GetRandomizerItemName(int32_t item) {
    return randomizerItemNames[item];
}

// To be used with QuestItem enum (QUEST_ prefix)
const std::string& SohUtils::GetQuestItemName(int32_t item) {
    return questItemNames[item];
}
