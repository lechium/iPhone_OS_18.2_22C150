//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NanoPassKit/NPKPassSyncService.h>

@class NPDCompanionPaymentPassDatabase;
@protocol NPDCompanionPassSyncServiceDataSource, NPDCompanionPassSyncServiceDelegate, NPDPassesSyncServiceDataSource;

@interface NPDCompanionPassSyncService : NPKPassSyncService
{
    id <NPDCompanionPassSyncServiceDelegate> _delegate;	// 8 = 0x8
    id <NPDCompanionPassSyncServiceDataSource> _dataSource;	// 16 = 0x10
    NPDCompanionPaymentPassDatabase *_companionPaymentPassDatabase;	// 24 = 0x18
    id <NPDPassesSyncServiceDataSource> _nonPaymentPassSyncServiceSource;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000000b7a6
@property(retain, nonatomic) id <NPDPassesSyncServiceDataSource> nonPaymentPassSyncServiceSource; // @synthesize nonPaymentPassSyncServiceSource=_nonPaymentPassSyncServiceSource;
@property(retain, nonatomic) NPDCompanionPaymentPassDatabase *companionPaymentPassDatabase; // @synthesize companionPaymentPassDatabase=_companionPaymentPassDatabase;
@property(nonatomic) __weak id <NPDCompanionPassSyncServiceDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <NPDCompanionPassSyncServiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_removePassWithUniqueID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000b28c
- (void)_savePassData:(id)arg1 forSyncStateItem:(id)arg2 baseManifestHashForPartialUpdate:(id)arg3 remoteAssetsForPartialUpdate:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x001000000000a63b
- (void)_companionPaymentPassCatalogChanged:(id)arg1;	// IMP=0x001000000000a515
- (void)_companionPaymentPassDatabaseChanged:(id)arg1;	// IMP=0x001000000000a503
- (id)_passWithUniqueID:(id)arg1;	// IMP=0x001000000000a461
- (unsigned long long)_associatedDataToRequestForPass:(id)arg1;	// IMP=0x001000000000a3ad
- (void)handleRequestedAssociatedData:(unsigned long long)arg1 forPassWithUniqueID:(id)arg2;	// IMP=0x001000000000a270
- (id)passSyncEngine:(id)arg1 dataForPassWithUniqueID:(id)arg2;	// IMP=0x001000000000a118
- (id)passSyncEngine:(id)arg1 partialDataForPassWithUniqueID:(id)arg2 baseManifest:(id)arg3 outRemoteAssets:(id *)arg4;	// IMP=0x0010000000009f65
- (void)passSyncEngine:(id)arg1 requestsRemovePassWithUniqueID:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000009e5b
- (void)passSyncEngine:(id)arg1 requestsUpdatePassData:(id)arg2 forSyncStateItem:(id)arg3 baseManifestHashForPartialUpdate:(id)arg4 remoteAssetsForPartialUpdate:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x0010000000009c41
- (void)passSyncEngine:(id)arg1 requestsAddPassData:(id)arg2 forSyncStateItem:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000009913
- (id)watchCatalogToSendWithStateChange;	// IMP=0x001000000000990b
- (id)companionCatalogToSendWithStateChange;	// IMP=0x00100000000098bb
- (void)handleIncomingCompanionCatalog:(id)arg1 watchCatalog:(id)arg2;	// IMP=0x001000000000977a
- (void)handleIncomingPassSettings:(unsigned long long)arg1 forPassWithUniqueID:(id)arg2;	// IMP=0x0010000000009700
- (unsigned long long)settingsForPassWithUniqueID:(id)arg1;	// IMP=0x001000000000968f
- (id)currentLibraryPassSyncStateWithReconciledState:(id)arg1;	// IMP=0x00100000000093c3
- (void)teardownSync;	// IMP=0x0010000000009330
- (void)initiateSync;	// IMP=0x001000000000931e
- (id)initWithCompanionPaymentPassDatabase:(id)arg1;	// IMP=0x00100000000091a2

@end
