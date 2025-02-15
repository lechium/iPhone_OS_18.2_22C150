//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKDOperation, CKUploadRequestConfiguration, NSArray, NSDictionary, NSMutableDictionary, NSSet;
@protocol CKRepairAssetsOperationCallbacks><CKDOperationCallbackProxy;

@interface CKDRepairAssetsOperation
{
    CDUnknownBlockType _assetOrPackageRepairedBlock;	// 8 = 0x8
    CKUploadRequestConfiguration *_uploadRequestConfiguration;	// 16 = 0x10
    NSDictionary *_UUIDToAssetOrPackage;	// 24 = 0x18
    NSDictionary *_assetOrPackageUUIDToMetadata;	// 32 = 0x20
    NSArray *_unavailableAssetsAndPackages;	// 40 = 0x28
    CKDOperation *_fetchOperation;	// 48 = 0x30
    CKDOperation *_uploadOperation;	// 56 = 0x38
    CKDOperation *_updateOperation;	// 64 = 0x40
    NSMutableDictionary *_assetOrPackageUUIDToOriginalRecord;	// 72 = 0x48
    NSDictionary *_assetOrPackageUUIDToUploadError;	// 80 = 0x50
    NSSet *_uploadedAssetOrPackageUUIDs;	// 88 = 0x58
}

+ (id)nameForState:(unsigned long long)arg1;	// IMP=0x00600000003c43d8
- (void).cxx_destruct;	// IMP=0x00000000003c8be5
@property(retain, nonatomic) NSSet *uploadedAssetOrPackageUUIDs; // @synthesize uploadedAssetOrPackageUUIDs=_uploadedAssetOrPackageUUIDs;
@property(retain, nonatomic) NSDictionary *assetOrPackageUUIDToUploadError; // @synthesize assetOrPackageUUIDToUploadError=_assetOrPackageUUIDToUploadError;
@property(retain, nonatomic) NSMutableDictionary *assetOrPackageUUIDToOriginalRecord; // @synthesize assetOrPackageUUIDToOriginalRecord=_assetOrPackageUUIDToOriginalRecord;
@property(retain, nonatomic) CKDOperation *updateOperation; // @synthesize updateOperation=_updateOperation;
@property(retain, nonatomic) CKDOperation *uploadOperation; // @synthesize uploadOperation=_uploadOperation;
@property(retain, nonatomic) CKDOperation *fetchOperation; // @synthesize fetchOperation=_fetchOperation;
@property(retain, nonatomic) NSArray *unavailableAssetsAndPackages; // @synthesize unavailableAssetsAndPackages=_unavailableAssetsAndPackages;
@property(retain, nonatomic) NSDictionary *assetOrPackageUUIDToMetadata; // @synthesize assetOrPackageUUIDToMetadata=_assetOrPackageUUIDToMetadata;
@property(retain, nonatomic) NSDictionary *UUIDToAssetOrPackage; // @synthesize UUIDToAssetOrPackage=_UUIDToAssetOrPackage;
@property(retain, nonatomic) CKUploadRequestConfiguration *uploadRequestConfiguration; // @synthesize uploadRequestConfiguration=_uploadRequestConfiguration;
@property(copy, nonatomic) CDUnknownBlockType assetOrPackageRepairedBlock; // @synthesize assetOrPackageRepairedBlock=_assetOrPackageRepairedBlock;
- (void)_finishOnCallbackQueueWithError:(id)arg1;	// IMP=0x00000000003c89eb
- (void)main;	// IMP=0x00000000003c88ef
- (id)assetOrPackageForMetadata:(id)arg1 inRecord:(id)arg2;	// IMP=0x00000000003c86e8
- (id)repairContainer;	// IMP=0x00000000003c832e
- (void)_updateMissingAssetServerStatus;	// IMP=0x00000000003c6dbe
- (void)_uploadAssetsModify;	// IMP=0x00000000003c520d
- (void)_fetchAssetMetadata;	// IMP=0x00000000003c442e
- (_Bool)makeStateTransition;	// IMP=0x00000000003c42cd
- (id)activityCreate;	// IMP=0x00000000003c42a4
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;	// IMP=0x00000000003c3c20

// Remaining properties
@property(retain, nonatomic) id <CKRepairAssetsOperationCallbacks><CKDOperationCallbackProxy> clientOperationCallbackProxy; // @dynamic clientOperationCallbackProxy;
@property(nonatomic) unsigned long long state; // @dynamic state;

@end

