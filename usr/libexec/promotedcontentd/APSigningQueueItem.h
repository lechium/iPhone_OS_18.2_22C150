//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APAttributionRequest, NSData, NSDate;

@interface APSigningQueueItem : NSObject
{
    APAttributionRequest *_request;	// 8 = 0x8
    NSDate *_requestTimestamp;	// 16 = 0x10
    NSDate *_deliveryStartDate;	// 24 = 0x18
    unsigned long long _intervalId;	// 32 = 0x20
    NSData *_jsonBody;	// 40 = 0x28
    NSDate *_startDate;	// 48 = 0x30
    CDUnknownBlockType _handler;	// 56 = 0x38
}

+ (id)createItemWithRequest:(id)arg1 requestTimestamp:(id)arg2 interval:(unsigned long long)arg3 jsonBody:(id)arg4 startDate:(id)arg5 deliveryStartDate:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;	// IMP=0x004000000002ee5c
- (void).cxx_destruct;	// IMP=0x002000000002f054
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(retain, nonatomic) NSData *jsonBody; // @synthesize jsonBody=_jsonBody;
@property(nonatomic) unsigned long long intervalId; // @synthesize intervalId=_intervalId;
@property(retain, nonatomic) NSDate *deliveryStartDate; // @synthesize deliveryStartDate=_deliveryStartDate;
@property(retain, nonatomic) NSDate *requestTimestamp; // @synthesize requestTimestamp=_requestTimestamp;
@property(retain, nonatomic) APAttributionRequest *request; // @synthesize request=_request;

@end
