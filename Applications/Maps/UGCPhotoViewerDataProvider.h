//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, UGCPhotoAlbumCategory;
@protocol UGCMorePhotosDataProviderUpdateDelegate;

@interface UGCPhotoViewerDataProvider : NSObject
{
    unsigned long long indexOfTappedPhoto;	// 8 = 0x8
    id <UGCMorePhotosDataProviderUpdateDelegate> _delegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000a0fb01
@property(nonatomic) __weak id <UGCMorePhotosDataProviderUpdateDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long indexOfTappedPhoto; // @synthesize indexOfTappedPhoto;
@property(readonly, nonatomic) UGCPhotoAlbumCategory *albumCategory;
- (void)fetchNextBatchRequestIfNeeded;	// IMP=0x0010000000a0fa8e
@property(readonly, nonatomic) NSArray *photoList;
@property(readonly, nonatomic) unsigned long long totalNumberOfPhotos;
@property(readonly, nonatomic) _Bool hasPhotosThatShouldBeObfuscatedWhenInFullScreen;
@property(readonly, nonatomic) _Bool hasReachedTotalCount;
@property(readonly, nonatomic) _Bool hasDataToShow;
@property(readonly, nonatomic, getter=isAllowedToShowAddPhotoCallToAction) _Bool allowedToShowAddPhotoCallToAction;
@property(readonly, nonatomic) NSArray *attributionNames;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
