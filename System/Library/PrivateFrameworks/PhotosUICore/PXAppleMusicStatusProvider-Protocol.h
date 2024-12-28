//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSError, PXObservable;

@protocol PXAppleMusicStatusProvider
@property(readonly, nonatomic) NSError *error;
@property(readonly, nonatomic) PXObservable *observable;
- (void)startGatheringCapabilityStatuses;
- (void)requestStatusForCapability:(long long)arg1 handler:(void (^)(long long, NSError *))arg2;
- (long long)statusForCapability:(long long)arg1;
@end
