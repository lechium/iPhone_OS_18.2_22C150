//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "PUTileLayoutInfo.h"

__attribute__((visibility("hidden")))
@interface PUAccessoryTileLayoutInfo : PUTileLayoutInfo
{
    double _minimumVisibleHeight;	// 8 = 0x8
    struct CGRect _untransformedContentFrame;	// 16 = 0x10
    struct UIEdgeInsets _contentInsets;	// 48 = 0x30
}

@property(readonly, nonatomic) double minimumVisibleHeight; // @synthesize minimumVisibleHeight=_minimumVisibleHeight;
@property(readonly, nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(readonly, nonatomic) struct CGRect untransformedContentFrame; // @synthesize untransformedContentFrame=_untransformedContentFrame;
- (id)clone;	// IMP=0x000000000018d0ee
- (_Bool)isGeometryEqualToLayoutInfo:(id)arg1;	// IMP=0x000000000018cf31
- (id)initWithTileIdentifier:(id)arg1 center:(struct CGPoint)arg2 size:(struct CGSize)arg3 alpha:(double)arg4 transform:(struct CGAffineTransform)arg5 zPosition:(double)arg6 coordinateSystem:(id)arg7 untransformedContentFrame:(struct CGRect)arg8 contentInsets:(struct UIEdgeInsets)arg9 minimumVisibleHeight:(double)arg10;	// IMP=0x000000000018ce95
- (id)initWithTileIdentifier:(id)arg1 center:(struct CGPoint)arg2 size:(struct CGSize)arg3 alpha:(double)arg4 transform:(struct CGAffineTransform)arg5 zPosition:(double)arg6 coordinateSystem:(id)arg7;	// IMP=0x000000000018ce2b

@end

