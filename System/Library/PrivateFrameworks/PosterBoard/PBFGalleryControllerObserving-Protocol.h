//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PosterBoard/NSObject-Protocol.h>

@class PBFGalleryController, PRSPosterGalleryLayout;

@protocol PBFGalleryControllerObserving <NSObject>

@optional
- (void)galleryController:(PBFGalleryController *)arg1 didUpdateCurrentGalleryConfiguration:(PRSPosterGalleryLayout *)arg2;
- (void)galleryControllerWillUpdateGalleryConfiguration:(PBFGalleryController *)arg1;
@end
