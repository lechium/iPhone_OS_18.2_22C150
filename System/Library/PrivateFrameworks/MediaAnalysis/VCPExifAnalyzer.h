//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface VCPExifAnalyzer : NSObject
{
    NSDictionary *_properties;	// 8 = 0x8
    unsigned long long _requestedAnalyses;	// 16 = 0x10
    NSMutableDictionary *_results;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000018358e
- (int)analyzeAsset:(unsigned long long *)arg1 results:(id *)arg2;	// IMP=0x00000000001834fa
- (int)addFaceResults:(id)arg1 flags:(unsigned long long *)arg2;	// IMP=0x000000000018278c
- (struct CGAffineTransform)transformUprightAboutTopLeft:(unsigned int)arg1;	// IMP=0x0000000000182618
- (id)initWithProperties:(id)arg1 forAnalysisTypes:(unsigned long long)arg2;	// IMP=0x0000000000182558

@end
