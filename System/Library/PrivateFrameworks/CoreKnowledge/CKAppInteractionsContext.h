//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface CKAppInteractionsContext : NSObject
{
    MISSING_TYPE *_outOfAppLaunchBoundaryDonationsCountByIntentTypeAndBundleId;	// 8 = 0x8
    MISSING_TYPE *numberOfDiscardedDonationsByIntentTypeAndBundleId;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000003215
- (void).cxx_destruct;	// IMP=0x000000000000392b
- (void)updateDiscardedDonations:(double)arg1 forIntentType:(id)arg2 andBundleId:(id)arg3;	// IMP=0x0000000000003880
- (id)copyWithZone:(void *)arg1;	// IMP=0x000000000000326f
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000031f2
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000002dda
- (id)init;	// IMP=0x0000000000002bc3

@end

