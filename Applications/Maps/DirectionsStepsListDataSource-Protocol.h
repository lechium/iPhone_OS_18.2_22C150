//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class GEOComposedRoute, UICollectionView, UITableView;
@protocol RouteStepListDelegate, UIScrollViewDelegate;

@protocol DirectionsStepsListDataSource <NSObject, UITableViewDataSource, UITableViewDelegate, UICollectionViewDataSource, UICollectionViewDelegate>
@property(nonatomic) _Bool enableNavigationUpdates;
@property(nonatomic, getter=shouldFlattenToSingleSection) _Bool flattenToSingleSection;
@property(nonatomic, getter=allowsStepSelection) _Bool allowStepSelection;
@property(nonatomic) unsigned long long options;
@property(nonatomic) __weak id <UIScrollViewDelegate> scrollViewDelegate;
@property(copy, nonatomic) CDUnknownBlockType reloadHandler;
@property(nonatomic) __weak UICollectionView *collectionView;
@property(nonatomic) __weak UITableView *tableView;
@property(nonatomic) __weak id <RouteStepListDelegate> delegate;
- (void)setRoute:(GEOComposedRoute *)arg1;
- (GEOComposedRoute *)route;
@end

