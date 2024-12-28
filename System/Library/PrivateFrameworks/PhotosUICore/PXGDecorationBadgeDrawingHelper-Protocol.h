//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, PXGDecoratingLayout, PXGViewEnvironment, UIColor;

@protocol PXGDecorationBadgeDrawingHelper
- (void)drawWithDecorationInfo:(struct PXGDecorationBadgeInfo)arg1 solidColorOverlay:(UIColor *)arg2 debugDecoration:(NSDictionary *)arg3 cornerRadius:(CDStruct_c2259bfa)arg4 context:(struct CGContext *)arg5 viewport:(struct CGRect)arg6 screenScale:(double)arg7 viewEnvironment:(PXGViewEnvironment *)arg8 userInterfaceDirection:(unsigned long long)arg9;
- (id)cacheKeyForDecorationInfo:(struct PXGDecorationBadgeInfo)arg1 solidColorOverlay:(UIColor *)arg2 debugDecoration:(NSDictionary *)arg3 targetSize:(struct CGSize)arg4 cornerRadius:(CDStruct_c2259bfa)arg5 screenScale:(double)arg6 viewEnvironment:(PXGViewEnvironment *)arg7 userInterfaceDirection:(unsigned long long)arg8;
- (struct PXGDecorationBadgeInfo)decorationSpriteInfoForDecoratedSpriteIndex:(unsigned int)arg1 decorationType:(long long)arg2 decoratingLayout:(PXGDecoratingLayout *)arg3 assetDecorationInfo:(struct PXGAssetDecorationInfo)arg4 overallSelectionOrder:(long long)arg5 isItemSelected:(_Bool)arg6 isItemHighlighted:(_Bool)arg7 isItemDragged:(_Bool)arg8;
@end
