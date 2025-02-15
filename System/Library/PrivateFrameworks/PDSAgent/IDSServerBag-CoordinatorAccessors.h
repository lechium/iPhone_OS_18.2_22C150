//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IDSFoundation/IDSServerBag.h>

@class NSArray, NSNumber;

@interface IDSServerBag (CoordinatorAccessors)
- (_Bool)_valuesDefinedAsNumbersInBagForKeys:(id)arg1;	// IMP=0x003000000000a493
- (long long)ttlGracePeriodFromDefault;	// IMP=0x003000000000a466
- (long long)ttlWindowFromDefault;	// IMP=0x003000000000a438
- (long long)ttlFromDefault;	// IMP=0x003000000000a333
@property(readonly, nonatomic) NSArray *nonCoalescingTopicsFromBag;
@property(readonly, nonatomic) _Bool allRequiredBagTTLValuesPresent;
@property(readonly, nonatomic) _Bool allRequiredBagCoalescingValuesPresent;
@property(readonly, nonatomic) NSNumber *minEnabledVersion;
@property(readonly, nonatomic) _Bool bagKillSwitchActive;
@property(readonly, nonatomic) double messageTimeoutFromBag;
@property(readonly, nonatomic) double coalesceMaxPeriodFromBag;
@property(readonly, nonatomic) double coalescePeriodFromBag;
@property(readonly, nonatomic) double coalesceDelayFromBag;
@property(readonly, nonatomic) long long ttlGracePeriodFromBag;
@property(readonly, nonatomic) long long ttlWindowFromBag;
@property(readonly, nonatomic) long long ttlFromBag;
- (_Bool)topicAvoidsCoalescing:(id)arg1;	// IMP=0x0030000000009a2d
@end

