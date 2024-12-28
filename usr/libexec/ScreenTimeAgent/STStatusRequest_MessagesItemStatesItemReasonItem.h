//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSDictionary, NSString;

@interface STStatusRequest_MessagesItemStatesItemReasonItem : CEMPayloadBase
{
    NSString *_code;	// 16 = 0x10
    NSDictionary *_ANY;	// 24 = 0x18
}

+ (id)buildRequiredOnlyWithCode:(id)arg1;	// IMP=0x00200000000b1d32
+ (id)buildWithCode:(id)arg1;	// IMP=0x00100000000b1ce5
+ (id)allowedKeys;	// IMP=0x00100000000b1c42
- (void).cxx_destruct;	// IMP=0x00200000000b2411
@property(copy, nonatomic) NSDictionary *ANY; // @synthesize ANY=_ANY;
@property(copy, nonatomic) NSString *code; // @synthesize code=_code;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000b2338
- (id)serializePayload;	// IMP=0x00100000000b210a
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000b1d7f

@end
