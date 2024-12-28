//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMCameraClipEncryptionManager, HMDCameraClipSegmentMetadata, HMFTimer, NSData, NSString;

__attribute__((visibility("hidden")))
@interface HMDCameraClipAppendStreamingAssetOperation
{
    NSData *_data;	// 8 = 0x8
    HMDCameraClipSegmentMetadata *_metadata;	// 16 = 0x10
    HMCameraClipEncryptionManager *_encryptionManager;	// 24 = 0x18
    HMFTimer *_retryTimer;	// 32 = 0x20
}

+ (id)logCategory;	// IMP=0x0010000000ab152d
+ (_Bool)shouldRetry;	// IMP=0x0010000000ab1485
+ (id)metadataPropertyName;	// IMP=0x0010000000ab13dd
+ (id)streamingAssetPropertyName;	// IMP=0x0010000000ab1335
- (void).cxx_destruct;	// IMP=0x0000000000ab053c
@property(retain) HMFTimer *retryTimer; // @synthesize retryTimer=_retryTimer;
@property(readonly) HMCameraClipEncryptionManager *encryptionManager; // @synthesize encryptionManager=_encryptionManager;
@property(readonly) HMDCameraClipSegmentMetadata *metadata; // @synthesize metadata=_metadata;
@property(readonly) NSData *data; // @synthesize data=_data;
- (id)attributeDescriptions;	// IMP=0x0000000000ab0335
- (void)timerDidFire:(id)arg1;	// IMP=0x0000000000ab013c
- (id)_retryDelayForError:(id)arg1;	// IMP=0x0000000000ab0037
- (id)_updateClipModel:(id)arg1 usingStreamingAsset:(id)arg2;	// IMP=0x0000000000aafc3d
- (void)cancelWithError:(id)arg1;	// IMP=0x0000000000aafbfa
- (void)finish;	// IMP=0x0000000000aafbb7
- (void)main;	// IMP=0x0000000000aaf99a
- (id)initWithClipModelID:(id)arg1 localZone:(id)arg2 data:(id)arg3 metadata:(id)arg4 encryptionManager:(id)arg5 dataSource:(id)arg6;	// IMP=0x0000000000aaf7fe
- (id)initWithClipModelID:(id)arg1 localZone:(id)arg2 data:(id)arg3 metadata:(id)arg4 encryptionManager:(id)arg5;	// IMP=0x0000000000aaf717

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
