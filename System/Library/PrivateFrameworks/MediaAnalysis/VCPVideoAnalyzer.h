//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCPVideoAnalyzer : NSObject
{
}

+ (unsigned long long)dependencies;	// IMP=0x0080000000394059
- (id)results;	// IMP=0x00000000003941bf
- (int)finishAnalysisPass:(CDStruct_e83c9415)arg1;	// IMP=0x0000000000394110
- (int)analyzeFrame:(struct __CVBuffer *)arg1 withTimestamp:(CDStruct_1b6d18a9)arg2 andDuration:(CDStruct_1b6d18a9)arg3 flags:(unsigned long long *)arg4;	// IMP=0x0000000000394061

@end
