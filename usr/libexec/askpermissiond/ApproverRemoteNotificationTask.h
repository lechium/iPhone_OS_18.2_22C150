//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleMediaServices/AMSTask.h>

@class AMSBag, NSDictionary, NSString;

@interface ApproverRemoteNotificationTask : AMSTask
{
    NSDictionary *_payload;	// 8 = 0x8
    AMSBag *_bag;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000004b50
@property(retain, nonatomic) AMSBag *bag; // @synthesize bag=_bag;
@property(readonly, nonatomic) NSDictionary *payload; // @synthesize payload=_payload;
- (void)_presentRequest:(id)arg1;	// IMP=0x0010000000004aab
- (id)_requestFromResult:(id)arg1 withError:(id *)arg2;	// IMP=0x0010000000003f67
- (id)_approvalRequestFromResult:(id)arg1 withError:(id *)arg2;	// IMP=0x0010000000003e76
- (id)_serverRequestWithError:(id *)arg1;	// IMP=0x0010000000003a63
- (id)_requestWithError:(id *)arg1;	// IMP=0x0010000000003797
- (id)_approvalRequestWithError:(id *)arg1;	// IMP=0x00100000000034cb
- (id)perform;	// IMP=0x001000000000270c
@property(readonly, nonatomic) NSString *requestIdentifier;
@property(readonly, nonatomic) long long requestStatus;
- (id)initWithPayload:(id)arg1;	// IMP=0x0010000000002540

@end

