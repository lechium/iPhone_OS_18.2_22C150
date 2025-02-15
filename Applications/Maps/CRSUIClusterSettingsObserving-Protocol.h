//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class CRSUIClusterWindow;

@protocol CRSUIClusterSettingsObserving <NSObject>

@optional
- (void)clusterWindow:(CRSUIClusterWindow *)arg1 didChangeLayoutJustification:(unsigned long long)arg2;
- (void)clusterWindow:(CRSUIClusterWindow *)arg1 didChangeItemType:(unsigned long long)arg2;
- (void)clusterWindow:(CRSUIClusterWindow *)arg1 didChangeSpeedLimitSetting:(unsigned long long)arg2;
- (void)clusterWindow:(CRSUIClusterWindow *)arg1 didChangeETASetting:(unsigned long long)arg2;
- (void)clusterWindow:(CRSUIClusterWindow *)arg1 didChangeCompassSetting:(unsigned long long)arg2;
- (void)clusterWindow:(CRSUIClusterWindow *)arg1 didZoomInDirection:(long long)arg2;
@end

