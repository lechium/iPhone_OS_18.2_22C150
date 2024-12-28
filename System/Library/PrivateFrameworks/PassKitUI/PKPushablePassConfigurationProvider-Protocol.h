//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitUI/NSObject-Protocol.h>

@class NSArray, PKAddIdentityDocumentConfiguration, PKAddSecureElementPassConfiguration, PKAddShareablePassConfiguration;

@protocol PKPushablePassConfigurationProvider <NSObject>
@property(readonly, nonatomic) __weak PKAddIdentityDocumentConfiguration *identityDocumentConfiguration;
@property(readonly, nonatomic) __weak PKAddShareablePassConfiguration *shareablePassConfiguration;
@property(readonly, nonatomic) PKAddSecureElementPassConfiguration *secureElementPassConfiguration;
@property(nonatomic) _Bool requiresNonceValidityChecks;
@property(readonly, nonatomic) NSArray *metadataProviders;
@end
