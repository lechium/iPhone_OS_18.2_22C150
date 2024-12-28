//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/HKUnitTestingTaskServerInterface-Protocol.h>

@class HKDataCollectorState, HKDevice, NSArray, NSDictionary, NSUUID;

@protocol HKDataCollectorTaskServerInterface <HKUnitTestingTaskServerInterface>
- (void)remote_setCollectionState:(HKDataCollectorState *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_synchronizeWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)remote_registerWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)remote_insertDatums:(NSArray *)arg1 device:(HKDevice *)arg2 metadata:(NSDictionary *)arg3 options:(unsigned long long)arg4 batchUUID:(NSUUID *)arg5 registrationUUID:(NSUUID *)arg6 completion:(void (^)(_Bool, NSError *))arg7;
@end
