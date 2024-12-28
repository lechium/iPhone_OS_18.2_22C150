//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface OTSOSMissingAdapter : NSObject
{
    _Bool _essential;	// 8 = 0x8
    NSString *_providerID;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000098615
@property _Bool essential; // @synthesize essential=_essential;
@property(readonly) NSString *providerID; // @synthesize providerID=_providerID;
- (_Bool)resetToOffering:(id *)arg1;	// IMP=0x0010000000098597
- (_Bool)joinAfterRestore:(id *)arg1;	// IMP=0x0010000000098541
- (_Bool)preloadOctagonKeySetOnAccount:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000984eb
- (_Bool)safariViewSyncingEnabled:(id *)arg1;	// IMP=0x00100000000984e3
- (id)currentState;	// IMP=0x0010000000098417
- (void)sendTrustedPeerSetChangedUpdate;	// IMP=0x0010000000098411
- (void)sendSelfPeerChangedUpdate;	// IMP=0x001000000009840b
- (void)registerForPeerChangeUpdates:(id)arg1;	// IMP=0x0010000000098405
- (id)fetchSelfPeers:(id *)arg1;	// IMP=0x00100000000983af
- (_Bool)updateCKKS4AllStatus:(_Bool)arg1 error:(id *)arg2;	// IMP=0x0010000000098359
- (_Bool)updateOctagonKeySetWithAccount:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000098303
- (id)fetchTrustedPeers:(id *)arg1;	// IMP=0x00100000000982ad
- (id)currentSOSSelf:(id *)arg1;	// IMP=0x0010000000098257
- (int)circleStatus:(id *)arg1;	// IMP=0x001000000009824c
@property(readonly, nonatomic) _Bool sosEnabled;
- (id)init;	// IMP=0x00100000000981ef

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
