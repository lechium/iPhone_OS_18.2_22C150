//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface MecabraWordProperties : NSObject
{
    NSString *_analysisString;	// 8 = 0x8
    NSArray *_characterInformation;	// 16 = 0x10
    NSArray *_codeLookupInformation;	// 24 = 0x18
    _Bool _emoji;	// 32 = 0x20
    int _language;	// 36 = 0x24
}

+ (id)sortedRadicalList;	// IMP=0x00600000001423f4
+ (id)searchResultsForString:(id)arg1 dictionary:(struct __IDXIndex *)arg2;	// IMP=0x00600000001422ee
+ (struct __IDXIndex *)codeLookupInformationDictionary;	// IMP=0x0060000000142235
+ (struct __IDXIndex *)characterInformationDictionary;	// IMP=0x006000000014217c
+ (struct __IDXIndex *)informationDictionaryAtPath:(struct __CFURL *)arg1;	// IMP=0x0060000000142140
@property(nonatomic) int language; // @synthesize language=_language;
@property(nonatomic, getter=isEmoji) _Bool emoji; // @synthesize emoji=_emoji;
@property(retain, nonatomic) NSArray *codeLookupInformation; // @synthesize codeLookupInformation=_codeLookupInformation;
@property(retain, nonatomic) NSArray *characterInformation; // @synthesize characterInformation=_characterInformation;
@property(copy, nonatomic) NSString *analysisString; // @synthesize analysisString=_analysisString;
- (id)wubixingCodesForStandard:(int)arg1;	// IMP=0x0000000000143650
- (id)valueForKey:(int)arg1;	// IMP=0x000000000014333f
- (id)isIncludedInCurrentLanguage;	// IMP=0x0000000000143216
- (id)cangjieCodes;	// IMP=0x000000000014308f
- (id)bihuaCodes;	// IMP=0x0000000000142f06
- (id)wubixingCodes;	// IMP=0x0000000000142da5
- (void)dealloc;	// IMP=0x0000000000142d54
- (id)initWithString:(id)arg1 language:(int)arg2;	// IMP=0x0000000000142cf3
- (id)separatedInputCodesForString:(id)arg1;	// IMP=0x0000000000142cc3
- (id)tonesForString:(id)arg1;	// IMP=0x0000000000142b31
- (id)initialsForStrings:(id)arg1;	// IMP=0x0000000000142934
- (id)zhuyinInformationForString:(id)arg1;	// IMP=0x00000000001427ad
- (id)pinyinInformationForString:(id)arg1;	// IMP=0x0000000000142636
- (id)strokeInformationForString:(id)arg1;	// IMP=0x00000000001425cc
- (id)radicalInformationForString:(id)arg1;	// IMP=0x000000000014258f

@end

