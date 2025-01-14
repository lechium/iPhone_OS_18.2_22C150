//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class PXTilingChange, PXTilingController;
@protocol PXTileIdentifierConverter, PXTileTransitionAnimationCoordinator;

@protocol PXTilingControllerTransitionDelegate <NSObject>

@optional
- (id <PXTileTransitionAnimationCoordinator>)tilingController:(PXTilingController *)arg1 transitionAnimationCoordinatorForChange:(PXTilingChange *)arg2;
- (id <PXTileIdentifierConverter>)tilingController:(PXTilingController *)arg1 tileIdentifierConverterForChange:(PXTilingChange *)arg2;
- (void)tilingController:(PXTilingController *)arg1 prepareForChange:(PXTilingChange *)arg2;
@end

