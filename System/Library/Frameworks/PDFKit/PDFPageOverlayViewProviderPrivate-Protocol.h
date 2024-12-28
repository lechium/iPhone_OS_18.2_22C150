//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PDFKit/PDFPageOverlayViewProvider-Protocol.h>

@class PDFView;

@protocol PDFPageOverlayViewProviderPrivate <PDFPageOverlayViewProvider>

@optional
@property(readonly, nonatomic) _Bool shouldVerticallyFlipOverlayViews;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N

- (void)teardownGestureRecognizersForView:(PDFView *)arg1;
- (void)setupGestureRecognizersForView:(PDFView *)arg1;
@end
