//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

__attribute__((visibility("hidden")))
@interface _TtC12SearchAssets29SASafariAssistantAssetManager : NSObject
{
    MISSING_TYPE *activityMonitor;	// 8 = 0x8
    MISSING_TYPE *deviceContext;	// 16 = 0x10
    MISSING_TYPE *assetProvider;	// 32 = 0x20
    MISSING_TYPE *filter;	// 72 = 0x48
    MISSING_TYPE *assetSpeciferHandler;	// 112 = 0x70
    MISSING_TYPE *shouldReportAnalytics;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x0000000000004237
- (id)init;	// IMP=0x000000000000421d
- (id)assetVersionForLocale:(id)arg1;	// IMP=0x0000000000004028
- (void)resetSafariSummarizationAssets;	// IMP=0x0000000000003de7
- (void)unsubscribeFromSafariSummarizationAssetsWithCompletionHandler:(void (^)(void))arg1;	// IMP=0x0000000000003c3e
- (id)prefilterSafariSummarizationPrefetchRequestWithUrlString:(id)arg1 prefetchHashPrefixLength:(unsigned long long)arg2;	// IMP=0x0000000000003ad6
- (id)prefilterSafariSummarizationPrefetchRequestModelWithUrlString:(id)arg1 prefetchHashPrefixLength:(unsigned long long)arg2;	// IMP=0x0000000000003a17
- (id)prefilterSafariSummarizationPrefetchRequestModelWithUrlString:(id)arg1;	// IMP=0x00000000000039b6
- (void)ensureSafariSummarizationAssetsDownloadedForLocale:(NSString *)arg1 completionHandler:(void (^)(void))arg2;	// IMP=0x00000000000036a5
- (void)subscribeToAndPreloadSafariSummarizationAssetsForLocale:(NSString *)arg1 completionHandler:(void (^)(void))arg2;	// IMP=0x0000000000002f1a

@end
