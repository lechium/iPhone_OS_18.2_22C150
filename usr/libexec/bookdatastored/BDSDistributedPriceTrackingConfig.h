//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BDSDistributedPriceTrackingConfigNotification, NSArray, NSNumber;

@interface BDSDistributedPriceTrackingConfig : NSObject
{
    NSArray *_itemIDs;	// 8 = 0x8
    NSArray *_updateScheduleSteps;	// 16 = 0x10
    NSNumber *_dealAbsoluteThreshold;	// 24 = 0x18
    NSNumber *_dealRelativeThreshold;	// 32 = 0x20
    BDSDistributedPriceTrackingConfigNotification *_notification;	// 40 = 0x28
    NSNumber *_cardLimit;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000005cdc9
+ (id)disabledConfig;	// IMP=0x001000000005cbbc
- (void).cxx_destruct;	// IMP=0x002000000005d141
@property(readonly, copy, nonatomic) NSNumber *cardLimit; // @synthesize cardLimit=_cardLimit;
@property(readonly, nonatomic) BDSDistributedPriceTrackingConfigNotification *notification; // @synthesize notification=_notification;
@property(readonly, copy, nonatomic) NSNumber *dealRelativeThreshold; // @synthesize dealRelativeThreshold=_dealRelativeThreshold;
@property(readonly, copy, nonatomic) NSNumber *dealAbsoluteThreshold; // @synthesize dealAbsoluteThreshold=_dealAbsoluteThreshold;
@property(readonly, copy, nonatomic) NSArray *updateScheduleSteps; // @synthesize updateScheduleSteps=_updateScheduleSteps;
@property(readonly, copy, nonatomic) NSArray *itemIDs; // @synthesize itemIDs=_itemIDs;
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000005cf51
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000005cdd1
- (id)initWithItemIDs:(id)arg1 updateScheduleSteps:(id)arg2 dealAbsoluteThreshold:(id)arg3 dealRelativeThreshold:(id)arg4 notification:(id)arg5 cardLimit:(id)arg6;	// IMP=0x001000000005cbfa

@end
