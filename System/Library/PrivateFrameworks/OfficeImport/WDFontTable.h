//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, OITSUNoCopyDictionary;

__attribute__((visibility("hidden")))
@interface WDFontTable : NSObject
{
    OITSUNoCopyDictionary *mFontTable;	// 8 = 0x8
    NSMutableArray *mFontsInOrderOfInsertion;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000003f131a
- (id)description;	// IMP=0x00000000003f12dc
- (id)fontAtIndex:(unsigned long long)arg1;	// IMP=0x00000000003f12c6
- (unsigned long long)indexOfFont:(id)arg1;	// IMP=0x00000000003f12b0
- (id)fonts;	// IMP=0x00000000003f129a
- (id)createFontWithName:(id)arg1;	// IMP=0x00000000000bca61
- (id)fontWithName:(id)arg1 create:(_Bool)arg2;	// IMP=0x00000000000bc9b0
- (id)fontWithName:(id)arg1;	// IMP=0x00000000000bd665
- (void)clear;	// IMP=0x00000000000c3844
- (unsigned long long)count;	// IMP=0x00000000003f1284
- (id)init;	// IMP=0x00000000000bc798

@end
