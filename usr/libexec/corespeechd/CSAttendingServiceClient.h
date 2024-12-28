//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSXPCConnection;
@protocol CSAttendingServiceDelegate, OS_dispatch_queue;

@interface CSAttendingServiceClient : NSObject
{
    id <CSAttendingServiceDelegate> _delegate;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_xpcConnectionQueue;	// 16 = 0x10
    NSXPCConnection *_attendingConnection;	// 24 = 0x18
    id _remoteObjectProxy;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000000dd70b
@property(retain, nonatomic) id remoteObjectProxy; // @synthesize remoteObjectProxy=_remoteObjectProxy;
@property(retain, nonatomic) NSXPCConnection *attendingConnection; // @synthesize attendingConnection=_attendingConnection;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *xpcConnectionQueue; // @synthesize xpcConnectionQueue=_xpcConnectionQueue;
@property(nonatomic) __weak id <CSAttendingServiceDelegate> delegate; // @synthesize delegate=_delegate;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"<CSAttendingServiceDelegate>",?,W,N,V_delegate

- (_Bool)_isAttendingAllowedForUseCase:(long long)arg1;	// IMP=0x00100000000dd639
- (void)_createClientConnection;	// IMP=0x00100000000dd318
- (void)_setupRemoteServiceProxyObject;	// IMP=0x00100000000dd1ab
- (void)speechPauseDetected;	// IMP=0x00100000000dd0fd
- (void)speechStartDetectedWithEventInfo:(id)arg1;	// IMP=0x00100000000dd027
- (void)attendingStoppedWithReason:(long long)arg1;	// IMP=0x00100000000dcf11
- (void)stopAttendingWithReason:(long long)arg1;	// IMP=0x00100000000dce07
- (void)startAttendingWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000dca80
- (void)dealloc;	// IMP=0x00100000000dca42
- (void)invalidate;	// IMP=0x00100000000dc987
- (id)init;	// IMP=0x00100000000dc89d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
