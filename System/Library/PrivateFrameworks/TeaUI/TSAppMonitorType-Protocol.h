//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol TSAppMonitorType;

@protocol TSAppMonitorType
- (id <TSAppMonitorType>)onWindowWillBecomeForegroundWithBlock:(void (^)(void))arg1;
- (id <TSAppMonitorType>)onWindowDidBecomeBackgroundWithBlock:(void (^)(void))arg1;
@property(nonatomic, readonly) _Bool isTracking;
@property(nonatomic) _Bool isActive;
@end

