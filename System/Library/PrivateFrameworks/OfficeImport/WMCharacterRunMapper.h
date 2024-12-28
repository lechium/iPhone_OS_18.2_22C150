//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, WDCharacterRun, WMStyle;

__attribute__((visibility("hidden")))
@interface WMCharacterRunMapper
{
    WDCharacterRun *wdCharacterRun;	// 40 = 0x28
    WMStyle *mStyle;	// 48 = 0x30
    int mFontSizeBumpFactor;	// 56 = 0x38
    NSString *mText;	// 64 = 0x40
    _Bool mIsDeleted;	// 72 = 0x48
}

+ (void)addNonCollapsableSpanAt:(id)arg1 withState:(id)arg2;	// IMP=0x00600000000f22d0
- (void).cxx_destruct;	// IMP=0x0000000000454422
- (unsigned int)countAndStripLeadingTabs;	// IMP=0x0000000000454292
- (void)mapTabs:(unsigned int)arg1 at:(id)arg2 afterText:(id)arg3;	// IMP=0x00000000000f4246
- (void)mapSubstring:(id)arg1 at:(id)arg2;	// IMP=0x00000000000f2fc1
- (void)mapAt:(id)arg1 withState:(id)arg2;	// IMP=0x00000000000f1b2b
- (void)map1At:(id)arg1 withState:(id)arg2;	// IMP=0x0000000000453fa7
- (_Bool)isDeleted;	// IMP=0x00000000000f207b
- (id)initWithText:(id)arg1;	// IMP=0x0000000000453eb9
- (id)initWithWDCharacterRun:(id)arg1 parent:(id)arg2;	// IMP=0x00000000000f06f0
- (int)defaultTabWidth;	// IMP=0x00000000000f4694
- (id)baseStyle;	// IMP=0x00000000004544f8
- (id)copyCharacterStyle;	// IMP=0x00000000000f0852
- (id)boldStyle;	// IMP=0x0000000000454464

@end
