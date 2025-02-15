//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface VNCoreSceneUnderstandingDetectorTaxonomy : NSObject
{
    NSArray *_labels;	// 8 = 0x8
    NSDictionary *_classificationMetricsForLabelDictionary;	// 16 = 0x10
}

+ (id)taxonomyForCSUTaxonomy:(id)arg1 vocabularyNames:(id)arg2 error:(id *)arg3;	// IMP=0x0060000000376399
- (void).cxx_destruct;	// IMP=0x0000000000376358
@property(readonly, copy) NSArray *labels; // @synthesize labels=_labels;
- (id)classificationMetricsForLabel:(id)arg1;	// IMP=0x000000000037631e
- (id)labelsFilteredByDisallowedList:(id)arg1;	// IMP=0x0000000000376191
- (id)_initWithLabels:(id)arg1 classificationMetricsForLabelDictionary:(id)arg2;	// IMP=0x00000000003760ae

@end

