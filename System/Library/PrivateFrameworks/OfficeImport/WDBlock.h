//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class WDText;

__attribute__((visibility("hidden")))
@interface WDBlock : NSObject
{
    WDText *mText;	// 8 = 0x8
}

- (id)description;	// IMP=0x000000000041c178
- (void)clearProperties;	// IMP=0x000000000041c172
- (_Bool)isEmpty;	// IMP=0x000000000041c16a
- (id)newRunIterator;	// IMP=0x000000000041c162
- (id)runIterator;	// IMP=0x000000000041c15a
- (id)initWithText:(id)arg1;	// IMP=0x00000000000d7b24
- (id)init;	// IMP=0x000000000041c14c
- (int)textType;	// IMP=0x00000000000d843a
- (id)document;	// IMP=0x00000000000d7da6
- (id)text;	// IMP=0x00000000000e7fc8
- (int)blockType;	// IMP=0x000000000041c144

@end
