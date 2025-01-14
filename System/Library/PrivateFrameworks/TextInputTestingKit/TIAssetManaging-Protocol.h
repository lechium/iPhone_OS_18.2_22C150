//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TextInputTestingKit/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSString, TIInputMode;

@protocol TIAssetManaging <NSObject>
@property(copy, nonatomic) CDUnknownBlockType preferencesProviderBlock;
@property(copy, nonatomic) CDUnknownBlockType enabledInputModeIdentifiersProviderBlock;
- (void)updateAssetForInputModeIdentifier:(NSString *)arg1 callback:(void (^)(_Bool, NSError *))arg2;
- (void)fetchAssetUpdateStatusForInputModeIdentifier:(NSString *)arg1 callback:(void (^)(long long, NSError *))arg2;
- (NSArray *)topActiveRegions;
- (NSArray *)enabledInputModes;
- (void)removeLinguisticAssetsAssertionWithIdentifier:(NSString *)arg1 forClientID:(NSString *)arg2 withHandler:(void (^)(NSError *))arg3;
- (void)addLinguisticAssetsAssertionForLanguage:(NSString *)arg1 assertionID:(NSString *)arg2 region:(NSDictionary *)arg3 clientID:(NSString *)arg4 withHandler:(void (^)(NSError *))arg5;
- (void)requestAssetDownloadForLanguage:(NSString *)arg1 completion:(void (^)(long long))arg2;
- (void)ddsAssetsForInputMode:(TIInputMode *)arg1 cachedOnly:(_Bool)arg2 completion:(void (^)(NSArray *))arg3;
- (void)ddsAssetContentItemsWithContentType:(NSString *)arg1 inputMode:(TIInputMode *)arg2 filteredWithRegion:(_Bool)arg3 completion:(void (^)(NSArray *))arg4;
- (NSArray *)ddsAssetContentItemsWithContentType:(NSString *)arg1 inputMode:(TIInputMode *)arg2 filteredWithRegion:(_Bool)arg3;
@end

