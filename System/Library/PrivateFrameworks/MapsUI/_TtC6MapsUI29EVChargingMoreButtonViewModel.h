//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

__attribute__((visibility("hidden")))
@interface _TtC6MapsUI29EVChargingMoreButtonViewModel : NSObject
{
    MISSING_TYPE *titleString;	// 8 = 0x8
    MISSING_TYPE *symbolName;	// 24 = 0x18
    MISSING_TYPE *actionBlock;	// 40 = 0x28
    MISSING_TYPE *isEnabled;	// 56 = 0x38
    MISSING_TYPE *actionStyle;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000014e80
- (id)init;	// IMP=0x0000000000014e30
@property(nonatomic, readonly) long long actionStyle; // @synthesize actionStyle;
- (_Bool)isEnabled;	// IMP=0x0000000000014d10
@property(nonatomic, copy) CDUnknownBlockType actionBlock;
@property(nonatomic, readonly) NSString *symbolName;
@property(nonatomic, readonly) NSString *titleString;

// Remaining properties
@property(nonatomic, readonly) _Bool enabled; // @synthesize enabled=isEnabled;

@end

