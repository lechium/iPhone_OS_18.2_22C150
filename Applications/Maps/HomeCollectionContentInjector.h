//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CollectionHandler, MKMapItem, NSString, SearchResult;
@protocol ActionCoordination;

@interface HomeCollectionContentInjector : NSObject
{
    CDUnknownBlockType _updateContentInjection;	// 8 = 0x8
    CollectionHandler *_collection;	// 16 = 0x10
    MKMapItem *_selectedMapItem;	// 24 = 0x18
    id <ActionCoordination> _actionCoordinator;	// 32 = 0x20
    SearchResult *_selectedSearchResult;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000a9946e
@property(readonly, nonatomic) SearchResult *selectedSearchResult; // @synthesize selectedSearchResult=_selectedSearchResult;
@property(nonatomic) __weak id <ActionCoordination> actionCoordinator; // @synthesize actionCoordinator=_actionCoordinator;
@property(readonly, nonatomic) MKMapItem *selectedMapItem; // @synthesize selectedMapItem=_selectedMapItem;
@property(readonly, nonatomic) CollectionHandler *collection; // @synthesize collection=_collection;
@property(copy, nonatomic) CDUnknownBlockType updateContentInjection; // @synthesize updateContentInjection=_updateContentInjection;
- (void)collectionHandlerContentUpdated:(id)arg1;	// IMP=0x0010000000a993f7
- (void)collectionHandlerInfoUpdated:(id)arg1;	// IMP=0x0010000000a993f1
- (void)removeContentFromMapView;	// IMP=0x0010000000a99390
- (void)addContentToMapView;	// IMP=0x0010000000a9929c
- (id)_searchResults;	// IMP=0x0010000000a990a6
- (id)initWithCollection:(id)arg1 selectedMapItem:(id)arg2;	// IMP=0x0010000000a98fc7
- (id)initWithCollection:(id)arg1;	// IMP=0x0010000000a98fb3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
