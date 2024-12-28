//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PGMusicCurator : NSObject
{
}

+ (id)curateMusicForFeatures:(id)arg1 context:(id)arg2 progressReporter:(id)arg3 error:(id *)arg4;	// IMP=0x008000000028ab10
+ (id)generateDebugInformationForAssetCollection:(id)arg1 graph:(id)arg2 context:(id)arg3 progressReporter:(id)arg4 error:(id *)arg5;	// IMP=0x0080000000168340
+ (id)generateDebugInformationForSongWithAdamID:(id)arg1 context:(id)arg2 progressReporter:(id)arg3 error:(id *)arg4;	// IMP=0x0080000000168250
+ (id)extractMusicCurationFeaturesForMemory:(id)arg1 graph:(id)arg2 context:(id)arg3 progressReporter:(id)arg4 error:(id *)arg5;	// IMP=0x00800000001ec400
+ (id)extractMusicCurationFeaturesForEnrichedMemory:(id)arg1 graph:(id)arg2 context:(id)arg3 progressReporter:(id)arg4 error:(id *)arg5;	// IMP=0x008000000025e3d0
+ (id)extractMusicCurationFeaturesForAssets:(id)arg1 graph:(id)arg2 context:(id)arg3 progressReporter:(id)arg4 error:(id *)arg5;	// IMP=0x0080000000281560
+ (id)emptyCuration;	// IMP=0x008000000028aca0
+ (void)fetchSongAdamIDsForPurchasedSongID:(id)arg1 inflationContext:(id)arg2 progressReport:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00800000002d7cb0
+ (void)fetchSongDisplayMetadataJSONForAdamIDs:(id)arg1 inflationContext:(id)arg2 progressReporter:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00800000002d6bd0
+ (void)inflateDisplayMetadataForMusicCuration:(id)arg1 inflationContext:(id)arg2 curatorContext:(id)arg3 progressReporter:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00800000002d5e00
- (id)init;	// IMP=0x000000000028ac30

@end
