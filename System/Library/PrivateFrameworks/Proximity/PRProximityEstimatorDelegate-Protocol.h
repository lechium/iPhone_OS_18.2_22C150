//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Proximity/NSObject-Protocol.h>

@class NSUUID, PRProximityEstimator;

@protocol PRProximityEstimatorDelegate <NSObject>
- (void)estimator:(PRProximityEstimator *)arg1 didEstimateProximity:(long long)arg2 toPeer:(NSUUID *)arg3;
@end
