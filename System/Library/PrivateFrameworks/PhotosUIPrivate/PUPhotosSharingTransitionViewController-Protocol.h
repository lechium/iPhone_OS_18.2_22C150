//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUIPrivate/NSObject-Protocol.h>

@class PUPhotosSharingTransitionContext, UICollectionView, UICollectionViewLayout, UIView;

@protocol PUPhotosSharingTransitionViewController <NSObject>
- (void)setPhotosSharingTransitionLayout:(UICollectionViewLayout *)arg1 animated:(_Bool)arg2;
- (void)setPhotosSharingTransitionContext:(PUPhotosSharingTransitionContext *)arg1;
- (UICollectionView *)transitionCollectionView;

@optional
- (struct CGRect)embeddedActivityViewFrameWhenShowing:(_Bool)arg1;
- (UIView *)embeddedActivityView;
@end

