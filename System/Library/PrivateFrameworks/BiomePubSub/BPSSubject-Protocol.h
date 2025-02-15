//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BiomePubSub/BPSPublisher-Protocol.h>

@class BPSCompletion, BPSSubscription;

@protocol BPSSubject <BPSPublisher>
- (void)sendValue:(id)arg1;
- (void)sendSubscription:(BPSSubscription *)arg1;
- (void)sendCompletion:(BPSCompletion *)arg1;

@optional
- (void)sendEvent:(id)arg1;
- (void)sendCompletion;
@end

