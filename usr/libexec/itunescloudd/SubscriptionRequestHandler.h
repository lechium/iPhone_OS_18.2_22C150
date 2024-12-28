//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CloudArtworkImporter, ICConnectionConfiguration, NSString;

@interface SubscriptionRequestHandler : NSObject
{
    CloudArtworkImporter *_artworkImporter;	// 8 = 0x8
    ICConnectionConfiguration *_configuration;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000010fb78
@property(readonly, nonatomic) ICConnectionConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) CloudArtworkImporter *artworkImporter; // @synthesize artworkImporter=_artworkImporter;
- (void)cancelOperationsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000010f9fc
- (void)_importAllItemArtworkWithClientIdentity:(id)arg1;	// IMP=0x001000000010f8c0
- (void)_loadArtworkInfoForSubscriptionPersistentIDs:(id)arg1 artworkType:(long long)arg2 entityType:(long long)arg3 clientIdentity:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x001000000010effa
- (void)environmentMonitorDidChangePower:(id)arg1;	// IMP=0x001000000010ee5b
- (void)loadMissingArtworkWithClientIdentity:(id)arg1;	// IMP=0x001000000010ee49
- (void)loadScreenshotInfoForSubscriptionPersistentIDs:(id)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000010ee1f
- (void)loadArtworkInfoForSubscriptionContainerPersistentIDs:(id)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000010edf2
- (void)loadArtworkInfoForSubscriptionItemPersistentIDs:(id)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000010edc8
- (void)deprioritizeSubscriptionContainerArtworkForPersistentID:(long long)arg1;	// IMP=0x001000000010ed77
- (void)deprioritizeSubscriptionScreenshotForPersistentID:(long long)arg1;	// IMP=0x001000000010ed26
- (void)deprioritizeSubscriptionItemArtworkForPersistentID:(long long)arg1;	// IMP=0x001000000010ecd5
- (void)importContainerArtworkForPersistentID:(long long)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000010e98f
- (void)importScreenshotForPersistentID:(long long)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000010e612
- (void)importItemArtworkForPersistentID:(long long)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000010e295
- (id)initWithConfiguration:(id)arg1;	// IMP=0x001000000010e1b6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
