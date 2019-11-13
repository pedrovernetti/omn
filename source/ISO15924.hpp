#pragma once
#ifndef _OMN_ISO15924_INCLUDED
#define _OMN_ISO15924_INCLUDED

#include "globalUtilities.hpp"

namespace omn
{
	enum ISO15924ScriptCode : byte
	{
		Zxxx = 0,	// Code for unwritten documents
		Adlm = 1,	// Adlam
		Afak,		// Afaka
		Aghb,		// Caucasian Albanian
		Ahom,		// Ahom
		Arab,		// Arabic
		//Aran,		// Nastaliq Arabic
		Armi,		// Imperial Aramaic
		Armn,		// Armenian
		Avst,		// Avestan
		Bali,		// Balinese
		Bamu,		// Bamum
		Bass,		// Bassa Vah
		Batk,		// Batak
		Beng,		// Bengali (Bangla)
		Bhks,		// Bhaiksuki
		Blis,		// Blissymbols
		Bopo,		// Bopomofo
		Brah,		// Brahmi
		Brai,		// Braille
		Bugi,		// Buginese
		Buhd,		// Buhid
		Cakm,		// Chakma
		Cans,		// Unified Canadian Aboriginal Syllabics
		Cari,		// Carian
		Cham,		// Cham
		Cher,		// Cherokee
		Cirt,		// Cirth
		Copt,		// Coptic
		Cpmn,		// Cypro-Minoan
		Cprt,		// Cypriot syllabary
		Cyrl,		// Cyrillic
		//Cyrs,		// Slavonic Cyrillic
		Deva,		// Devanagari (Nagari)
		Dogr,		// Dogra
		Dsrt,		// Deseret (Mormon)
		Dupl,		// Duployan shorthand, Duployan stenography
		Egyd,		// Egyptian demotic
		Egyh,		// Egyptian hieratic
		Egyp,		// Egyptian hieroglyphs
		Elba,		// Elbasan
		Elym,		// Elymaic
		Ethi,		// Ethiopic (Ge'ez)
		//Geok,		// Khutsuri (Asomtavruli and Nuskhuri)
		Geor,		// Georgian (Mkhedruli and Mtavruli)
		Glag,		// Glagolitic
		Gong,		// Gunjala Gondi
		Gonm,		// Masaram Gondi
		Goth,		// Gothic
		Gran,		// Grantha
		Grek,		// Greek
		Gujr,		// Gujarati
		Guru,		// Gurmukhi
		Hanb,		// Han + Bopomofo
		Hang,		// Hangul
		Hani,		// Han (Hanzi, Kanji, Hanja)
		Hano,		// Hanunoo
		Hans,		// Simplified Han
		Hant,		// Traditional Han
		Hatr,		// Hatran
		Hebr,		// Hebrew
		Hira,		// Hiragana
		Hluw,		// Anatolian (Luwian/Hittite) Hieroglyphs
		Hmng,		// Pahawh Hmong
		Hmnp,		// Nyiakeng Puachue Hmong
		Hrkt,		// Japanese syllabaries (Hiragana + Katakana)
		Hung,		// Old Hungarian (Hungarian Runic)
		Inds,		// Indus (Harappan)
		Ital,		// Old Italic (Etruscan, Oscan, etc.)
		Jamo,		// Jamo (Jamo subset of Hangul)
		Java,		// Javanese
		Jpan,		// Japanese (Han + Hiragana + Katakana)
		Jurc,		// Jurchen
		Kali,		// Kayah Li
		Kana,		// Katakana
		Khar,		// Kharoshthi
		Khmr,		// Khmer
		Khoj,		// Khojki
		Kitl,		// Khitan large script
		Kits,		// Khitan small script
		Knda,		// Kannada
		Kore,		// Korean (Hangul + Han)
		Kpel,		// Kpelle
		Kthi,		// Kaithi
		Lana,		// Tai Tham (Lanna)
		Laoo,		// Lao
		//Latf,		// Fraktur Latin
		//Latg,		// Gaelic Latin
		Latn,		// Latin
		Leke,		// Leke
		Lepc,		// Lepcha
		Limb,		// Limbu
		Lina,		// Linear A
		Linb,		// Linear B
		Lisu,		// Lisu (Fraser)
		Loma,		// Loma
		Lyci,		// Lycian
		Lydi,		// Lydian
		Mahj,		// Mahajani
		Maka,		// Makasar
		Mand,		// Mandaic, Mandaean
		Mani,		// Manichaean
		Marc,		// Marchen
		Maya,		// Mayan hieroglyphs
		Medf,		// Medefaidrin (Oberi Okaime)
		Mend,		// Mende Kikakui
		Merc,		// Meroitic Cursive
		Mero,		// Meroitic Hieroglyphs
		Mlym,		// Malayalam
		Modi,		// Modi
		Mong,		// Mongolian
		Moon,		// Moon (Moon code/script/type)
		Mroo,		// Mro, Mru
		Mtei,		// Meitei Mayek
		Mult,		// Multani
		Mymr,		// Myanmar (Burmese)
		Nand,		// Nandinagari
		Narb,		// Old North Arabian
		Nbat,		// Nabataean
		Newa,		// Newa, Newar, Newari, Nepala lipi
		Nkdb,		// Naxi Dongba
		Nkgb,		// Nakhi Geba
		Nkoo,		// N’Ko
		Nshu,		// Nüshu
		Ogam,		// Ogham
		Olck,		// Ol Chiki (Ol Cemet', Ol, Santali)
		Orkh,		// Old Turkic, Orkhon Runic
		Orya,		// Oriya (Odia)
		Osge,		// Osage
		Osma,		// Osmanya
		Palm,		// Palmyrene
		Pauc,		// Pau Cin Hau
		Perm,		// Old Permic
		Phag,		// Phags-pa
		Phli,		// Inscriptional Pahlavi
		Phlp,		// Psalter Pahlavi
		Phlv,		// Book Pahlavi
		Phnx,		// Phoenician
		Piqd,		// Klingon
		Plrd,		// Miao (Pollard)
		Prti,		// Inscriptional Parthian
		/*
		Qaaa .. Qabx is reserved for private use
		*/
		Rjng,		// Rejang (Redjang, Kaganga)
		Rohg,		// Hanifi Rohingya
		Roro,		// Rongorongo
		Runr,		// Runic
		Samr,		// Samaritan
		Sara,		// Sarati
		Sarb,		// Old South Arabian
		Saur,		// Saurashtra
		Sgnw,		// SignWriting
		Shaw,		// Shavian (Shaw)
		Shrd,		// Sharada
		Shui,		// Shuishu
		Sidd,		// Siddham
		Sind,		// Khudawadi, Sindhi
		Sinh,		// Sinhala
		Sogd,		// Sogdian
		Sogo,		// Old Sogdian
		Sora,		// Sora Sompeng
		Soyo,		// Soyombo
		Sund,		// Sundanese
		Sylo,		// Syloti Nagri
		Syrc,		// Syriac
		//Syre,		// Estrangelo Syriac
		//Syrj,		// Western Syriac
		//Syrn,		// Eastern Syriac
		Tagb,		// Tagbanwa
		Takr,		// Takri
		Tale,		// Tai Le
		Talu,		// New Tai Lue
		Taml,		// Tamil
		Tang,		// Tangut
		Tavt,		// Tai Viet
		Telu,		// Telugu
		Teng,		// Tengwar
		Tfng,		// Tifinagh (Berber)
		Tglg,		// Tagalog (Baybayin, Alibata)
		Thaa,		// Thaana
		Thai,		// Thai
		Tibt,		// Tibetan
		Tirh,		// Tirhuta
		Ugar,		// Ugaritic
		Vaii,		// Vai
		Visp,		// Visible Speech
		Wara,		// Warang Citi
		Wcho,		// Wancho
		Wole,		// Woleai
		Xpeo,		// Old Persian
		Xsux,		// Sumero-Akkadian Cuneiform
		Yiii,		// Yi
		Zanb,		// Zanabazar Square
		Zinh,		// Code for inherited script
		Zmth,		// Mathematical notation
		Zsym,		// Symbols
		Zsye,		// Emoji
		Zyyy,		// Code for undetermined script
		Zzzz		// Code for uncoded script
	};
}

namespace // internal parts
{
	constexpr const byte ISO15924CodesCount = omn::ISO15924ScriptCode::Zzzz + 1;
	
	constexpr const omn::unicode::UTF8Character * ISO15924CodeStrings[ISO15924CodesCount] =
	{
		u8"Zxxx",
		u8"Adlm",
		u8"Afak",
		u8"Aghb",
		u8"Ahom",
		u8"Arab",
		//u8"Aran",
		u8"Armi",
		u8"Armn",
		u8"Avst",
		u8"Bali",
		u8"Bamu",
		u8"Bass",
		u8"Batk",
		u8"Beng",
		u8"Bhks",
		u8"Blis",
		u8"Bopo",
		u8"Brah",
		u8"Brai",
		u8"Bugi",
		u8"Buhd",
		u8"Cakm",
		u8"Cans",
		u8"Cari",
		u8"Cham",
		u8"Cher",
		u8"Cirt",
		u8"Copt",
		u8"Cpmn",
		u8"Cprt",
		u8"Cyrl",
		//u8"Cyrs",
		u8"Deva",
		u8"Dogr",
		u8"Dsrt",
		u8"Dupl",
		u8"Egyd",
		u8"Egyh",
		u8"Egyp",
		u8"Elba",
		u8"Elym",
		u8"Ethi",
		//u8"Geok",
		u8"Geor",
		u8"Glag",
		u8"Gong",
		u8"Gonm",
		u8"Goth",
		u8"Gran",
		u8"Grek",
		u8"Gujr",
		u8"Guru",
		u8"Hanb",
		u8"Hang",
		u8"Hani",
		u8"Hano",
		u8"Hans",
		u8"Hant",
		u8"Hatr",
		u8"Hebr",
		u8"Hira",
		u8"Hluw",
		u8"Hmng",
		u8"Hmnp",
		u8"Hrkt",
		u8"Hung",
		u8"Inds",
		u8"Ital",
		u8"Jamo",
		u8"Java",
		u8"Jpan",
		u8"Jurc",
		u8"Kali",
		u8"Kana",
		u8"Khar",
		u8"Khmr",
		u8"Khoj",
		u8"Kitl",
		u8"Kits",
		u8"Knda",
		u8"Kore",
		u8"Kpel",
		u8"Kthi",
		u8"Lana",
		u8"Laoo",
		//u8"Latf",
		//u8"Latg",
		u8"Latn",
		u8"Leke",
		u8"Lepc",
		u8"Limb",
		u8"Lina",
		u8"Linb",
		u8"Lisu",
		u8"Loma",
		u8"Lyci",
		u8"Lydi",
		u8"Mahj",
		u8"Maka",
		u8"Mand",
		u8"Mani",
		u8"Marc",
		u8"Maya",
		u8"Medf",
		u8"Mend",
		u8"Merc",
		u8"Mero",
		u8"Mlym",
		u8"Modi",
		u8"Mong",
		u8"Moon",
		u8"Mroo",
		u8"Mtei",
		u8"Mult",
		u8"Mymr",
		u8"Nand",
		u8"Narb",
		u8"Nbat",
		u8"Newa",
		u8"Nkdb",
		u8"Nkgb",
		u8"Nkoo",
		u8"Nshu",
		u8"Ogam",
		u8"Olck",
		u8"Orkh",
		u8"Orya",
		u8"Osge",
		u8"Osma",
		u8"Palm",
		u8"Pauc",
		u8"Perm",
		u8"Phag",
		u8"Phli",
		u8"Phlp",
		u8"Phlv",
		u8"Phnx",
		u8"Piqd",
		u8"Plrd",
		u8"Prti",
		/*
		u8"Qaaa" .. u8"Qabx"
		*/
		u8"Rjng",
		u8"Rohg",
		u8"Roro",
		u8"Runr",
		u8"Samr",
		u8"Sara",
		u8"Sarb",
		u8"Saur",
		u8"Sgnw",
		u8"Shaw",
		u8"Shrd",
		u8"Shui",
		u8"Sidd",
		u8"Sind",
		u8"Sinh",
		u8"Sogd",
		u8"Sogo",
		u8"Sora",
		u8"Soyo",
		u8"Sund",
		u8"Sylo",
		u8"Syrc",
		//u8"Syre",
		//u8"Syrj",
		//u8"Syrn",
		u8"Tagb",
		u8"Takr",
		u8"Tale",
		u8"Talu",
		u8"Taml",
		u8"Tang",
		u8"Tavt",
		u8"Telu",
		u8"Teng",
		u8"Tfng",
		u8"Tglg",
		u8"Thaa",
		u8"Thai",
		u8"Tibt",
		u8"Tirh",
		u8"Ugar",
		u8"Vaii",
		u8"Visp",
		u8"Wara",
		u8"Wcho",
		u8"Wole",
		u8"Xpeo",
		u8"Xsux",
		u8"Yiii",
		u8"Zanb",
		u8"Zinh",
		u8"Zmth",
		u8"Zsym",
		u8"Zsye",
		u8"Zyyy",
		u8"Zzzz"
	};
}

namespace omn
{
	constexpr const unicode::UTF8Character * ISO15924CodeString( ISO15924ScriptCode code )
	{
		return ISO15924CodeStrings[((code >= ISO15924CodesCount) ? ISO15924ScriptCode::Zyyy : code)];
	}
}

namespace std
{
    inline string to_string( const omn::ISO15924ScriptCode code )
    {
        return omn::ISO15924CodeString(code);
    }    
    
	inline ostream & operator << ( ostream & os, const omn::ISO15924ScriptCode code )
	{
		os << omn::ISO15924CodeString(code);
		return os;
	}
}

#endif // _OMN_ISO15924_INCLUDED
