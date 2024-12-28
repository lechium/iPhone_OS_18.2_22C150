//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSClientXPCConnection, NSString;

@interface CSFallbackAudioSessionReleaseProvidingProxy : NSObject
{
    CSClientXPCConnection *_xpcConnection;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000000439d
@property(nonatomic) __weak CSClientXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (void)_sendReply:(id)arg1 client:(id)arg2 result:(_Bool)arg3 error:(id)arg4;	// IMP=0x0010000000004282
- (void)_handleDeactivateAudioSessionRequestMessage:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x00100000000040e6
- (void)handleXPCMessage:(id)arg1 messageBody:(id)arg2 client:(id)arg3;	// IMP=0x0010000000003fcd
- (id)initWithXPCConnection:(id)arg1;	// IMP=0x0010000000003f65

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
