//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIImage.h>

@interface UIImage (PKUIUtilities)
+ (id)pkui_imageWithColor:(id)arg1 scale:(double)arg2;	// IMP=0x0050000000908165
+ (id)pkui_imageWithColor:(id)arg1;	// IMP=0x00500000009080bc
+ (id)imageWithPKImage:(id)arg1;	// IMP=0x0050000000907eee
- (id)pkui_firstPixelColor;	// IMP=0x0010000000908cf7
- (CDStruct_5125ebce)pkui_alignmentSizeThatFills:(struct CGSize)arg1 maximumScale:(double)arg2;	// IMP=0x0010000000908bbe
- (CDStruct_5125ebce)pkui_alignmentSizeThatFills:(struct CGSize)arg1;	// IMP=0x0010000000908b97
- (CDStruct_5125ebce)pkui_alignmentSizeThatFits:(struct CGSize)arg1 maximumScale:(double)arg2;	// IMP=0x0010000000908a5e
- (CDStruct_5125ebce)pkui_alignmentSizeThatFits:(struct CGSize)arg1;	// IMP=0x0010000000908a37
- (struct CGSize)pkui_alignmentSize;	// IMP=0x00100000009089c8
- (id)pkui_imageWithAlpha:(double)arg1;	// IMP=0x0010000000908822
- (id)pkui_imageOverlaidWithColor:(id)arg1;	// IMP=0x0010000000908719
- (id)pkui_resizableImageByTilingVertically;	// IMP=0x00100000009085f6
- (id)pkui_resizableImageByTilingHorizontally;	// IMP=0x00100000009084cb
- (id)pkui_resizableImageByTilingCenterPixel;	// IMP=0x001000000090838b
@end
