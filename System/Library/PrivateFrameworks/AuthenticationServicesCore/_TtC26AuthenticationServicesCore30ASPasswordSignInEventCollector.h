//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <swiftCore/SwiftNativeNSObject.h>

@class MISSING_TYPE, NSString;

@interface _TtC26AuthenticationServicesCore30ASPasswordSignInEventCollector : SwiftNativeNSObject
{
    MISSING_TYPE *$defaultActor;	// 4277009103 = 0xfeedfacf
    MISSING_TYPE *bundleIdentifierToSignInEvents;	// 112 = 0x70
}

- (id)init;	// IMP=0x000000000005b1e0
- (void)providerForRecentlyFilledCredentialWithUsername:(NSString *)arg1 forAppWithBundleIdentifier:(NSString *)arg2 completionHandler:(void (^)(NSString *))arg3;	// IMP=0x000000000005ae50
- (void)providerForRecentlyFilledCredentialWithUsername:(NSString *)arg1 forRelyingPartyIdentifier:(NSString *)arg2 inAppWithBundleIdentifier:(NSString *)arg3 completionHandler:(void (^)(NSString *))arg4;	// IMP=0x000000000005a960
- (void)didUseCredentialForUsername:(id)arg1 forHost:(id)arg2 fromProviderWithBundleIdentifier:(id)arg3 inAppWithBundleIdentifier:(id)arg4;	// IMP=0x0000000000059190
- (void)didUseCredentialForUsername:(id)arg1 forURL:(id)arg2 fromProviderWithBundleIdentifier:(id)arg3 inBrowserWithBundleIdentifier:(id)arg4;	// IMP=0x0000000000058a70

@end
