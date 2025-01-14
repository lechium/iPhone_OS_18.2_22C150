//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface REResourceSharingClientObject : NSObject
{
    struct AssetService *_assetService;	// 8 = 0x8
    void *_resourceSharingManager;	// 16 = 0x10
    unsigned long long _peerID;	// 24 = 0x18
}

@property(readonly, nonatomic) unsigned long long peerID; // @synthesize peerID=_peerID;
@property(readonly, nonatomic) void *resourceSharingManager; // @synthesize resourceSharingManager=_resourceSharingManager;
@property(readonly, nonatomic) struct AssetService *assetService; // @synthesize assetService=_assetService;
- (void)reportLoadState:(unsigned char)arg1 forAssetId:(unsigned long long)arg2 assetSize:(unsigned long long)arg3 errorCode:(unsigned short)arg4;	// IMP=0x00000000002af972
- (void)unsubscribeFromResourceAtAssetPath:(id)arg1;	// IMP=0x00000000002af612
- (void)setSubscriptionOptions:(id)arg1 forResourceAtAssetPath:(id)arg2;	// IMP=0x00000000002af239
- (void)fetchResourceAtAssetPath:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00000000002aec2b
- (id)redactedDescription;	// IMP=0x00000000002aec02
@property(readonly, copy) NSString *description;
- (void)invalidate;	// IMP=0x00000000002aebe3
- (id)initWithAssetService:(struct AssetService *)arg1 resourceSharingManager:(void *)arg2 peerID:(unsigned long long)arg3;	// IMP=0x00000000002aeb90

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

