//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MNNavigationServiceCallbackParameters.h"

@class MISSING_TYPE, MNNavTrayGuidanceEvent;

@interface _TtC10Navigation52MNNavigationServiceCallback_DidUpdateNavTrayGuidance : MNNavigationServiceCallbackParameters
{
    MISSING_TYPE *navTrayGuidanceEvent;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00400000000063d0
- (void).cxx_destruct;	// IMP=0x0000000000006690
- (id)init;	// IMP=0x0000000000006640
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000006550
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000006490
@property(nonatomic, readonly) unsigned long long type;
- (id)initWithNavTrayGuidanceEvent:(id)arg1;	// IMP=0x0000000000006370
@property(nonatomic, readonly) MNNavTrayGuidanceEvent *navTrayGuidanceEvent; // @synthesize navTrayGuidanceEvent;

@end
