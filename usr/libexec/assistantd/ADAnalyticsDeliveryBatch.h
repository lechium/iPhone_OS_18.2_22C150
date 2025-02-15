//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString, NSUUID;

@interface ADAnalyticsDeliveryBatch : NSObject
{
    NSDate *_startTime;	// 8 = 0x8
    NSDate *_endTime;	// 16 = 0x10
    _Bool _succeeded;	// 24 = 0x18
    unsigned long long _failureType;	// 32 = 0x20
    _Bool _hasPayloadSize;	// 40 = 0x28
    _Bool _scheduledActivity;	// 41 = 0x29
    NSUUID *_batchIdentifier;	// 48 = 0x30
    unsigned long long _deliveryStream;	// 56 = 0x38
    NSString *_serverEnvironment;	// 64 = 0x40
    unsigned long long _processedCount;	// 72 = 0x48
    unsigned long long _outstandingCount;	// 80 = 0x50
    unsigned long long _payloadSize;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x002000000027d815
@property(nonatomic) unsigned long long payloadSize; // @synthesize payloadSize=_payloadSize;
@property(nonatomic) _Bool scheduledActivity; // @synthesize scheduledActivity=_scheduledActivity;
@property(nonatomic) unsigned long long outstandingCount; // @synthesize outstandingCount=_outstandingCount;
@property(nonatomic) unsigned long long processedCount; // @synthesize processedCount=_processedCount;
@property(copy, nonatomic) NSString *serverEnvironment; // @synthesize serverEnvironment=_serverEnvironment;
@property(readonly, nonatomic) unsigned long long deliveryStream; // @synthesize deliveryStream=_deliveryStream;
@property(readonly, copy, nonatomic) NSUUID *batchIdentifier; // @synthesize batchIdentifier=_batchIdentifier;
- (id)analyticsDictionary;	// IMP=0x001000000027d52e
- (void)markFailedWithType:(unsigned long long)arg1;	// IMP=0x001000000027d520
- (void)markSucceeded;	// IMP=0x001000000027d516
- (void)markEndTime;	// IMP=0x001000000027d4dd
- (void)markStartTime;	// IMP=0x001000000027d4a4
- (_Bool)hasFailureType;	// IMP=0x001000000027d496
- (id)initWithDeliveryStream:(unsigned long long)arg1;	// IMP=0x001000000027d417

@end

