//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TelephonyUtilities/NSObject-Protocol.h>

@class NSString, TUDialRequest;
@protocol TUCallProviderManagerXPCClient;

@protocol TUCallProviderManagerXPCServer <NSObject>
- (void)unregisterClient:(id <TUCallProviderManagerXPCClient>)arg1;
- (void)registerClient:(id <TUCallProviderManagerXPCClient>)arg1;
- (oneway void)defaultAppProvider:(void (^)(TUCallProvider *))arg1;
- (oneway void)sortedProviders:(void (^)(NSArray *))arg1;
- (oneway void)launchAppForDialRequest:(TUDialRequest *)arg1 reply:(void (^)(NSError *))arg2;
- (oneway void)donateUserIntentForProviderWithIdentifier:(NSString *)arg1;
- (oneway void)providersByIdentifier:(void (^)(NSDictionary *, NSDictionary *, NSDictionary *))arg1;
@end

