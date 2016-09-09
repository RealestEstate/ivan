/*
 *
 *  Iter Vehemens ad Necem (IVAN)
 *  Copyright (C) Timo Kiviluoto
 *  Released under the GNU General
 *  Public License
 *
 *  See LICENSING which should be included
 *  along with this file for more details
 *
 */

#ifndef __CONFDEF_H__
#define __CONFDEF_H__

/*
 * Configuration defines of IVAN
 */

#define SOLID_ID (1 << 12)

#define VALPURIUM (SOLID_ID + 1)
#define GRAVEL (SOLID_ID + 2)
#define MORAINE (SOLID_ID + 3)
#define OCTIRON (SOLID_ID + 4)
#define GLASS (SOLID_ID + 5)
#define PARCHMENT (SOLID_ID + 6)
#define CLOTH (SOLID_ID + 7)
#define MITHRIL (SOLID_ID + 8)
#define MARBLE (SOLID_ID + 9)
#define GOLD (SOLID_ID + 10)
#define GRASS (SOLID_ID + 11)
#define LEATHER (SOLID_ID + 12)
#define LEAF (SOLID_ID + 13)
#define FABRIC (SOLID_ID + 14)
#define PALM_LEAF (SOLID_ID + 15)
#define SULFUR (SOLID_ID + 16)
#define UNICORN_HORN (SOLID_ID + 17)
#define DIAMOND (SOLID_ID + 18)
#define SILVER (SOLID_ID + 19)
#define SAPPHIRE (SOLID_ID + 20)
#define RUBY (SOLID_ID + 21)
#define BRONZE (SOLID_ID + 22)
#define COPPER (SOLID_ID + 23)
#define TIN (SOLID_ID + 24)
#define SPIDER_SILK (SOLID_ID + 25)
#define KEVLAR (SOLID_ID + 26)
#define OMMEL_HAIR (SOLID_ID + 27)
#define HARDENED_LEATHER (SOLID_ID + 28)
#define TROLL_HIDE (SOLID_ID + 29)
#define NYMPH_HAIR (SOLID_ID + 30)
#define ANGEL_HAIR (SOLID_ID + 31)
#define PHOENIX_FEATHER (SOLID_ID + 32)
#define GOLDEN_EAGLE_FEATHER (SOLID_ID + 33)
#define ICE (SOLID_ID + 34)
#define DRAGON_HIDE (SOLID_ID + 35)
#define ARCANITE (SOLID_ID + 36)
#define ILLITHIUM (SOLID_ID + 37)
#define BALSA_WOOD (SOLID_ID + 38)
#define PINE_WOOD (SOLID_ID + 39)
#define FIR_WOOD (SOLID_ID + 40)
#define BIRCH_WOOD (SOLID_ID + 41)
#define OAK_WOOD (SOLID_ID + 42)
#define TEAK_WOOD (SOLID_ID + 43)
#define EBONY_WOOD (SOLID_ID + 44)
#define BLUE_CRYSTAL (SOLID_ID + 45)
#define PURPLE_CRYSTAL (SOLID_ID + 46)
#define GREEN_CRYSTAL (SOLID_ID + 47)
#define SAND_STONE (SOLID_ID + 48)
#define LIME_STONE (SOLID_ID + 49)
#define CALCITE (SOLID_ID + 50)
#define OBSIDIAN (SOLID_ID + 51)
#define GNEISS (SOLID_ID + 52)
#define SLATE (SOLID_ID + 53)
#define GRANITE (SOLID_ID + 54)
#define BASALT (SOLID_ID + 55)
#define MILKY_QUARTZ (SOLID_ID + 56)
#define FLINT (SOLID_ID + 57)
#define QUARTZITE (SOLID_ID + 58)
#define AMETHYST (SOLID_ID + 59)
#define CITRINE (SOLID_ID + 60)
#define ROSE_QUARTZ (SOLID_ID + 61)
#define JASPER (SOLID_ID + 62)
#define ROCK_CRYSTAL (SOLID_ID + 63)
#define DARK_GRASS (SOLID_ID + 64)
#define LEAD (SOLID_ID + 65)
#define BLACK_GRANITE (SOLID_ID + 66)

#define ORGANIC_ID (2 << 12)

#define BANANA_FLESH (ORGANIC_ID + 1)
#define SCHOOL_FOOD (ORGANIC_ID + 2)
#define BANANA_PEEL (ORGANIC_ID + 3)
#define KIWI_FLESH (ORGANIC_ID + 4)
#define PINEAPPLE_FLESH (ORGANIC_ID + 5)
#define PLANT_FIBER (ORGANIC_ID + 6)
#define MUTANT_PLANT_FIBER (ORGANIC_ID + 7)
#define BONE (ORGANIC_ID + 8)
#define BREAD (ORGANIC_ID + 9)
#define HOLY_BANANA_FLESH (ORGANIC_ID + 10)
#define CARROT_FLESH (ORGANIC_ID + 11)
#define OMMEL_CERUMEN (ORGANIC_ID + 12)
#define OMMEL_BONE (ORGANIC_ID + 13)
#define OMMEL_TOOTH (ORGANIC_ID + 14)

#define GAS_ID (3 << 12)

#define AIR (GAS_ID + 1)
#define MAGICAL_AIR (GAS_ID + 2)
#define SMOKE (GAS_ID + 3)
#define SKUNK_SMELL (GAS_ID + 4)
#define GHOST (GAS_ID + 5)
#define MAGIC_VAPOUR (GAS_ID + 6)
#define EVIL_WONDER_STAFF_VAPOUR (GAS_ID + 7)
#define GOOD_WONDER_STAFF_VAPOUR (GAS_ID + 8)
#define FART (GAS_ID + 9)
#define MUSTARD_GAS (GAS_ID + 10)

#define LIQUID_ID (4 << 12)

#define OMMEL_URINE (LIQUID_ID + 1)
#define PEPSI (LIQUID_ID + 2)
#define WATER (LIQUID_ID + 3)
#define HEALING_LIQUID (LIQUID_ID + 4)
#define BLOOD (LIQUID_ID + 5)
#define BROWN_SLIME (LIQUID_ID + 6)
#define POISON_LIQUID (LIQUID_ID + 7)
#define VALDEMAR (LIQUID_ID + 8)
#define ANTIDOTE_LIQUID (LIQUID_ID + 9)
#define VODKA (LIQUID_ID + 10)
#define TROLL_BLOOD (LIQUID_ID + 11)
#define DARK_FROG_BLOOD (LIQUID_ID + 12)
#define SPIDER_BLOOD (LIQUID_ID + 13)
#define VOMIT (LIQUID_ID + 14)
#define ACIDOUS_BLOOD (LIQUID_ID + 15)
#define SULPHURIC_ACID (LIQUID_ID + 16)
#define DOG_DROOL (LIQUID_ID + 17)
#define PEA_SOUP (LIQUID_ID + 18)
#define OMMEL_SWEAT (LIQUID_ID + 19)
#define OMMEL_TEARS (LIQUID_ID + 20)
#define OMMEL_SNOT (LIQUID_ID + 21)
#define SWEAT (LIQUID_ID + 22)
#define GLOWING_BLOOD (LIQUID_ID + 23)
#define YELLOW_SLIME (LIQUID_ID + 24)
#define SICK_BLOOD (LIQUID_ID + 25)
#define MUSTARD_GAS_LIQUID (LIQUID_ID + 26)

#define FLESH_ID (5 << 12)

#define GOBLINOID_FLESH (FLESH_ID + 1)
#define PORK (FLESH_ID + 2)
#define BEEF (FLESH_ID + 3)
#define FROG_FLESH (FLESH_ID + 4)
#define ELPURI_FLESH (FLESH_ID + 5)
#define HUMAN_FLESH (FLESH_ID + 6)
#define DOLPHIN_FLESH (FLESH_ID + 7)
#define BEAR_FLESH (FLESH_ID + 8)
#define WOLF_FLESH (FLESH_ID + 9)
#define DOG_FLESH (FLESH_ID + 10)
#define ENNER_BEAST_FLESH (FLESH_ID + 11)
#define SPIDER_FLESH (FLESH_ID + 12)
#define JACKAL_FLESH (FLESH_ID + 13)
#define MUTANT_ASS_FLESH (FLESH_ID + 14)
#define BAT_FLESH (FLESH_ID + 15)
#define WERE_WOLF_FLESH (FLESH_ID + 16)
#define KOBOLD_FLESH (FLESH_ID + 17)
#define GIBBERLING_FLESH (FLESH_ID + 18)
#define CAT_FLESH (FLESH_ID + 19)
#define RAT_FLESH (FLESH_ID + 20)
#define ANGEL_FLESH (FLESH_ID + 21)
#define DWARF_FLESH (FLESH_ID + 22)
#define DAEMON_FLESH (FLESH_ID + 23)
#define MAMMOTH_FLESH (FLESH_ID + 24)
#define BLACK_UNICORN_FLESH (FLESH_ID + 25)
#define GRAY_UNICORN_FLESH (FLESH_ID + 26)
#define WHITE_UNICORN_FLESH (FLESH_ID + 27)
#define LION_FLESH (FLESH_ID + 28)
#define BUFFALO_FLESH (FLESH_ID + 29)
#define SNAKE_FLESH (FLESH_ID + 30)
#define ORC_FLESH (FLESH_ID + 31)
#define OSTRICH_FLESH (FLESH_ID + 32)
#define CHAMELEON_FLESH (FLESH_ID + 33)
#define FLOATING_EYE_FLESH (FLESH_ID + 34)
#define MUSHROOM_FLESH (FLESH_ID + 35)
#define MOOSE_FLESH (FLESH_ID + 36)
#define MAGPIE_FLESH (FLESH_ID + 37)
#define SKUNK_FLESH (FLESH_ID + 38)
#define HEDGEHOG_FLESH (FLESH_ID + 39)
#define MUTANT_BUNNY_FLESH (FLESH_ID + 40)
#define HATTIFATTENER_FLESH (FLESH_ID + 41)
#define BLINK_DOG_FLESH (FLESH_ID + 42)
#define MAGIC_MUSHROOM_FLESH (FLESH_ID + 43)
#define SICK_SPIDER_FLESH (FLESH_ID + 44)

#define POWDER_ID (6 << 12)

#define GUN_POWDER (POWDER_ID + 1)
#define SNOW (POWDER_ID + 2)
#define SAND (POWDER_ID + 3)

#define IRON_ALLOY_ID (7 << 12)

#define IRON (IRON_ALLOY_ID + 1)
#define STEEL (IRON_ALLOY_ID + 2)
#define METEORIC_STEEL (IRON_ALLOY_ID + 3)
#define ADAMANT (IRON_ALLOY_ID + 4)

#define LONG_SWORD 1
#define TWO_HANDED_SWORD 2
#define TWO_HANDED_SCIMITAR 3
#define SPEAR 4
#define AXE 5
#define HALBERD 6
#define MACE 7
#define WAR_HAMMER 8
#define SICKLE 9
#define DAGGER 10
#define SHORT_SWORD 11
#define BASTARD_SWORD 12
#define BATTLE_AXE 13
#define SCYTHE 14
#define QUARTER_STAFF 15
#define HAMMER 16

#define GOROVITS_HAMMER 1
#define GOROVITS_SICKLE 2
#define GOROVITS_SCIMITAR 3

#define CHAIN_MAIL 1
#define PLATE_MAIL 2
#define ARMOR_OF_GREAT_HEALTH 3

#define CHEAP 1
#define EXPENSIVE 2

#define WAND_OF_POLYMORPH 1
#define WAND_OF_STRIKING 2
#define WAND_OF_FIRE_BALLS 3
#define WAND_OF_TELEPORTATION 4
#define WAND_OF_HASTE 5
#define WAND_OF_SLOW 6
#define WAND_OF_RESURRECTION 7
#define WAND_OF_DOOR_CREATION 8
#define WAND_OF_INVISIBILITY 9
#define WAND_OF_CLONING 10
#define WAND_OF_LIGHTNING 11
#define WAND_OF_ACID_RAIN 12
#define WAND_OF_MIRRORING 13
#define WAND_OF_NECROMANCY 14

#define RUNED_WHIP 1

#define BIG_MINE 1

#define CLOAK_OF_INVISIBILITY 1
#define CLOAK_OF_FIRE_RESISTANCE 2
#define CLOAK_OF_ELECTRICITY_RESISTANCE 3
#define CLOAK_OF_ACID_RESISTANCE 4
#define CLOAK_OF_SHADOWS 5

#define LOST_RUBY_FLAMING_SWORD 2

#define BOOT_OF_STRENGTH 1
#define BOOT_OF_AGILITY 2
#define BOOT_OF_KICKING 3

#define GAUNTLET_OF_STRENGTH 1
#define GAUNTLET_OF_DEXTERITY 2

#define RING_OF_FIRE_RESISTANCE 1
#define RING_OF_POLYMORPH_CONTROL 2
#define RING_OF_INFRA_VISION 3
#define RING_OF_TELEPORTATION 4
#define RING_OF_TELEPORT_CONTROL 5
#define RING_OF_POLYMORPH 6
#define RING_OF_POISON_RESISTANCE 7
#define RING_OF_INVISIBILITY 8
#define RING_OF_ELECTRICITY_RESISTANCE 9
#define RING_OF_SEARCHING 10
#define RING_OF_ACID_RESISTANCE 11

#define AMULET_OF_LIFE_SAVING 1
#define AMULET_OF_ESP 2

#define FULL_HELMET 1
#define HELM_OF_PERCEPTION 2
#define HELM_OF_UNDERSTANDING 3
#define HELM_OF_BRILLIANCE 4
#define HELM_OF_ATTRACTIVITY 5
#define GOROVITS_FAMILY_GAS_MASK 6

#define BELT_OF_CARRYING 1
#define BELT_OF_LEVITATION 2

#define SMALL_CHEST 1
#define CHEST 2
#define LARGE_CHEST 3
#define STRONG_BOX 4

#define BRAVERY 1
#define FEAR 2

#define ROOKIE 1
#define VETERAN 2
#define EUNUCH 3
#define PATROL 4
#define SHOP 5
#define ELITE 6
#define MASTER 7
#define GRAND_MASTER 8

#define DARK 1
#define GREATER_DARK 2
#define GIANT_DARK 3
#define LIGHT 4
#define GREATER_LIGHT 5
#define GIANT_LIGHT 6

#define WARRIOR 1
#define WAR_LORD 2

#define BERSERKER 1
#define BUTCHER 2
#define PRINCE 3
#define KING 4

#define CONICAL 1
#define FLAT 2

#define LARGE 1
#define GIANT 2

#define BLACK_BEAR 1
#define GRIZZLY_BEAR 2
#define CAVE_BEAR 3
#define POLAR_BEAR 4

#define ZOMBIE_OF_KHAZ_ZADM 1

#define TORTURING_CHIEF 1
#define WHIP_CHAMPION 2
#define WAR_LADY 3
#define QUEEN 4

#define CHIEFTAIN 1
#define LORD 2
#define PATRIARCH 3

#define GREATER 1
#define GIANT 2

#define SLAUGHTERER 1
#define SQUAD_LEADER 2
#define OFFICER 3
#define GENERAL 4
#define MARSHAL 5

#define APPRENTICE 1
#define BATTLE_MAGE 2
#define ELDER 3
#define ARCH_MAGE 4

/* Least significant bit defines sex */

#define BABY_MALE 2
#define BABY_FEMALE 3
#define ADULT_MALE 4
#define ADULT_FEMALE 5

#define APPRENTICE_NECROMANCER 1
#define MASTER_NECROMANCER 2
#define IMPRISONED_NECROMANCER 9

#define HUSBAND 1
#define WIFE 2
#define CHILD 3

#define BOY 1
#define GIRL 2

#define PARQUET 1
#define FLOOR 2
#define GROUND 3
#define GRASS_TERRAIN 4
#define LANDING_SITE 5
#define SNOW_TERRAIN 6
#define DARK_GRASS_TERRAIN 7
#define SAND_TERRAIN 8

#define POOL 1
#define UNDERGROUND_LAKE 2

#define BRICK_FINE 1
#define BRICK_PROPAGANDA 2
#define BRICK_OLD 3
#define BRICK_PRIMITIVE 4
#define BRICK_PRIMITIVE_PROPAGANDA 5
#define STONE_WALL 6
#define ICE_WALL 7
#define BROKEN_WALL 8

#define PINE 1
#define FIR 2
#define HOLY_TREE 3
#define CARPET 4
#define COUCH 5
#define DOUBLE_BED 6
#define POOL_BORDER 7
#define POOL_CORNER 8
#define PALM 9
#define SNOW_PINE 10
#define SNOW_FIR 11
#define ANVIL 12
#define SHARD 13
#define CACTUS 14
#define OAK 15
#define BIRCH 16
#define TEAK 17
#define DWARF_BIRCH 18

#define SNOW_BOULDER 4

#define OREE_LAIR_ENTRY 300
#define OREE_LAIR_EXIT 400
#define SUMO_ARENA_ENTRY 700
#define SUMO_ARENA_EXIT 800

#define BOOK_CASE 1
#define CHEST_OF_DRAWERS 2
#define SHELF 3

#define BROKEN_BARWALL 1
#define SECRET_DOOR 2

#define ROOM_NORMAL 1
#define ROOM_SHOP 2
#define ROOM_CATHEDRAL 3
#define ROOM_LIBRARY 4
#define ROOM_BANANA_DROP_AREA 5
#define ROOM_SUMO_ARENA 6

#endif
