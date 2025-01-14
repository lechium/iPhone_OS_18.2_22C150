//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface STStatusRequest_MessagesItemStatesItemAssetsUsedItem : CEMPayloadBase
{
    NSString *_assetIdentifier;	// 16 = 0x10
    NSString *_serverHash;	// 24 = 0x18
}

+ (id)buildRequiredOnlyWithAssetIdentifier:(id)arg1 withServerHash:(id)arg2;	// IMP=0x00200000000b1726
+ (id)buildWithAssetIdentifier:(id)arg1 withServerHash:(id)arg2;	// IMP=0x00100000000b169a
+ (id)allowedKeys;	// IMP=0x00100000000b15ec
- (void).cxx_destruct;	// IMP=0x00200000000b1c11
@property(copy, nonatomic) NSString *serverHash; // @synthesize serverHash=_serverHash;
@property(copy, nonatomic) NSString *assetIdentifier; // @synthesize assetIdentifier=_assetIdentifier;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000b1b38
- (id)serializePayload;	// IMP=0x00100000000b1a7b
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000b17b2

@end

