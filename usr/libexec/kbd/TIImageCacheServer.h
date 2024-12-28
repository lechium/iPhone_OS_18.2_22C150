//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString, NSXPCListener, TIImageCacheClient;
@protocol OS_dispatch_queue;

@interface TIImageCacheServer : NSObject
{
    NSXPCListener *_listener;	// 8 = 0x8
    TIImageCacheClient *_imageCache;	// 16 = 0x10
    NSMutableSet *_invalidBundles;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x00200000000046ea
- (void).cxx_destruct;	// IMP=0x0020000000005191
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)cacheItem:(id)arg1 key:(id)arg2 group:(id)arg3;	// IMP=0x0010000000005081
- (void)_logInvalidConnection;	// IMP=0x0010000000004fc9
- (_Bool)_isValidItem:(id)arg1;	// IMP=0x0010000000004f25
- (_Bool)_isValidKey:(id)arg1 group:(id)arg2;	// IMP=0x0010000000004bc9
- (void)_createImageCacheIfNecessary;	// IMP=0x0010000000004b7d
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0010000000004955
- (id)_bundleIdForConnection:(id)arg1;	// IMP=0x00100000000048df
- (void)dealloc;	// IMP=0x0010000000004861
- (id)init;	// IMP=0x001000000000476f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
