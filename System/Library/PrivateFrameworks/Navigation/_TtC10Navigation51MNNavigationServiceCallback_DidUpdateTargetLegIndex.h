//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MNNavigationServiceCallbackParameters.h"

@class MISSING_TYPE;

@interface _TtC10Navigation51MNNavigationServiceCallback_DidUpdateTargetLegIndex : MNNavigationServiceCallbackParameters
{
    MISSING_TYPE *targetLegIndex;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0040000000006780
- (id)init;	// IMP=0x0000000000006950
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000068c0
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000006800
@property(nonatomic, readonly) unsigned long long type;
- (id)initWithTargetLegIndex:(long long)arg1;	// IMP=0x0000000000006750
@property(nonatomic, readonly) long long targetLegIndex; // @synthesize targetLegIndex;

@end

