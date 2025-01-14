//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXDisplayAssetCollection-Protocol.h>
#import <PhotosUICore/PXMediaTypeAggregating-Protocol.h>

@class NSDate, NSString, NSURL;

@protocol PXDisplayMomentShare <PXDisplayAssetCollection, PXMediaTypeAggregating>
@property(readonly, nonatomic) long long px_momentShareType;
@property(readonly, nonatomic) NSDate *endDate;
@property(readonly, nonatomic) NSDate *startDate;
@property(readonly, nonatomic) NSString *localizedTitle;
@property(readonly, nonatomic) NSDate *expiryDate;
@property(readonly, nonatomic) NSURL *shareURL;
@property(readonly, nonatomic) unsigned long long uploadedVideosCount;
@property(readonly, nonatomic) unsigned long long uploadedPhotosCount;
@property(readonly, nonatomic) unsigned long long videosCount;
@property(readonly, nonatomic) unsigned long long photosCount;
@property(readonly, nonatomic) unsigned long long assetCount;
@property(readonly, nonatomic) unsigned short status;
@end

