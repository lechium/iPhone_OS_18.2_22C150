//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GQDSStyle, GQDWPLayoutStorage;

@interface GQDWPLayoutFrame : NSObject
{
    char *mStyleRef;	// 8 = 0x8
    GQDSStyle *mStyle;	// 16 = 0x10
    GQDWPLayoutStorage *mStorage;	// 24 = 0x18
    unsigned int mTextScale;	// 32 = 0x20
}

- (_Bool)isBlank;	// IMP=0x0000000000020269
- (unsigned int)textScale;	// IMP=0x0000000000020260
- (id)storage;	// IMP=0x0000000000020256
- (id)layoutStyle;	// IMP=0x000000000002024c
- (void)dealloc;	// IMP=0x00000000000201f0
- (void)resolveStyleRef;	// IMP=0x0000000000020393
- (int)readAttributesFromReader:(struct _xmlTextReader *)arg1;	// IMP=0x0000000000020329

@end
