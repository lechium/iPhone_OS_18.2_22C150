//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUIPrivate/PXDisplayCollection-Protocol.h>

@class NSArray, NSString;

@protocol PXDisplayAssetCollection <PXDisplayCollection>
@property(readonly, nonatomic) unsigned long long estimatedAssetCount;
@property(readonly, nonatomic) NSString *localizedSmartDescription;
@property(readonly, nonatomic) NSString *localizedDateDescription;
@property(readonly, nonatomic) NSArray *localizedLocationNames;
@property(readonly, nonatomic) NSString *localizedDebugDescription;
@property(readonly, nonatomic) NSString *localizedSubtitle;
@property(readonly, nonatomic) NSString *uuid;
@property(readonly, nonatomic) long long px_highlightKind;
@property(readonly, nonatomic) unsigned short px_highlightEnrichmentState;
@property(readonly, nonatomic) _Bool isRecent;
@property(readonly, nonatomic) _Bool isAggregation;
@property(readonly, nonatomic) double promotionScore;
@property(readonly, nonatomic) _Bool isEnrichmentComplete;
@property(readonly, nonatomic) _Bool isEnriched;
- (NSString *)localizedDateDescriptionWithOptions:(unsigned long long)arg1;

@optional
@property(readonly, nonatomic) NSString *localizedShortDateDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,N

@end

