//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SKConstraint.h"

@class SKRange;

__attribute__((visibility("hidden")))
@interface SKSizeConstraint : SKConstraint
{
    SKRange *_widthRange;	// 24 = 0x18
    SKRange *_heightRange;	// 32 = 0x20
}

+ (id)constraintWithHeightRange:(id)arg1;	// IMP=0x006000000007d132
+ (id)constraintWithWidthRange:(id)arg1;	// IMP=0x006000000007d088
+ (id)constraintWithWidthRange:(id)arg1 heightRange:(id)arg2;	// IMP=0x006000000007cff4
+ (_Bool)supportsSecureCoding;	// IMP=0x006000000007cabc
- (void).cxx_destruct;	// IMP=0x000000000007d22a
@property(copy) SKRange *heightRange; // @synthesize heightRange=_heightRange;
@property(copy) SKRange *widthRange; // @synthesize widthRange=_widthRange;
- (_Bool)isEqualToSizeConstraint:(id)arg1;	// IMP=0x000000000007ce99
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000007cdc8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000007ccd3
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000007cb92
- (id)initWithWidthRange:(id)arg1 heightRange:(id)arg2;	// IMP=0x000000000007cac4

@end

