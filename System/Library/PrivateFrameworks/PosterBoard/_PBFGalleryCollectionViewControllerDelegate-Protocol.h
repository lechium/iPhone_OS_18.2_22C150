//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PosterBoard/NSObject-Protocol.h>

@class PBFPosterGalleryPreviewView;
@protocol PBFPosterPreview;

@protocol _PBFGalleryCollectionViewControllerDelegate <NSObject>
- (void)galleryCollectionViewControllerWillDisplayPreview:(id <PBFPosterPreview>)arg1;
- (void)galleryCollectionViewControllerDidSelectPreview:(id <PBFPosterPreview>)arg1 fromPreviewView:(PBFPosterGalleryPreviewView *)arg2;
@end
