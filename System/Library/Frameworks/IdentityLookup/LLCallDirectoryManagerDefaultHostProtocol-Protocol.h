//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IdentityLookup/NSObject-Protocol.h>

@class NSString;

@protocol LLCallDirectoryManagerDefaultHostProtocol <NSObject>
- (oneway void)setEnabled:(_Bool)arg1 forLiveLookupExtensionWithIdentifier:(NSString *)arg2 reply:(void (^)(NSError *))arg3;
- (oneway void)launchCallDirectorySettingsWithReply:(void (^)(NSError *))arg1;
- (oneway void)getEnabledForLiveLookupExtensionWithIdentifier:(NSString *)arg1 reply:(void (^)(_Bool, NSError *))arg2;
- (oneway void)refreshExtensionContextForLiveLookupExtensionWithIdentifier:(NSString *)arg1 reply:(void (^)(NSError *))arg2;
- (oneway void)refreshPIRParametersForLiveLookupExtensionWithIdentifier:(NSString *)arg1 reply:(void (^)(NSError *))arg2;
- (oneway void)resetLiveLookupExtensionWithIdentifier:(NSString *)arg1 reply:(void (^)(NSError *))arg2;
@end

