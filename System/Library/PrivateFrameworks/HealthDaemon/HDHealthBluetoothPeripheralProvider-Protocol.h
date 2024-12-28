//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/NSObject-Protocol.h>

@class HDBTLEHeartRateDataCollector, HDFitnessMachineManager, HDHealthServiceManager, HDServiceConnectionManager;

@protocol HDHealthBluetoothPeripheralProvider <NSObject>
@property(readonly, nonatomic) HDBTLEHeartRateDataCollector *blteHeartRateDataCollector;
@property(readonly, nonatomic) HDServiceConnectionManager *serviceConnectionManager;
@property(readonly, nonatomic) HDHealthServiceManager *serviceManager;
@property(readonly, nonatomic) HDFitnessMachineManager *fitnessManager;
- (void)terminationCleanup;
@end
