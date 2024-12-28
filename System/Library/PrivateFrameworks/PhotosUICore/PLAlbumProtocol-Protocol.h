//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PLAssetContainer-Protocol.h>

@class NSMutableIndexSet, NSMutableOrderedSet, NSNumber, NSObject, NSOrderedSet, NSPredicate, NSString, NSURL, PLPhotoLibrary;

@protocol PLAlbumProtocol <PLAssetContainer>
@property(nonatomic) int pendingItemsType;
@property(nonatomic) int pendingItemsCount;
@property(readonly, copy, nonatomic) CDUnknownBlockType sortingComparator;
@property(readonly, retain, nonatomic) NSURL *groupURL;
@property(retain, nonatomic) NSString *importSessionID;
@property(readonly, nonatomic) _Bool shouldDeleteWhenEmpty;
@property(readonly, nonatomic) _Bool canContributeToCloudSharedAlbum;
@property(readonly, nonatomic) _Bool isProjectAlbum;
@property(readonly, nonatomic) _Bool isUserLibraryAlbum;
@property(readonly, nonatomic) _Bool isRecentlyAddedAlbum;
@property(readonly, nonatomic) _Bool isMultipleContributorCloudSharedAlbum;
@property(readonly, nonatomic) _Bool isFamilyCloudSharedAlbum;
@property(readonly, nonatomic) _Bool isOwnedCloudSharedAlbum;
@property(readonly, nonatomic) _Bool isInTrash;
@property(readonly, nonatomic) _Bool isFolder;
@property(readonly, nonatomic) _Bool isStandInAlbum;
@property(readonly, nonatomic) _Bool isPendingPhotoStreamAlbum;
@property(readonly, nonatomic) _Bool isCloudSharedAlbum;
@property(readonly, nonatomic) _Bool isPhotoStreamAlbum;
@property(readonly, nonatomic) _Bool isPanoramasAlbum;
@property(readonly, nonatomic) _Bool isCameraAlbum;
@property(readonly, nonatomic) _Bool isLibrary;
@property(readonly, retain, nonatomic) NSObject *posterImage;
@property(nonatomic) _Bool hasUnseenContentBoolValue;
@property(readonly, nonatomic) int kindValue;
@property(readonly, retain, nonatomic) NSNumber *kind;
@property(readonly, nonatomic) PLPhotoLibrary *photoLibrary;
- (void)batchFetchAssets:(NSOrderedSet *)arg1;
- (void)reducePendingItemsCountBy:(unsigned long long)arg1;

@optional
@property(nonatomic) unsigned long long batchSize;
// Preceding property had unknown attributes: ?
// Original attribute string: TQ,?,N

@property(readonly, copy, nonatomic) NSString *name;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C,N

@property(readonly, retain, nonatomic) NSMutableOrderedSet *mutableAssets;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSMutableOrderedSet",?,R,&,N

- (void)setUINotificationsEnabled:(_Bool)arg1;
- (NSMutableIndexSet *)filteredIndexesForPredicate:(NSPredicate *)arg1;
@end
