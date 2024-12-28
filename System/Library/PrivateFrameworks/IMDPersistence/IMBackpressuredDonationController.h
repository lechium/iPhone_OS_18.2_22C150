//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue;

@interface IMBackpressuredDonationController : NSObject
{
    _Bool _donationInProgress;	// 8 = 0x8
    long long _donationCount;	// 16 = 0x10
    long long _maxBackpressureSize;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    CDUnknownBlockType _donationBlock;	// 40 = 0x28
    NSMutableArray *_pendingDonations;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000036bb1
@property(retain, nonatomic) NSMutableArray *pendingDonations; // @synthesize pendingDonations=_pendingDonations;
@property(nonatomic) _Bool donationInProgress; // @synthesize donationInProgress=_donationInProgress;
@property(copy, nonatomic) CDUnknownBlockType donationBlock; // @synthesize donationBlock=_donationBlock;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) long long maxBackpressureSize; // @synthesize maxBackpressureSize=_maxBackpressureSize;
@property(readonly, nonatomic) long long donationCount; // @synthesize donationCount=_donationCount;
- (void)donateItems:(id)arg1;	// IMP=0x0000000000036a78
- (void)_donateItems:(id)arg1;	// IMP=0x000000000003648b
- (void)_deferItems:(id)arg1;	// IMP=0x0000000000036342
- (void)_finishedDonatingItems:(id)arg1;	// IMP=0x00000000000360dd
- (id)_popDonationsUpToCount:(long long)arg1;	// IMP=0x0000000000035fc9
- (void)_beganDonatingItems;	// IMP=0x0000000000035fb2
- (id)initWithDonationCount:(long long)arg1 maxBackpressureSize:(long long)arg2 donationBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000035eda

@end
