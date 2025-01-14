//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol CBXpcConnectionDelegate, OS_dispatch_queue, OS_xpc_object;

__attribute__((visibility("hidden")))
@interface CBXpcConnection : NSObject
{
    NSObject<OS_dispatch_queue> *_eventQueue;	// 8 = 0x8
    NSMutableDictionary *_options;	// 16 = 0x10
    int _sessionType;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_xpcQueue;	// 32 = 0x20
    NSObject<OS_xpc_object> *_xpcConnection;	// 40 = 0x28
    _Bool _uiAppIsBackgrounded;	// 48 = 0x30
    _Bool _xpcConnectionConnected;	// 49 = 0x31
    CDUnknownBlockType _whbReplyHandler;	// 56 = 0x38
    NSMutableDictionary *_whbRemoteToLocalUuidMap;	// 64 = 0x40
    id <CBXpcConnectionDelegate> _delegate;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000000627d0
@property(nonatomic) __weak id <CBXpcConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_applicationWillEnterForegroundNotification;	// IMP=0x0000000000062780
- (void)_applicationDidEnterBackgroundNotification;	// IMP=0x0000000000062760
- (void)_handleConnectionEvent:(id)arg1;	// IMP=0x0000000000062600
- (void)_handleFinalized;	// IMP=0x0000000000062590
- (void)_handleInvalid;	// IMP=0x00000000000624a0
- (void)_handleReset;	// IMP=0x00000000000623a0
- (void)_handleMsg:(id)arg1;	// IMP=0x00000000000620d0
- (id)_allocXpcMsg:(unsigned short)arg1 args:(id)arg2;	// IMP=0x0000000000062010
- (id)_nameForMessage:(unsigned short)arg1;	// IMP=0x0000000000061fb0
- (void)_sendBarrier;	// IMP=0x0000000000061ec0
- (void)_checkOut;	// IMP=0x0000000000061ea0
- (void)_checkIn;	// IMP=0x0000000000061d00
- (void)setTargetQueue:(id)arg1;	// IMP=0x0000000000061cb0
- (void)disconnect;	// IMP=0x0000000000061c30
- (void)connect;	// IMP=0x0000000000061be0
- (void)removeWhbRemoteId:(id)arg1;	// IMP=0x0000000000061b00
- (id)getWhbLocalIdForRemoteId:(id)arg1;	// IMP=0x0000000000061ae0
- (void)setWhbLocalId:(id)arg1 forRemoteId:(id)arg2;	// IMP=0x00000000000619b0
- (void)setWhbReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000614c0
- (void)didReceiveForwardedDelegateCallbackMessage:(id)arg1;	// IMP=0x0000000000061190
- (void)didReceiveForwardedMessage:(id)arg1;	// IMP=0x0000000000060d40
- (void)forwardWhbMsg:(unsigned short)arg1 args:(id)arg2 cnx:(id)arg3;	// IMP=0x0000000000060870
- (void)sendMsgWithReply:(unsigned short)arg1 args:(id)arg2 replyBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000060610
- (id)sendSyncMsg:(unsigned short)arg1 args:(id)arg2;	// IMP=0x0000000000060110
- (void)sendMsg:(unsigned short)arg1 args:(id)arg2;	// IMP=0x000000000005ffa0
- (id)getEventQueue;	// IMP=0x000000000005ff90
- (id)initWithDelegate:(id)arg1 queue:(id)arg2 options:(id)arg3 sessionType:(int)arg4;	// IMP=0x000000000005faf0

@end

