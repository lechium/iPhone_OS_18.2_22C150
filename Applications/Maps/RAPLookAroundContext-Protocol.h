//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class GEOPDMuninViewState, GEOPDPhotoPosition, GEOTileCoordinate, NSArray, NSData;

@protocol RAPLookAroundContext <NSObject>
@property(readonly, nonatomic) _Bool lookAroundLabelsEnabled;
@property(readonly, nonatomic) NSArray *reportedMuninImageResources;
@property(nonatomic) unsigned long long muninImageDataId;
@property(nonatomic) unsigned int muninMetadataTileBuildId;
@property(readonly, nonatomic) NSArray *reportedMuninRoadLabels;
@property(readonly, nonatomic) NSArray *reportedVisibleMUIDs;
@property(readonly, nonatomic) GEOTileCoordinate *reportedMuninTileCoordinate;
@property(readonly, nonatomic) GEOPDPhotoPosition *reportedMuninPhotoPosition;
@property(readonly, nonatomic) GEOPDMuninViewState *reportedMuninViewState;
@property(readonly, nonatomic) NSData *lookAroundSnapshotImageData;
@end

