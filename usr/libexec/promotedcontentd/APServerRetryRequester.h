//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class APServerRequest;

@interface APServerRetryRequester
{
    long long _responseResult;	// 8 = 0x8
    APServerRequest *_serverRequest;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000a0306
@property(retain, nonatomic) APServerRequest *serverRequest; // @synthesize serverRequest=_serverRequest;
@property(nonatomic) long long responseResult; // @synthesize responseResult=_responseResult;
- (void)responseReceived:(id)arg1 responseProtobuf:(id)arg2 error:(id)arg3;	// IMP=0x00100000000a0284
- (id)buildURLForRequestProtobuf:(id)arg1;	// IMP=0x00100000000a023d
- (id)protoBuffer;	// IMP=0x00100000000a01f6
- (Class)responseClass;	// IMP=0x00100000000a01af
- (id)headers;	// IMP=0x00100000000a0168
- (id)initFromServerRequest:(id)arg1;	// IMP=0x00100000000a007d

@end

