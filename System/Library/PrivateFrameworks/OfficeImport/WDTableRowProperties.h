//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class WDCharacterProperties, WDTableProperties;

__attribute__((visibility("hidden")))
@interface WDTableRowProperties : NSObject
{
    WDTableProperties *mTableProperties;	// 8 = 0x8
    WDCharacterProperties *mCharacterProperties;	// 16 = 0x10
    unsigned int mOriginal:1;	// 24 = 0x18
    unsigned int mTracked:1;	// 24 = 0x18
    unsigned int mResolved:1;	// 24 = 0x18
    CDStruct_43955328 mOriginalProperties;	// 32 = 0x20
    CDStruct_43955328 mTrackedProperties;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000404034
- (id)description;	// IMP=0x0000000000403ff6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000403f23
- (_Bool)isHeaderOverridden;	// IMP=0x0000000000403ee8
- (void)setHeader:(_Bool)arg1;	// IMP=0x00000000001dd9d6
- (_Bool)header;	// IMP=0x0000000000403ebe
- (_Bool)isHeightTypeOverridden;	// IMP=0x0000000000403e7c
- (void)setHeightType:(int)arg1;	// IMP=0x0000000000159cb8
- (int)heightType;	// IMP=0x0000000000403e4b
- (_Bool)isHeightOverridden;	// IMP=0x00000000000fb956
- (void)setHeight:(long long)arg1;	// IMP=0x0000000000159ce6
- (long long)height;	// IMP=0x000000000015c69f
- (_Bool)isWidthAfterTypeOverridden;	// IMP=0x0000000000403e09
- (void)setWidthAfterType:(int)arg1;	// IMP=0x00000000001de1a9
- (int)widthAfterType;	// IMP=0x0000000000403dd8
- (_Bool)isWidthAfterOverridden;	// IMP=0x0000000000403d96
- (void)setWidthAfter:(short)arg1;	// IMP=0x00000000001de17a
- (short)widthAfter;	// IMP=0x0000000000403d66
- (_Bool)isWidthBeforeTypeOverridden;	// IMP=0x0000000000403d25
- (void)setWidthBeforeType:(int)arg1;	// IMP=0x0000000000162772
- (int)widthBeforeType;	// IMP=0x0000000000403cf4
- (_Bool)isWidthBeforeOverridden;	// IMP=0x0000000000403caf
- (void)setWidthBefore:(short)arg1;	// IMP=0x0000000000162743
- (short)widthBefore;	// IMP=0x0000000000403c7f
- (void)addProperties:(id)arg1;	// IMP=0x0000000000403c0d
- (void)setResolveMode:(int)arg1;	// IMP=0x00000000000e7b22
- (int)resolveMode;	// IMP=0x0000000000403beb
- (id)characterProperties;	// IMP=0x00000000000e7c8e
- (id)tableProperties;	// IMP=0x00000000000e7b14
- (id)initWithDocument:(id)arg1;	// IMP=0x00000000000e74ad
- (id)init;	// IMP=0x0000000000403bdd
- (void)addPropertiesValues:(CDStruct_43955328 *)arg1 to:(CDStruct_43955328 *)arg2;	// IMP=0x000000000040405c

@end
