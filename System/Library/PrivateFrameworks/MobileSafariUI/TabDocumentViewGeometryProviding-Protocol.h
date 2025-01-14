//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileSafariUI/NSObject-Protocol.h>

@class TabDocumentView;

@protocol TabDocumentViewGeometryProviding <NSObject>
- (void)tabDocumentViewDidUpdateDistanceScrolled:(TabDocumentView *)arg1;
- (double)minimumEffectiveDeviceWidthForTabDocumentView:(TabDocumentView *)arg1;
- (struct SFScrollIndicatorInsets)scrollIndicatorInsetsForTabDocumentView:(TabDocumentView *)arg1;
- (struct UIEdgeInsets)scrollViewContentInsetAdjustmentsForTabDocumentView:(TabDocumentView *)arg1;
- (struct CGSize)maximumUnobscuredWebViewLayoutSizeForTabDocumentView:(TabDocumentView *)arg1;
- (struct CGSize)minimumUnobscuredWebViewLayoutSizeForTabDocumentView:(TabDocumentView *)arg1;
- (struct CGSize)minimumWebViewLayoutSizeForTabDocumentView:(TabDocumentView *)arg1;
- (struct UIEdgeInsets)obscuredScrollViewInsetsForTabDocumentView:(TabDocumentView *)arg1 unobscuredSafeAreaInsets:(struct UIEdgeInsets *)arg2;
- (_Bool)inElementFullscreenForTabDocumentView:(TabDocumentView *)arg1;
- (_Bool)shouldFreezeWebViewUpdatesForTabDocumentView:(TabDocumentView *)arg1;

@optional
- (unsigned long long)tabDocumentView:(TabDocumentView *)arg1 contentOffsetAdjustmentEdgeWithPreviousContentInset:(struct UIEdgeInsets)arg2;
- (_Bool)shouldModifyWebViewGeometryForTabDocumentView:(TabDocumentView *)arg1;
@end

