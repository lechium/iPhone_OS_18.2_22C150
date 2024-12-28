//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface ManagedAppService : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000001dfebf
- (void)submitVPPRequest:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001dfbfa
- (void)submitManifestRequest:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001df988
- (void)showVPPInviteForCurrentUser:(id)arg1 orgName:(id)arg2 withReplyHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001df8b3
- (void)requestStatusWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000001df5a0
- (void)processITMSServicesRequest:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001df392
- (id)init;	// IMP=0x00100000001df310

@end
