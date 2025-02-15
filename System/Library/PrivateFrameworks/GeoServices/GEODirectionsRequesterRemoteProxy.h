//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, NSString, geo_isolater;

__attribute__((visibility("hidden")))
@interface GEODirectionsRequesterRemoteProxy : NSObject
{
    geo_isolater *_isolater;	// 8 = 0x8
    NSMapTable *_pendingRequestConnections;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000999536
- (id)_takeConnectionForRequest:(id)arg1;	// IMP=0x0000000000999482
- (void)cancelRequest:(id)arg1;	// IMP=0x0000000000999349
- (void)startRequest:(id)arg1 traits:(id)arg2 auditToken:(id)arg3 useBackgroundURL:(_Bool)arg4 requestPriority:(id)arg5 callbackQueue:(id)arg6 finished:(CDUnknownBlockType)arg7 networkActivity:(CDUnknownBlockType)arg8 error:(CDUnknownBlockType)arg9;	// IMP=0x0000000000998e55
- (id)init;	// IMP=0x0000000000998dae

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

