//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "PUTileLayoutInfo.h"

__attribute__((visibility("hidden")))
@interface PUCroppedTileLayoutInfo : PUTileLayoutInfo
{
}

- (id)description;	// IMP=0x000000000027b381
- (id)clone;	// IMP=0x000000000027b343
- (id)initWithTileIdentifier:(id)arg1 center:(struct CGPoint)arg2 size:(struct CGSize)arg3 cropInsets:(struct UIEdgeInsets)arg4 verticalLegibilityFraction:(double)arg5 alpha:(double)arg6 cornerRadius:(double)arg7 cornerCurve:(id)arg8 cornerMask:(unsigned long long)arg9 transform:(struct CGAffineTransform)arg10 zPosition:(double)arg11 contentsRect:(struct CGRect)arg12 coordinateSystem:(id)arg13;	// IMP=0x000000000027b28c
- (id)initWithTileIdentifier:(id)arg1 center:(struct CGPoint)arg2 size:(struct CGSize)arg3 alpha:(double)arg4 transform:(struct CGAffineTransform)arg5 zPosition:(double)arg6 contentsRect:(struct CGRect)arg7 coordinateSystem:(id)arg8;	// IMP=0x000000000027b217

@end
