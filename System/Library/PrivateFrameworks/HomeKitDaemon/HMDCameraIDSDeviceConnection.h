//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDCameraStreamSessionID, HMFTimer, IDSDeviceConnection, NSObject, NSString;
@protocol HMDIDSService, OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface HMDCameraIDSDeviceConnection : HMFObject
{
    unsigned char _keepAliveCounter;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_workQueue;	// 16 = 0x10
    HMDCameraStreamSessionID *_sessionID;	// 24 = 0x18
    id <HMDIDSService> _idsProxyStreamService;	// 32 = 0x20
    IDSDeviceConnection *_watchVideoConnection;	// 40 = 0x28
    IDSDeviceConnection *_watchAudioConnection;	// 48 = 0x30
    IDSDeviceConnection *_keepAliveConnection;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_highPriorityQueue;	// 64 = 0x40
    NSObject<OS_dispatch_source> *_keepAliveSocketReceiveSource;	// 72 = 0x48
    HMFTimer *_keepAliveByteSendTimer;	// 80 = 0x50
    HMFTimer *_keepAliveByteReceiveTimeoutTimer;	// 88 = 0x58
    CDUnknownBlockType _idsDeviceConnectionFactory;	// 96 = 0x60
}

+ (id)logCategory;	// IMP=0x00100000005c54af
- (void).cxx_destruct;	// IMP=0x00000000005c3f10
@property(copy) CDUnknownBlockType idsDeviceConnectionFactory; // @synthesize idsDeviceConnectionFactory=_idsDeviceConnectionFactory;
@property(retain) IDSDeviceConnection *keepAliveConnection; // @synthesize keepAliveConnection=_keepAliveConnection;
@property(retain) IDSDeviceConnection *watchAudioConnection; // @synthesize watchAudioConnection=_watchAudioConnection;
@property(retain) IDSDeviceConnection *watchVideoConnection; // @synthesize watchVideoConnection=_watchVideoConnection;
@property(readonly, nonatomic) id <HMDIDSService> idsProxyStreamService; // @synthesize idsProxyStreamService=_idsProxyStreamService;
@property(readonly, nonatomic) HMDCameraStreamSessionID *sessionID; // @synthesize sessionID=_sessionID;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (id)logIdentifier;	// IMP=0x00000000005c3df1
- (void)_callSessionEndedWithError:(id)arg1;	// IMP=0x00000000005c3d3d
- (void)_socketOpenedWithError:(id)arg1;	// IMP=0x00000000005c3c89
- (void)timerDidFire:(id)arg1;	// IMP=0x00000000005c3978
- (void)startKeepAlive;	// IMP=0x00000000005c390f
- (void)_createStreamSocketWithDevice:(id)arg1;	// IMP=0x00000000005c225f
- (void)dealloc;	// IMP=0x00000000005c21b8
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 idsProxyStreamService:(id)arg3;	// IMP=0x00000000005c1f98

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
