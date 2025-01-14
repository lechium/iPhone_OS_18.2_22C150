//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface UIDeduplicatorCompat : NSObject
{
    MISSING_TYPE *debugMode;	// 8 = 0x8
    MISSING_TYPE *debugScreenshotCount;	// 16 = 0x10
    MISSING_TYPE *log;	// 0 = 0x0
    MISSING_TYPE *screenGroupMap;	// 10880 = 0x2a80
    MISSING_TYPE *fingerprinter;	// 450086 = 0x6de26
}

- (void).cxx_destruct;	// IMP=0x000000000002d3f0
- (id)init;	// IMP=0x000000000002d390
- (id)identifyScreenshotWithId:(id)arg1 image:(struct CGImage *)arg2 error:(id *)arg3;	// IMP=0x000000000002d280
- (void)setDebugTo:(_Bool)arg1;	// IMP=0x000000000002d020
- (id)initWithPlatform:(long long)arg1 error:(id *)arg2;	// IMP=0x000000000002cd30
- (id)initWithShape:(long long)arg1 error:(id *)arg2;	// IMP=0x000000000002ca50
- (id)addElementsForScreenWithTargetScreenshot:(id)arg1 candidateElements:(id)arg2 screenGroupID:(id)arg3 error:(id *)arg4;	// IMP=0x000000000002c800
- (id)identifyElementsWithScreenshot:(id)arg1 rectArray:(id)arg2 error:(id *)arg3;	// IMP=0x000000000002c5d0

@end

