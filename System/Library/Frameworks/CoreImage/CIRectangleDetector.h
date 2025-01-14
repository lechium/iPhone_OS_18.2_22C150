//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIDetector.h"

@class CIContext, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CIRectangleDetector : CIDetector
{
    CIContext *context;	// 8 = 0x8
    NSMutableDictionary *featureOptions;	// 16 = 0x10
}

@property(retain, nonatomic) CIContext *context; // @synthesize context;
- (id)featuresInImage:(id)arg1 options:(id)arg2;	// IMP=0x00000000001be6dc
- (id)featuresInImage:(id)arg1;	// IMP=0x00000000001be6c8
- (void)dealloc;	// IMP=0x00000000001be68a
- (void)releaseResources;	// IMP=0x00000000001be653
- (id)initWithContext:(id)arg1 options:(id)arg2;	// IMP=0x00000000001be40e

@end

