//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKDURLRequest.h"

@class CKDServerConfiguration;

@interface CKDGlobalConfigurationURLRequest : CKDURLRequest
{
    CKDServerConfiguration *_configuration;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000002bd330
@property(retain, nonatomic) CKDServerConfiguration *configuration; // @synthesize configuration=_configuration;
- (void)requestDidParsePlistObject:(id)arg1;	// IMP=0x00000000002bd1bc
- (_Bool)hasRequestBody;	// IMP=0x00000000002bd1b4
- (id)httpMethod;	// IMP=0x00000000002bd1a7
- (id)url;	// IMP=0x00000000002bd01e
- (long long)partitionType;	// IMP=0x00000000002bd013
- (long long)serverType;	// IMP=0x00000000002bd008
- (id)additionalHeaderValues;	// IMP=0x00000000002bcf1f
- (void)fillOutEquivalencyPropertiesBuilder:(id)arg1;	// IMP=0x00000000002bcef0
- (_Bool)allowsAnonymousAccount;	// IMP=0x00000000002bcee8
- (_Bool)requiresDeviceID;	// IMP=0x00000000002bcee0
- (_Bool)requiresConfiguration;	// IMP=0x00000000002bced8

@end

