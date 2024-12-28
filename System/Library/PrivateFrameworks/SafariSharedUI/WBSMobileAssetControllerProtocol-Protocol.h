//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSString;
@protocol WBSMobileAssetControllerDelegate;

@protocol WBSMobileAssetControllerProtocol
@property(readonly, nonatomic) double updateInterval;
@property(retain, nonatomic) NSDate *lastUpdateDate;
@property __weak id <WBSMobileAssetControllerDelegate> delegate;
- (void)queryURL:(void (^)(NSURL *, NSError *))arg1;

@optional
- (void)downloadMobileAssetBackgroundImage:(NSString *)arg1 completionHandler:(void (^)(MAAsset *, NSError *))arg2;
@end
