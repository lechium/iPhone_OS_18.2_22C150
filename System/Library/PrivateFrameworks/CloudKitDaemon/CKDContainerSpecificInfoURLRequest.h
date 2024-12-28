//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKDURLRequest.h"

@class CKDContainerServerInfo, NSString;

@interface CKDContainerSpecificInfoURLRequest : CKDURLRequest
{
    _Bool _requireUserIDs;	// 8 = 0x8
    NSString *_containerIdentifier;	// 16 = 0x10
    CKDContainerServerInfo *_containerServerInfo;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000139cd5
@property(copy, nonatomic) CKDContainerServerInfo *containerServerInfo; // @synthesize containerServerInfo=_containerServerInfo;
@property(copy, nonatomic) NSString *containerIdentifier; // @synthesize containerIdentifier=_containerIdentifier;
@property(nonatomic) _Bool requireUserIDs; // @synthesize requireUserIDs=_requireUserIDs;
- (void)requestDidParseJSONObject:(id)arg1;	// IMP=0x0000000000138cd7
- (_Bool)hasRequestBody;	// IMP=0x0000000000138ccf
- (id)url;	// IMP=0x0000000000138a82
- (long long)partitionType;	// IMP=0x0000000000138a77
- (long long)serverType;	// IMP=0x0000000000138a6c
- (_Bool)usesiCloudAuthToken;	// IMP=0x0000000000138a64
- (_Bool)usesCloudKitAuthToken;	// IMP=0x0000000000138a5c
- (_Bool)allowsAuthedAccount;	// IMP=0x0000000000138a54
- (_Bool)allowsAnonymousAccount;	// IMP=0x0000000000138a3f
- (_Bool)requiresDeviceID;	// IMP=0x0000000000138a37
- (_Bool)requiresConfiguration;	// IMP=0x0000000000138a2f
- (void)fillOutEquivalencyPropertiesBuilder:(id)arg1;	// IMP=0x0000000000138994
- (id)initWithOperation:(id)arg1 containerIdentifier:(id)arg2;	// IMP=0x000000000013891c

@end
