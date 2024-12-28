//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSXPCListener;

@interface SFKeychainControlManager : NSObject
{
    NSXPCListener *_listener;	// 8 = 0x8
}

+ (id)sharedManager;	// IMP=0x0020000000071c18
- (void).cxx_destruct;	// IMP=0x002000000007193f
- (void)rpcDeleteCorruptedItemsWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000000718c4
- (void)rpcFindCorruptedItemsWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000071838
- (_Bool)deleteCorruptedItemsWithError:(id *)arg1;	// IMP=0x00100000000714cb
- (id)findCorruptedItemsWithError:(id *)arg1;	// IMP=0x0010000000070e19
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0010000000070c06
- (id)xpcControlEndpoint;	// IMP=0x0010000000070bb2
- (id)_init;	// IMP=0x0010000000070b25

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
