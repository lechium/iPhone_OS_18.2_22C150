//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchAssets/NSObject-Protocol.h>
#import <SearchAssets/SAAssetManagerProtocol-Protocol.h>

@class NSString;
@protocol PrefilterSafariSummarizationPrefetchModelProtocol;

@protocol SASafariAssistantAssetManagerProtocol <SAAssetManagerProtocol, NSObject>
- (NSString *)assetVersionForLocale:(NSString *)arg1;
- (void)resetSafariSummarizationAssets;
- (void)unsubscribeFromSafariSummarizationAssetsWithCompletionHandler:(void (^)(void))arg1;
- (void)ensureSafariSummarizationAssetsDownloadedForLocale:(NSString *)arg1 completionHandler:(void (^)(void))arg2;
- (id <PrefilterSafariSummarizationPrefetchModelProtocol>)prefilterSafariSummarizationPrefetchRequestModelWithUrlString:(NSString *)arg1;
- (id <PrefilterSafariSummarizationPrefetchModelProtocol>)prefilterSafariSummarizationPrefetchRequestModelWithUrlString:(NSString *)arg1 prefetchHashPrefixLength:(unsigned long long)arg2;
- (NSString *)prefilterSafariSummarizationPrefetchRequestWithUrlString:(NSString *)arg1 prefetchHashPrefixLength:(unsigned long long)arg2;
- (void)subscribeToAndPreloadSafariSummarizationAssetsForLocale:(NSString *)arg1 completionHandler:(void (^)(void))arg2;
@end
