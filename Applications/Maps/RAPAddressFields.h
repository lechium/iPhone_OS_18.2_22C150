//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface RAPAddressFields : NSObject
{
    NSString *_freeformAddress;	// 8 = 0x8
    NSString *_floor;	// 16 = 0x10
    NSString *_unit;	// 24 = 0x18
    NSString *_building;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000045825b
@property(copy, nonatomic) NSString *building; // @synthesize building=_building;
@property(copy, nonatomic) NSString *unit; // @synthesize unit=_unit;
@property(copy, nonatomic) NSString *floor; // @synthesize floor=_floor;
@property(copy, nonatomic) NSString *freeformAddress; // @synthesize freeformAddress=_freeformAddress;

@end

