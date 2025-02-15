//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MADEmbeddingFetchOptions, MADEmbeddingSearchOptions, NSArray, NSSet, NSURL;

@protocol MADEmbeddingStoreServerProtocol
- (void)prewarmSearchWithConcurrencyLimit:(unsigned long long)arg1 photoLibraryURL:(NSURL *)arg2 reply:(void (^)(NSError *))arg3;
- (void)searchWithEmbeddings:(NSArray *)arg1 photoLibraryURL:(NSURL *)arg2 options:(MADEmbeddingSearchOptions *)arg3 reply:(void (^)(NSArray *, NSError *))arg4;
- (void)fetchEmbeddingsWithAssetUUIDs:(NSSet *)arg1 photoLibraryURL:(NSURL *)arg2 options:(MADEmbeddingFetchOptions *)arg3 reply:(void (^)(NSDictionary *, NSError *))arg4;
- (void)requestEmbeddingStoreSandboxExtensionWithPhotoLibraryURL:(NSURL *)arg1 reply:(void (^)(NSString *, NSError *))arg2;
@end

