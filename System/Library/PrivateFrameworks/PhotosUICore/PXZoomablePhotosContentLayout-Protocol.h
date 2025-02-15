//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/NSObject-Protocol.h>

@protocol PXZoomablePhotosContentLayout <NSObject>
@property(nonatomic) double accessoryAlpha;
@property(nonatomic) _Bool enablePerItemCornerRadius;
@property(nonatomic) _Bool enableEffects;
@property(nonatomic) _Bool loadItemsOutsideAnchorViewport;
@property(nonatomic) struct CGPoint anchorViewportCenter;
@property(retain, nonatomic) id anchorObjectReference;
@property(readonly, nonatomic) _Bool itemCaptionsVisible;
@property(readonly, nonatomic) _Bool supportsContentMode;
@property(readonly, nonatomic) struct CGRect loadedItemsRect;
@property(nonatomic) long long numberOfItems;
@property(readonly, nonatomic) struct _NSRange loadedItems;
@property(nonatomic) _Bool fillSafeAreaTopInset;
@property(nonatomic) _Bool hideIncompleteLastRowOrColumn;
@property(readonly, nonatomic) double rowHeight;
@property(readonly, nonatomic) long long visualItemShift;
@property(nonatomic) CDStruct_c2259bfa itemCornerRadius;
@property(nonatomic) double itemAspectRatio;
@property(nonatomic) unsigned char spriteInfoFlags;
@property(nonatomic) _Bool enablePerItemInsets;
@property(nonatomic) _Bool enableBestCropRect;
@property(nonatomic) double itemCaptionSpacing;
@property(nonatomic) struct CGSize interItemSpacing;
@property(nonatomic) struct UIEdgeInsets padding;
@property(nonatomic) long long numberOfColumns;
- (struct _NSRange)itemRangeForSpriteIndexRange:(struct _PXGSpriteIndexRange)arg1;
- (struct CGRect)frameForItem:(long long)arg1 usingInterItemSpacing:(struct CGSize)arg2;
- (long long)columnForItem:(long long)arg1;
- (struct CGRect)frameForItem:(long long)arg1;
- (long long)itemClosestTo:(struct CGPoint)arg1;
- (struct _NSRange)itemRangeInRect:(struct CGRect)arg1;
- (_Bool)shiftItem:(long long)arg1 toColumn:(long long)arg2 topPaddingRows:(long long)arg3 hideIncompleteRows:(_Bool)arg4;

@optional
@property(nonatomic) long long contentMode;
// Preceding property had unknown attributes: ?
// Original attribute string: Tq,?,N

@end

