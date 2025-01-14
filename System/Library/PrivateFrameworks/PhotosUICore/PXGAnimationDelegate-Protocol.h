//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class NSIndexSet, PXGAnimation, PXGLayout;

@protocol PXGAnimationDelegate <NSObject>
- (void)animation:(PXGAnimation *)arg1 adjustGeometries:(inout CDStruct_4f725fed *)arg2 styles:(inout CDStruct_a79e78a9 *)arg3 infos:(inout CDStruct_12471299 *)arg4 forSpriteDisappearingFromRootIndexRange:(struct _PXGSpriteIndexRange)arg5;
- (void)animation:(PXGAnimation *)arg1 adjustGeometries:(inout CDStruct_4f725fed *)arg2 styles:(inout CDStruct_a79e78a9 *)arg3 infos:(inout CDStruct_12471299 *)arg4 forSpriteAppearingIntoRootIndexRange:(struct _PXGSpriteIndexRange)arg5;
- (void)animation:(PXGAnimation *)arg1 prepareWithRootLayout:(PXGLayout *)arg2 viewportShift:(struct CGPoint)arg3;

@optional
- (void)animation:(PXGAnimation *)arg1 adjustPresentedGeometries:(CDStruct_4f725fed *)arg2 styles:(CDStruct_a79e78a9 *)arg3 infos:(CDStruct_12471299 *)arg4 count:(unsigned int)arg5;
- (NSIndexSet *)animation:(PXGAnimation *)arg1 doubleSidedAnimatedSpriteIndexesForModifiedSpriteIndexes:(NSIndexSet *)arg2 rootLayout:(PXGLayout *)arg3 presentedGeometries:(const CDStruct_4f725fed *)arg4 styles:(const CDStruct_a79e78a9 *)arg5 infos:(const CDStruct_12471299 *)arg6;
- (void)animation:(PXGAnimation *)arg1 updateSpriteTransferMap:(inout unsigned int *)arg2 forSpritesRemovedFromIndexes:(NSIndexSet *)arg3 presentedGeometries:(const CDStruct_4f725fed *)arg4 styles:(const CDStruct_a79e78a9 *)arg5 infos:(const CDStruct_12471299 *)arg6 spritesInsertedToIndexes:(NSIndexSet *)arg7 targetGeometries:(const CDStruct_4f725fed *)arg8 styles:(const CDStruct_a79e78a9 *)arg9 infos:(const CDStruct_12471299 *)arg10 rootLayout:(PXGLayout *)arg11;
@end

