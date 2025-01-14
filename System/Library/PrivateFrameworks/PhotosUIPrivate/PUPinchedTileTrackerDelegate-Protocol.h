//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUIPrivate/PUInteractiveTileTrackerDelegate-Protocol.h>

@class PUPinchedTileTracker, PUTileLayoutInfo;

@protocol PUPinchedTileTrackerDelegate <PUInteractiveTileTrackerDelegate>

@optional
- (PUTileLayoutInfo *)pinchedTiledTracker:(PUPinchedTileTracker *)arg1 finalLayoutInfoForTileWithLayoutInfo:(PUTileLayoutInfo *)arg2;
- (double)pinchedTiledTracker:(PUPinchedTileTracker *)arg1 initialAspectRatioForTileWithLayoutInfo:(PUTileLayoutInfo *)arg2;
@end

