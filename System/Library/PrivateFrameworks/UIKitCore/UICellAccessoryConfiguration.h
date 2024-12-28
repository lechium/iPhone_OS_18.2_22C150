//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface UICellAccessoryConfiguration : NSObject
{
    _Bool _leadingAlwaysNeedsLayout;	// 8 = 0x8
    _Bool _trailingAlwaysNeedsLayout;	// 9 = 0x9
    NSArray *_leadingAccessories;	// 16 = 0x10
    NSArray *_trailingAccessories;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000015b1a88
@property(copy, nonatomic) NSArray *trailingAccessories; // @synthesize trailingAccessories=_trailingAccessories;
@property(copy, nonatomic) NSArray *leadingAccessories; // @synthesize leadingAccessories=_leadingAccessories;
- (_Bool)alwaysNeedsLayout;	// IMP=0x00000000015b1a5f
- (id)description;	// IMP=0x00000000015b1746
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000015b154f
- (id)init;	// IMP=0x00000000015b14ec

@end
