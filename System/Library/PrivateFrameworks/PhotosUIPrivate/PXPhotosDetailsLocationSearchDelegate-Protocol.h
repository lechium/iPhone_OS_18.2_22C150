//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUIPrivate/NSObject-Protocol.h>

@protocol PXPhotosDetailsLocationSearchDataSource, PXPhotosDetailsLocationSearchResult;

@protocol PXPhotosDetailsLocationSearchDelegate <NSObject>

@optional
- (void)locationSearchDataSourceDidRevertLocation:(id <PXPhotosDetailsLocationSearchDataSource>)arg1;
- (void)locationSearchDataSourceDidRemoveLocation:(id <PXPhotosDetailsLocationSearchDataSource>)arg1;
- (void)locationSearchDataSource:(id <PXPhotosDetailsLocationSearchDataSource>)arg1 didSelectLocationSearchResult:(id <PXPhotosDetailsLocationSearchResult>)arg2;
@end
