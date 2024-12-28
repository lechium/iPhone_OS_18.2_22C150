//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSNWBroadcaster, IMRemoteObjectBroadcaster;

@interface IDSIPCBroadcaster : NSObject
{
    IMRemoteObjectBroadcaster *_xpcBroadcaster;	// 8 = 0x8
    IDSNWBroadcaster *_nwBroadcaster;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000348fdc
@property(retain, nonatomic) IDSNWBroadcaster *nwBroadcaster; // @synthesize nwBroadcaster=_nwBroadcaster;
@property(retain, nonatomic) IMRemoteObjectBroadcaster *xpcBroadcaster; // @synthesize xpcBroadcaster=_xpcBroadcaster;
- (id)broadcastProxyForTargets:(id)arg1 messageContext:(id)arg2 protocol:(id)arg3;	// IMP=0x0010000000348c42
- (id)init;	// IMP=0x0010000000348bbd

@end
