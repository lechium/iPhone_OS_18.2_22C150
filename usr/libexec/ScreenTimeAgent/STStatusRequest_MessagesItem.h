//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSArray, NSString;

@interface STStatusRequest_MessagesItem : CEMPayloadBase
{
    NSString *_inReplyTo;	// 16 = 0x10
    NSArray *_states;	// 24 = 0x18
}

+ (id)buildRequiredOnlyWithInReplyTo:(id)arg1 withStates:(id)arg2;	// IMP=0x00200000000b03f3
+ (id)buildWithInReplyTo:(id)arg1 withStates:(id)arg2;	// IMP=0x00100000000b0367
+ (id)allowedKeys;	// IMP=0x00100000000b02b9
- (void).cxx_destruct;	// IMP=0x00200000000b090c
@property(copy, nonatomic) NSArray *states; // @synthesize states=_states;
@property(copy, nonatomic) NSString *inReplyTo; // @synthesize inReplyTo=_inReplyTo;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000b0833
- (id)serializePayload;	// IMP=0x00100000000b075e
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000b047f

@end

