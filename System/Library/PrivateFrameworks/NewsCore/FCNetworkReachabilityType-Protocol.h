//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NewsCore/NSObject-Protocol.h>

@protocol FCNetworkReachabilityObserving;

@protocol FCNetworkReachabilityType <NSObject>
@property(readonly, nonatomic) long long cellularRadioAccessTechnology;
@property(readonly, nonatomic) long long offlineReason;
@property(readonly, nonatomic) _Bool isNetworkUsageInexpensive;
@property(readonly, nonatomic) _Bool isLowDataModeEnabled;
@property(readonly, nonatomic) _Bool isNetworkReachableViaWiFi;
@property(readonly, nonatomic) _Bool isCloudKitReachable;
@property(readonly, nonatomic) _Bool isNetworkReachable;
- (void)removeObserver:(id <FCNetworkReachabilityObserving>)arg1;
- (void)addObserver:(id <FCNetworkReachabilityObserving>)arg1;
@end
