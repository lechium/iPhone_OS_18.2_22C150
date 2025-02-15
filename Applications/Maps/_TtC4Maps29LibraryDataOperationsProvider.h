//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, MKMapItem, _TtC8MapsSync13MapsSyncStore;
@protocol _TtP4Maps26LibraryPlaceItemCompatible_;

@interface _TtC4Maps29LibraryDataOperationsProvider : NSObject
{
    MISSING_TYPE *mapsSyncStore;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000001d25e0
- (id)init;	// IMP=0x00100000001d25a0
- (void)saveAsFavoriteWithCollectionPlaceItem:(id)arg1;	// IMP=0x00100000001d2460
- (void)deleteFavoriteItem:(id)arg1;	// IMP=0x00100000001d1cb0
- (void)updateSavedPlaceItemsMatchingMapItem:(id)arg1 withStorageFrom:(id)arg2;	// IMP=0x00100000001d1910
- (void)existingPlaceItemsForMapItem:(MKMapItem *)arg1 completionHandler:(void (^)(NSArray *, NSError *))arg2;	// IMP=0x00100000001d0800
- (void)existingPlaceItemForMapItem:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000001d0780
- (void)deleteFromLibraryWithRouteData:(id)arg1 viewControllerForPresentingAlert:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001cfd00
- (MISSING_TYPE *)deleteFromLibraryWithPlaceItems:completion: /* Error: Ran out of types for this method. */;	// IMP=0x00100000001cfba0
- (void)deleteFromLibraryWithPlaceItems:(id)arg1 viewControllerForPresentingAlert:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001ce680
- (void)deleteFromLibraryWithPlaceItem:(id)arg1 viewControllerForPresentingAlert:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001cddf0
- (void)addToLibraryWithMapItem:(id)arg1 customName:(id)arg2 alsoAddnote:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000001ccd00
- (_Bool)saveNote:(id)arg1 libraryPlaceItem:(id)arg2;	// IMP=0x00100000001cca90
- (void)saveNote:(id)arg1 collectionPlaceItem:(id)arg2;	// IMP=0x00100000001cc970
- (id)initWithMapsSyncStore:(id)arg1;	// IMP=0x00100000001cc920
@property(nonatomic, readonly) _TtC8MapsSync13MapsSyncStore *mapsSyncStore; // @synthesize mapsSyncStore;
- (void)alertMessageForDeletingPlaceItem:(id <_TtP4Maps26LibraryPlaceItemCompatible_>)arg1 completionHandler:(void (^)(NSString *))arg2;	// IMP=0x00100000001d2f30

@end

