//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class PDFThumbnailView, PDFView, _SSSPDFPageMiniMapView;

@interface _SSSPDFThumbnailView : UIView
{
    PDFView *_pdfView;	// 8 = 0x8
    _SSSPDFPageMiniMapView *_miniMapView;	// 16 = 0x10
    PDFThumbnailView *_thumbnailView;	// 24 = 0x18
    struct CGRect _scrollViewVisibleRectInPDFView;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000000420d3
@property(retain, nonatomic) PDFThumbnailView *thumbnailView; // @synthesize thumbnailView=_thumbnailView;
@property(retain, nonatomic) _SSSPDFPageMiniMapView *miniMapView; // @synthesize miniMapView=_miniMapView;
@property(nonatomic) struct CGRect scrollViewVisibleRectInPDFView; // @synthesize scrollViewVisibleRectInPDFView=_scrollViewVisibleRectInPDFView;
@property(retain, nonatomic) PDFView *pdfView; // @synthesize pdfView=_pdfView;
- (void)createMiniMapView;	// IMP=0x0010000000041fb3
- (void)createThumbnailView;	// IMP=0x0010000000041ea3
- (_Bool)shouldUseMiniMapView;	// IMP=0x0010000000041e4f
- (_Bool)shouldShowThumbnailOptionView;	// IMP=0x0010000000041e11
- (_Bool)isShowingThumbnailOptionView;	// IMP=0x0010000000041dec
@property(nonatomic) _Bool shouldUpdate;
- (void)layoutSubviews;	// IMP=0x0010000000041b52

@end
