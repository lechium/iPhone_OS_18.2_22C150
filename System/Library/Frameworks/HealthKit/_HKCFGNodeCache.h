//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _HKCFGNodeCache : NSObject
{
    NSMutableDictionary *_cache;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000019a93
- (void)cacheNodes:(id)arg1 forPosition:(unsigned long long)arg2 nonTerminal:(id)arg3 lengthAllowance:(unsigned long long)arg4;	// IMP=0x00000000000194b0
- (id)nodesForPosition:(unsigned long long)arg1 nonTerminal:(id)arg2 withLengthAllowance:(unsigned long long)arg3;	// IMP=0x0000000000018f54
- (id)init;	// IMP=0x000000000001865e

@end
