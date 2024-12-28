//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CARSessionStatus, CARThemeAssetLibraryAgent, CRFileSender, CRThemeAssetDownloader, CRVehicleStore, NSMutableDictionary, NSString;

@interface CRThemeAssetLibrarian : NSObject
{
    CARThemeAssetLibraryAgent *_libraryAgent;	// 8 = 0x8
    CRVehicleStore *_vehicleStore;	// 16 = 0x10
    CARSessionStatus *_sessionStatus;	// 24 = 0x18
    NSMutableDictionary *_assetProgressForVehicleIdentifiers;	// 32 = 0x20
    CRThemeAssetDownloader *_assetDownloader;	// 40 = 0x28
    CRFileSender *_fileSenderSession;	// 48 = 0x30
    unsigned long long _currentSessionTransferStatus;	// 56 = 0x38
}

+ (unsigned long long)_supportedCompatibilityVersion;	// IMP=0x0020000000050422
- (void).cxx_destruct;	// IMP=0x0020000000054821
@property(nonatomic) unsigned long long currentSessionTransferStatus; // @synthesize currentSessionTransferStatus=_currentSessionTransferStatus;
@property(retain, nonatomic) CRFileSender *fileSenderSession; // @synthesize fileSenderSession=_fileSenderSession;
@property(readonly, nonatomic) CRThemeAssetDownloader *assetDownloader; // @synthesize assetDownloader=_assetDownloader;
@property(readonly, nonatomic) NSMutableDictionary *assetProgressForVehicleIdentifiers; // @synthesize assetProgressForVehicleIdentifiers=_assetProgressForVehicleIdentifiers;
@property(readonly, nonatomic) CARSessionStatus *sessionStatus; // @synthesize sessionStatus=_sessionStatus;
@property(readonly, nonatomic) CRVehicleStore *vehicleStore; // @synthesize vehicleStore=_vehicleStore;
@property(readonly, nonatomic) CARThemeAssetLibraryAgent *libraryAgent; // @synthesize libraryAgent=_libraryAgent;
- (void)_removeAssetProgressForVehicleIdentifier:(id)arg1;	// IMP=0x00100000000546d2
- (id)_assetProgressForVehicle:(id)arg1;	// IMP=0x001000000005453c
- (id)_stagedAssetVersionForVehicle:(id)arg1;	// IMP=0x0010000000054455
- (id)_assetVersionForVehicle:(id)arg1;	// IMP=0x001000000005436e
- (id)_vehiclesForAssetRequest:(id)arg1;	// IMP=0x0010000000054087
- (id)_assetRequestForVehicle:(id)arg1;	// IMP=0x0010000000053fb4
- (id)_vehicleForVehicleIdentifier:(id)arg1;	// IMP=0x0010000000053e68
- (void)libraryAgent:(id)arg1 receivedOverrideAsset:(id)arg2 forVehicleIdentifier:(id)arg3;	// IMP=0x0010000000053b25
- (void)libraryAgent:(id)arg1 requestsCurrentAssetsForVehicleIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000535c9
- (void)assetDownloader:(id)arg1 hasAsset:(id)arg2 forAssetRequest:(id)arg3;	// IMP=0x0010000000052ea8
- (void)assetDownloader:(id)arg1 failedDownloadForAssetRequest:(id)arg2 version:(id)arg3 error:(id)arg4;	// IMP=0x0010000000052d1c
- (void)assetDownloader:(id)arg1 attemptingDownloadForAssetRequest:(id)arg2 version:(id)arg3 progress:(id)arg4;	// IMP=0x00100000000529db
- (void)sessionDidDisconnect:(id)arg1;	// IMP=0x00100000000528a9
- (void)sessionDidConnect:(id)arg1;	// IMP=0x0010000000052829
- (void)vehicleStore:(id)arg1 didRemoveVehicle:(id)arg2;	// IMP=0x001000000005275f
- (void)vehicleStore:(id)arg1 didSaveVehicle:(id)arg2;	// IMP=0x0010000000052759
- (void)vehicleStoreDidBecomeAvailable:(id)arg1;	// IMP=0x00100000000526f8
- (id)assetProgressForVehicle:(id)arg1;	// IMP=0x0010000000052624
- (void)receivedClusterAssetIdentifier:(id)arg1 assetVersion:(id)arg2 sdkVersion:(id)arg3 forVehicle:(id)arg4;	// IMP=0x0010000000051b6d
- (void)_mainQueue_handleVehiclesChanged;	// IMP=0x0010000000051b23
- (void)_mainQueue_removeOlderAssets;	// IMP=0x0010000000051765
- (void)_mainQueue_hintDownloadForVehicle:(id)arg1;	// IMP=0x0010000000051645
- (void)_mainQueue_invalidateFileSenderSession;	// IMP=0x00100000000515dc
- (void)_mainQueue_evaluateAssetTransferIfConnected;	// IMP=0x0010000000050b86
- (id)_mainQueue_vehicleForSession:(id)arg1;	// IMP=0x00100000000509fb
- (void)_mainQueue_updateAssetRequests;	// IMP=0x00100000000507c4
- (id)initWithLibraryAgent:(id)arg1 vehicleStore:(id)arg2 sessionStatus:(id)arg3;	// IMP=0x0010000000050627

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
