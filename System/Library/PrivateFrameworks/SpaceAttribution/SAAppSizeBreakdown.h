//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface SAAppSizeBreakdown : NSObject
{
    NSMutableDictionary *_dataPathsSizes;	// 8 = 0x8
    NSMutableDictionary *_fixedPathsSizes;	// 16 = 0x10
    unsigned long long _tagsSize;	// 24 = 0x18
    unsigned long long _pluginCacheSize;	// 32 = 0x20
    unsigned long long _maxPathLength;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000080f4
@property unsigned long long maxPathLength; // @synthesize maxPathLength=_maxPathLength;
@property unsigned long long pluginCacheSize; // @synthesize pluginCacheSize=_pluginCacheSize;
@property unsigned long long tagsSize; // @synthesize tagsSize=_tagsSize;
@property(retain) NSMutableDictionary *fixedPathsSizes; // @synthesize fixedPathsSizes=_fixedPathsSizes;
@property(retain) NSMutableDictionary *dataPathsSizes; // @synthesize dataPathsSizes=_dataPathsSizes;
- (id)generateDictionary;	// IMP=0x0000000000007f57
- (void)mergeWithAppSizeBreakdown:(id)arg1;	// IMP=0x0000000000007e6d
- (void)addPluginCacheSize:(unsigned long long)arg1;	// IMP=0x0000000000007e63
- (void)addTagSize:(unsigned long long)arg1;	// IMP=0x0000000000007e59
- (void)updatePath:(id)arg1 cloneSize:(unsigned long long)arg2;	// IMP=0x0000000000007d96
- (void)updatePath:(id)arg1 cacheSize:(unsigned long long)arg2;	// IMP=0x0000000000007cd3
- (void)addPath:(id)arg1 fixedPath:(_Bool)arg2 size:(unsigned long long)arg3;	// IMP=0x0000000000007c2b
- (id)init;	// IMP=0x0000000000007ba7

@end

