//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocalAuthenticationCore/NSObject-Protocol.h>

@protocol LACOnenessSessionMonitorObserver;

@protocol LACOnenessSessionMonitoring <NSObject>
@property(readonly, nonatomic) _Bool isSessionActive;
@property(readonly, nonatomic) _Bool isMonitoring;
- (void)removeObserver:(id <LACOnenessSessionMonitorObserver>)arg1;
- (void)addObserver:(id <LACOnenessSessionMonitorObserver>)arg1;
- (void)stopMonitoring;
- (void)startMonitoring;
@end

