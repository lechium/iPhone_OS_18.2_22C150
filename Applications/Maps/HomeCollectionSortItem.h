//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CollectionHandler, NSString;
@protocol HomeCollectionSortItemDelegate;

@interface HomeCollectionSortItem : NSObject
{
    CollectionHandler *_collection;	// 8 = 0x8
    id <HomeCollectionSortItemDelegate> _delegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000004bf66d
@property(readonly, nonatomic) __weak id <HomeCollectionSortItemDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) CollectionHandler *collection; // @synthesize collection=_collection;
- (void)smallDropDownOutlineCell:(id)arg1 didSelectItemAtIndex:(long long)arg2;	// IMP=0x00100000004bf573
- (id)_sortTypes;	// IMP=0x00100000004bf46b
- (id)_titleForCollectionSortType:(long long)arg1;	// IMP=0x00100000004bf388
- (id)cellModelWithBackgroundModel:(id)arg1;	// IMP=0x00100000004bf08c
@property(readonly, nonatomic) NSString *_maps_diffableDataSourceIdentifier;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000004bef6f
@property(readonly) unsigned long long hash;
- (id)initWithCollection:(id)arg1 delegate:(id)arg2;	// IMP=0x00100000004beebf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
