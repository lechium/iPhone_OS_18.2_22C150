//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUIPrivate/NSObject-Protocol.h>

@class PUDoubleTapZoomController, PUOneUpDragController, PUTilingView, UIGestureRecognizer, UIView;
@protocol PUDisplayLocationProvider, UIGestureRecognizerDelegate;

@protocol PUDoubleTapZoomControllerDelegate <NSObject>

@optional
- (PUOneUpDragController *)oneUpDragControllerForDoubleTapZoomController:(PUDoubleTapZoomController *)arg1;
- (_Bool)doubleTapZoomController:(PUDoubleTapZoomController *)arg1 canDoubleTapBeginAtLocationFromProvider:(id <PUDisplayLocationProvider>)arg2;
- (id <UIGestureRecognizerDelegate>)doubleTapZoomController:(PUDoubleTapZoomController *)arg1 delegateForGestureRecognizer:(UIGestureRecognizer *)arg2;
- (PUTilingView *)doubleTapZoomControllerTilingView:(PUDoubleTapZoomController *)arg1;
- (UIView *)doubleTapZoomControllerViewHostingGestureRecognizers:(PUDoubleTapZoomController *)arg1;
@end
