//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMDCameraSnapshotManagerDataSource : HMFObject
{
}

- (id)createLocalSnapshotSessionWithID:(id)arg1 accessory:(id)arg2 snapshotGetter:(id)arg3 message:(id)arg4 waitPeriod:(double)arg5 reachabilityPath:(unsigned long long)arg6 cameraLocallyReachable:(_Bool)arg7 snapshotForNotification:(_Bool)arg8;	// IMP=0x0000000000b57de5
- (id)createSnapshotRemoteRelayReceiverWithSessionID:(id)arg1 workQueue:(id)arg2 accessory:(id)arg3 delegate:(id)arg4 delegateQueue:(id)arg5 uniqueIdentifier:(id)arg6 snapshotRequestHandler:(id)arg7 residentMessageHandler:(id)arg8 remoteDevice:(id)arg9;	// IMP=0x0000000000b57ca2
- (id)createSnapshotLocalWithSessionID:(id)arg1 workQueue:(id)arg2 accessory:(id)arg3 delegate:(id)arg4 delegateQueue:(id)arg5 snapshotRequestHandler:(id)arg6;	// IMP=0x0000000000b57bb4
@property(readonly, getter=isWatchDevice) _Bool watchDevice;
@property(readonly) _Bool supportsCameraSnapshotRequestViaRelay;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
