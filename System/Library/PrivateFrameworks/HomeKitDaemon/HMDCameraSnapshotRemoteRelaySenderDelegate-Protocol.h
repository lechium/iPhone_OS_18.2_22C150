//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMDCameraSnapshotRemoteRelaySender, HMDCameraSnapshotSessionID, HMDSnapshotFile, NSError;

@protocol HMDCameraSnapshotRemoteRelaySenderDelegate <NSObject>
- (void)snapshotRelaySender:(HMDCameraSnapshotRemoteRelaySender *)arg1 didSaveSnapshotFile:(HMDSnapshotFile *)arg2 sessionID:(HMDCameraSnapshotSessionID *)arg3;
- (void)snapshotRelaySender:(HMDCameraSnapshotRemoteRelaySender *)arg1 didCompleteSendImage:(NSError *)arg2 sessionID:(HMDCameraSnapshotSessionID *)arg3;
- (void)snapshotRelaySender:(HMDCameraSnapshotRemoteRelaySender *)arg1 didStartCaptureImage:(NSError *)arg2 sessionID:(HMDCameraSnapshotSessionID *)arg3;
@end
