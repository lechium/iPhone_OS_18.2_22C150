//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface PXPhotoStyleElement : NSObject
{
    MISSING_TYPE *id;	// 8 = 0x8
    MISSING_TYPE *semanticStyle;	// 24 = 0x18
    MISSING_TYPE *legacyFilter;	// 72 = 0x48
    MISSING_TYPE *_contentVersion;	// 28844364 = 0x1b8214c
    MISSING_TYPE *observable;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x0000000000301c90
- (id)init;	// IMP=0x0000000000301c30
- (void)resetToDefaultValues;	// IMP=0x0000000000301530
@property(nonatomic, readonly) _Bool hasNonDefaultValues;
- (id)copyWithZone:(void *)arg1;	// IMP=0x00000000003008c0
@property(nonatomic, readonly) NSString *id;
- (_Bool)updateWithTone:(double)arg1 color:(double)arg2 intensity:(double)arg3;	// IMP=0x0000000000302f60
@property(nonatomic, readonly) double defaultIntensity;
@property(nonatomic, readonly) double defaultColor;
@property(nonatomic, readonly) double defaultTone;
@property(nonatomic, readonly) NSString *cast;
@property(nonatomic, readonly) double intensity;
@property(nonatomic, readonly) double color;
@property(nonatomic, readonly) double tone;
@property(nonatomic, readonly) NSString *defaultName;

@end
