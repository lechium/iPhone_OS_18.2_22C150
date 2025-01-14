//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/NSObject-Protocol.h>

@class NSUUID;

@protocol HKNanoSyncControlServer <NSObject>
- (void)remote_waitForLastChanceSyncWithDevicePairingID:(NSUUID *)arg1 timeout:(double)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)remote_resetNanoSyncWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)remote_forceNanoSyncWithOptions:(unsigned long long)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_fetchNanoSyncPairedDevicesWithCompletion:(void (^)(HKNanoSyncPairedDevicesSnapshot *, NSError *))arg1;
@end

