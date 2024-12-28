//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVURLAsset, NSArray;

@protocol FCAVAssetKeyManagerType
- (void)refreshKeysIfNearExpiration:(NSArray *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)fetchKeysWithIdentifiers:(NSArray *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)registerAVURLAssetForAutomaticKeyManagement:(AVURLAsset *)arg1;
@end
