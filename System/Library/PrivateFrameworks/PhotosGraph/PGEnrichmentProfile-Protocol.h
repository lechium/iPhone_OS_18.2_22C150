//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosGraph/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSString, PGCurationCriteria, PGCurationOptions, PGDejunkerDeduperOptions, PGGraph, PGHighlightTailorContext, PGHighlightTailorHighlightInfo, PGTitleTuple, PHAsset;
@protocol PGHighlightModel;

@protocol PGEnrichmentProfile <NSObject>
@property(readonly, nonatomic) NSDictionary *debugInfos;
@property(nonatomic) _Bool collectsDebugInfo;
@property(retain, nonatomic) PGDejunkerDeduperOptions *extendedCurationOptions;
@property(readonly, nonatomic) NSString *identifier;
- (PGCurationCriteria *)keyAssetCurationCriteriaWithHighlightInfo:(PGHighlightTailorHighlightInfo *)arg1 graph:(PGGraph *)arg2;
- (PGCurationOptions *)curationOptionsWithHighlightInfo:(PGHighlightTailorHighlightInfo *)arg1 sharingFilter:(unsigned short)arg2;
- (unsigned short)enrichmentStateWithHighlightInfo:(PGHighlightTailorHighlightInfo *)arg1 highlightTailorContext:(PGHighlightTailorContext *)arg2;
- (NSArray *)summaryCurationWithHighlightInfo:(PGHighlightTailorHighlightInfo *)arg1 sharingFilter:(unsigned short)arg2 progressBlock:(void (^)(double, _Bool *))arg3;
- (NSArray *)extendedCurationWithHighlightInfo:(PGHighlightTailorHighlightInfo *)arg1 sharingFilter:(unsigned short)arg2 progressBlock:(void (^)(double, _Bool *))arg3;
- (PHAsset *)keyAssetWithHighlightInfo:(PGHighlightTailorHighlightInfo *)arg1 sharingFilter:(unsigned short)arg2 graph:(PGGraph *)arg3 progressBlock:(void (^)(double, _Bool *))arg4;
- (NSDictionary *)momentProcessedLocationByMomentUUIDWithHighlightInfo:(PGHighlightTailorHighlightInfo *)arg1 graph:(PGGraph *)arg2;
- (NSDictionary *)momentTitleByMomentUUIDWithHighlightInfo:(PGHighlightTailorHighlightInfo *)arg1;
- (PGTitleTuple *)titleWithHighlightInfo:(PGHighlightTailorHighlightInfo *)arg1 sharingFilter:(unsigned short)arg2 curatedAssets:(NSArray *)arg3 keyAsset:(PHAsset *)arg4 createVerboseTitle:(_Bool)arg5 error:(out id *)arg6;
- (double)promotionScoreWithHighlightInfo:(PGHighlightTailorHighlightInfo *)arg1;
- (PGHighlightTailorHighlightInfo *)highlightInfoWithHighlight:(id <PGHighlightModel>)arg1 graph:(PGGraph *)arg2 highlightTailorContext:(PGHighlightTailorContext *)arg3;
- (_Bool)canEnrichHighlight:(id <PGHighlightModel>)arg1 withOptions:(unsigned long long)arg2;
- (_Bool)canUseLocationInformationWithHighlightInfo:(PGHighlightTailorHighlightInfo *)arg1 graph:(PGGraph *)arg2;

@optional
@property(readonly, nonatomic) unsigned short targetEnrichmentState;
// Preceding property had unknown attributes: ?
// Original attribute string: TS,?,R,N

@end

