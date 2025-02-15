//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class MKMapItemPhoto, PhotoViewerToolbarController, RAPPlacecardImageryIssueItem;

@protocol PhotoViewerToolbarControllerActionHandling <NSObject>
- (void)photoViewerToolbarControllerTappedDeletePhoto;
- (void)photoViewerToolbarControllerTappedEditPhotoCredit:(PhotoViewerToolbarController *)arg1;
- (MKMapItemPhoto *)photoViewerToolbarControllerGetCurrentPhoto:(PhotoViewerToolbarController *)arg1;
- (void)photoViewerToolbarController:(PhotoViewerToolbarController *)arg1 selectedReportAnIssueItem:(RAPPlacecardImageryIssueItem *)arg2;
- (void)photoViewerToolbarControllerTappedAddPhoto:(PhotoViewerToolbarController *)arg1;
- (void)photoViewerToolbarControllerTappedRight:(PhotoViewerToolbarController *)arg1;
- (void)photoViewerToolbarControllerTappedLeft:(PhotoViewerToolbarController *)arg1;
- (void)photoViewerToolbarControllerTappedMorePhotos:(PhotoViewerToolbarController *)arg1;
@end

