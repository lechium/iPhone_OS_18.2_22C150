//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVTPreset, NSMutableArray;

__attribute__((visibility("hidden")))
@interface AVTPresetStore : NSObject
{
    AVTPreset *_presets[40];	// 8 = 0x8
    AVTPreset *_resolvedPresets[40];	// 328 = 0x148
    NSMutableArray *_unresolvedDependencies[40];	// 648 = 0x288
    unsigned long long _unresolvedDependencyCount;	// 968 = 0x3c8
}

- (void).cxx_destruct;	// IMP=0x00000000000037f4
- (void)solveDependenciesForCategory:(long long)arg1;	// IMP=0x0000000000002e3b
- (unsigned long long)solveDependencies;	// IMP=0x0000000000002c07
- (void)registerDependenciesForPreset:(id)arg1 previouslyRegisteredPresets:(id)arg2;	// IMP=0x0000000000002595
- (_Bool)hasUnresolvedDependenciesForCategory:(long long)arg1;	// IMP=0x0000000000002574
- (id)init;	// IMP=0x000000000000244a

@end

