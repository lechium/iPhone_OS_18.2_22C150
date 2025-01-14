//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class WDDocument, WDListLevel;

__attribute__((visibility("hidden")))
@interface WDListLevelOverride : NSObject
{
    WDDocument *mDocument;	// 8 = 0x8
    WDListLevel *mListLevel;	// 16 = 0x10
    unsigned char mLevel;	// 24 = 0x18
    long long mStartNumber;	// 32 = 0x20
    _Bool mStartNumberOverridden;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000003f277d
- (id)description;	// IMP=0x00000000003f273f
- (_Bool)isListLevelOverridden;	// IMP=0x00000000003f2731
- (id)mutableListLevel;	// IMP=0x00000000001cb7a8
- (id)listLevel;	// IMP=0x00000000003f2723
- (_Bool)isStartNumberOverridden;	// IMP=0x00000000003f271a
- (void)setStartNumber:(long long)arg1;	// IMP=0x0000000000165899
- (long long)startNumber;	// IMP=0x00000000003f2710
- (unsigned char)level;	// IMP=0x00000000003f2706
- (id)initWithDocument:(id)arg1 level:(unsigned char)arg2;	// IMP=0x00000000003f2683

@end

