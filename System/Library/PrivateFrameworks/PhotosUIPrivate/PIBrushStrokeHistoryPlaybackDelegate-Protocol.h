//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUIPrivate/NSObject-Protocol.h>

@class NUBrushStroke, PIInpaintMask;

@protocol PIBrushStrokeHistoryPlaybackDelegate <NSObject>
- (PIInpaintMask *)brushStrokeExclusionMaskForStrokeStartingAtImageSpacePoint:(struct CGPoint)arg1 withRadius:(double)arg2;
- (void)addObjectRemovalUsingImageSpaceStroke:(NUBrushStroke *)arg1 exclusionMask:(PIInpaintMask *)arg2 completion:(void (^)(void))arg3;
- (void)addImageSpaceInpaintingStroke:(NUBrushStroke *)arg1 exclusionMask:(PIInpaintMask *)arg2 closeAndFillStroke:(_Bool)arg3 needsPixellation:(_Bool)arg4 recordStroke:(_Bool)arg5 completion:(void (^)(void))arg6;
- (void)addObjectRemovalAtImageSpacePoint:(struct CGPoint)arg1 completion:(void (^)(void))arg2;
@end
