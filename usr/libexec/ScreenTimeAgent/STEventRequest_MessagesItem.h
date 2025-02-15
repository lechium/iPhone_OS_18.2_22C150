//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class CEMAnyPayload, NSDate, NSString;

@interface STEventRequest_MessagesItem : CEMPayloadBase
{
    NSString *_inReplyTo;	// 16 = 0x10
    NSString *_eventType;	// 24 = 0x18
    NSDate *_timestamp;	// 32 = 0x20
    CEMAnyPayload *_payload;	// 40 = 0x28
}

+ (id)buildRequiredOnlyWithInReplyTo:(id)arg1 withEventType:(id)arg2 withTimestamp:(id)arg3;	// IMP=0x0020000000038132
+ (id)buildWithInReplyTo:(id)arg1 withEventType:(id)arg2 withTimestamp:(id)arg3 withPayload:(id)arg4;	// IMP=0x0010000000038055
+ (id)allowedKeys;	// IMP=0x0010000000037f91
- (void).cxx_destruct;	// IMP=0x0020000000038828
@property(copy, nonatomic) CEMAnyPayload *payload; // @synthesize payload=_payload;
@property(copy, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(copy, nonatomic) NSString *eventType; // @synthesize eventType=_eventType;
@property(copy, nonatomic) NSString *inReplyTo; // @synthesize inReplyTo=_inReplyTo;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000386cb
- (id)serializePayload;	// IMP=0x0010000000038595
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000381df

@end

