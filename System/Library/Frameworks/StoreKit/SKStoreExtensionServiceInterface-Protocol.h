//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreKit/NSObject-Protocol.h>

@class NSDictionary, NSString, NSURL;

@protocol SKStoreExtensionServiceInterface <NSObject>
- (void)openURL:(NSURL *)arg1 sourceApplication:(NSString *)arg2 annotation:(NSDictionary *)arg3;
- (void)setRequestedIdentifier:(NSString *)arg1;
- (void)setTabIdentifier:(NSString *)arg1;
- (void)setupWithParameters:(NSDictionary *)arg1;
@end

