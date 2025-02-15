//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/GEOServer.h>

@class NSObject, geo_isolater;
@protocol OS_dispatch_queue;

@interface GEOOfflineDataServer : GEOServer
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    geo_isolater *_isolater;	// 16 = 0x10
    _Bool _isFeatureFlagEnabled;	// 24 = 0x18
    id _featureFlagListener;	// 32 = 0x20
}

+ (_Bool)wantsPerMessageSignposts;	// IMP=0x0020000000020d21
+ (id)identifier;	// IMP=0x00100000000176b7
- (void).cxx_destruct;	// IMP=0x002000000002169a
- (void)fetchTileConfigurationWithRequest:(id)arg1;	// IMP=0x001000000002157e
- (void)fetchVersionMetadataWithRequest:(id)arg1;	// IMP=0x001000000002141c
- (void)fetchAvailableKeysWithRequest:(id)arg1;	// IMP=0x00100000000212a8
- (void)checkExistenceWithRequest:(id)arg1;	// IMP=0x0010000000021071
- (void)fetchWithRequest:(id)arg1;	// IMP=0x0010000000020e54
- (id)initWithDaemon:(id)arg1;	// IMP=0x0010000000020d29
- (_Bool)handleIncomingMessage:(id)arg1 withObject:(id)arg2 fromPeer:(id)arg3 signpostId:(unsigned long long)arg4;	// IMP=0x00100000000176c4

@end

