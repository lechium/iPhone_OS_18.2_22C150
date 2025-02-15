//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, NSString;

@interface APLogSubscriptionEventRequester
{
    int _subscriptionType;	// 8 = 0x8
    NSString *_qToken;	// 16 = 0x10
    NSString *_subscriptionSourceID;	// 24 = 0x18
    NSMutableArray *_parameters;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000000a003b
@property(retain) NSMutableArray *parameters; // @synthesize parameters=_parameters;
@property int subscriptionType; // @synthesize subscriptionType=_subscriptionType;
@property(retain) NSString *subscriptionSourceID; // @synthesize subscriptionSourceID=_subscriptionSourceID;
@property(retain) NSString *qToken; // @synthesize qToken=_qToken;
- (id)protoBuffer;	// IMP=0x001000000009fd7e
- (Class)responseClass;	// IMP=0x001000000009fd6d
- (void)addParameter:(id)arg1 value:(id)arg2 parameters:(id)arg3;	// IMP=0x001000000009fc9c
- (id)initWithMetric:(id)arg1 bundleID:(id)arg2;	// IMP=0x001000000009f7bb

@end

