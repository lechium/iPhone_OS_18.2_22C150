//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UICollectionViewController.h"

@class NSString, UICollectionViewDiffableDataSource, UISearchController;

__attribute__((visibility("hidden")))
@interface _UISearchSuggestionsListViewController : UICollectionViewController
{
    UISearchController *_searchController;	// 8 = 0x8
    UICollectionViewDiffableDataSource *_dataSource;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000188204a
@property(retain, nonatomic) UICollectionViewDiffableDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) __weak UISearchController *searchController; // @synthesize searchController=_searchController;
- (void)collectionView:(id)arg1 performPrimaryActionForItemAtIndexPath:(id)arg2;	// IMP=0x0000000001881f42
- (_Bool)collectionView:(id)arg1 canPerformPrimaryActionForItemAtIndexPath:(id)arg2;	// IMP=0x0000000001881e4e
- (void)updateList;	// IMP=0x0000000001881991
- (void)viewDidLoad;	// IMP=0x0000000001881950
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000018818bf
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000001881826
- (id)initWithSearchController:(id)arg1;	// IMP=0x0000000001881230

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

