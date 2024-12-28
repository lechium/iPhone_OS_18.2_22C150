//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _LTDConfigurationService : NSObject
{
}

+ (void)supportedLocalePairsForTask:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00800000000158d4
+ (id)supportedLocalePairsForTask:(long long)arg1 error:(id *)arg2;	// IMP=0x008000000001577e
+ (void)aneConfigurationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0080000000015653
+ (id)aneConfigurationWithError:(id *)arg1;	// IMP=0x00800000000155ed
+ (void)assetConfigurationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00800000000154c2
+ (id)assetConfigurationWithError:(id *)arg1;	// IMP=0x0080000000015463
+ (void)textStreamingConfigurationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0080000000015338
+ (id)textStreamingConfigurationWithError:(id *)arg1;	// IMP=0x00800000000152dc
+ (void)siriConfigurationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00800000000151b1
+ (id)siriConfigurationWithError:(id *)arg1;	// IMP=0x0080000000015152
+ (void)offlineConfigurationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0080000000015027
+ (id)offlineConfigurationWithError:(id *)arg1;	// IMP=0x0080000000014fc8
+ (void)asrConfigurationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0080000000014e9d
+ (id)asrConfigurationWithError:(id *)arg1;	// IMP=0x0080000000014e3f
+ (void)flushCache;	// IMP=0x0080000000014e02
+ (id)deserializedPlistContentsOf:(id)arg1 error:(id *)arg2;	// IMP=0x0080000000014ba0
+ (id)overlay:(id)arg1 with:(id)arg2;	// IMP=0x0080000000014af3
+ (id)preferenceOverridesFor:(long long)arg1;	// IMP=0x00800000000149f0
+ (id)urlForType:(long long)arg1 source:(long long)arg2;	// IMP=0x0080000000014759
+ (id)configurationForType:(long long)arg1 error:(id *)arg2;	// IMP=0x0080000000013e71
+ (void)configurationForType:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0080000000013d47
+ (id)_queue;	// IMP=0x0080000000013cf0
+ (id)cache;	// IMP=0x0080000000013c9b
+ (id)fileNameForType:(long long)arg1;	// IMP=0x0080000000013c7c

@end
