//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MusicLibrary/ML3MusicLibrary.h>

@class NSDate, NSString;

@interface ML3MusicLibrary (ICDSaga)
@property(nonatomic, setter=icd_setPreferredVideoQuality:) long long icd_preferredVideoQuality;
@property(nonatomic, setter=icd_setSagaCloudFavoriteSongAddToLibraryBehavior:) long long icd_sagaCloudFavoriteSongAddToLibraryBehavior;
@property(nonatomic, setter=icd_setSagaCloudAddToPlaylistBehavior:) long long icd_sagaCloudAddToPlaylistBehavior;
@property(nonatomic, setter=icd_setSagaDatabaseUserVersion:) long long icd_sagaDatabaseUserVersion;
- (_Bool)_updateUbiquitousDatabaseWithEntity:(id)arg1 syncRevision:(long long)arg2 usingConnection:(id)arg3;	// IMP=0x00100000000c599a
- (void)_updateDatabaseByResetingSyncEntityRevisionForItemsWithIdentifiers:(id)arg1;	// IMP=0x00100000000c586c
- (id)_queryForTracksNeedingPushWithEntityRevisionAnchor:(unsigned long long)arg1 orderingTerms:(id)arg2;	// IMP=0x00100000000c567f
- (id)_sqlQueryStringForItemsNeedingPush;	// IMP=0x00100000000c565d
- (id)_keyValueStoreItemIdentifierForItem:(id)arg1;	// IMP=0x00100000000c5105
- (id)_kvsEntityWithKVSKey:(id)arg1 domain:(id)arg2;	// IMP=0x00100000000c4fb7
- (void)_populateMetadataValues:(id)arg1 fromDataSourceTrack:(id)arg2;	// IMP=0x00100000000c4db7
- (_Bool)updateUbiquitousDatabaseWithClientIdentity:(id)arg1 removeUbiquitousMetadataFromTrackWithPersistentID:(long long)arg2 error:(id *)arg3;	// IMP=0x00100000000c4b93
- (_Bool)updateWithEntity:(id)arg1 clientIdentity:(id)arg2;	// IMP=0x00100000000c496f
- (_Bool)updateMusicLibraryWithClientIdentity:(id)arg1 applyUbiquitousBookmarkMetadataToTrackWithPersistentID:(long long)arg2;	// IMP=0x00100000000c486c
- (_Bool)removeAllUbiquitousMetadataUsingClientIdentity:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000c46ea
- (id)readUbiquitousDatabaseMetadataValuesForIdentifiers:(id)arg1 forDomain:(id)arg2 clientIdentity:(id)arg3;	// IMP=0x00100000000c4533
- (void)commitUniversalPlaybackPositions:(id)arg1 context:(id)arg2 domain:(id)arg3 domainVersion:(id)arg4;	// IMP=0x00100000000c3f10
- (id)beginTransactionWithItemsToSyncWithDomain:(id)arg1 enumerationBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000000c3deb
@property(copy, nonatomic) NSString *lastNotificationDomainVersion;
@property(retain, nonatomic) NSDate *dateLastSynced;
@property(copy, nonatomic) NSString *lastSyncedDomainVersion;
@property(nonatomic) unsigned long long lastSyncedEntityRevision;
@end

