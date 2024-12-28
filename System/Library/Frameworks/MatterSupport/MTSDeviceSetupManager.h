//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MTSXPCServerProxy, NSString;

__attribute__((visibility("hidden")))
@interface MTSDeviceSetupManager : NSObject
{
    MTSXPCServerProxy *_serverProxy;	// 8 = 0x8
}

+ (id)logCategory;	// IMP=0x0010000000024076
- (void).cxx_destruct;	// IMP=0x0000000000023dcd
@property(readonly) MTSXPCServerProxy *serverProxy; // @synthesize serverProxy=_serverProxy;
- (void)performDeviceSetupUsingRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000023b2d
- (void)dealloc;	// IMP=0x0000000000023aeb
- (id)initWithServerProxy:(id)arg1;	// IMP=0x0000000000023a6f
- (id)init;	// IMP=0x0000000000023a2f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
