//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, NSString;

@interface _TtC11PhotosGraph24PGUpNextDebugInfoBuilder : NSObject
{
    MISSING_TYPE *wantsVerboseDebugInfo;	// 8 = 0x8
    MISSING_TYPE *inputDebugInfo;	// 16 = 0x10
    MISSING_TYPE *rootMemoryIsAggregation;	// 32 = 0x20
    MISSING_TYPE *rootMemoryNodeUniqueIdentifier;	// 40 = 0x28
    MISSING_TYPE *momentUUIDs;	// 56 = 0x38
    MISSING_TYPE *featureWeightVectors;	// 64 = 0x40
    MISSING_TYPE *suggestionFilteringLogs;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000174660
@property(nonatomic, readonly) NSString *debugInfo;
- (void)addSuggestionFilteringLog:(id)arg1;	// IMP=0x0000000000173860
- (id)init;	// IMP=0x0000000000173760
@property(nonatomic, copy) NSArray *featureWeightVectors;
@property(nonatomic, copy) NSArray *momentUUIDs;
@property(nonatomic, copy) NSString *rootMemoryNodeUniqueIdentifier;
@property(nonatomic) _Bool rootMemoryIsAggregation; // @synthesize rootMemoryIsAggregation;
@property(nonatomic, copy) NSString *inputDebugInfo;
@property(nonatomic) _Bool wantsVerboseDebugInfo; // @synthesize wantsVerboseDebugInfo;

@end
