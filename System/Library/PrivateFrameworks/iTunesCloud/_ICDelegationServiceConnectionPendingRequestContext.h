//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ICPBDGSRequest;

__attribute__((visibility("hidden")))
@interface _ICDelegationServiceConnectionPendingRequestContext : NSObject
{
    ICPBDGSRequest *_request;	// 8 = 0x8
    CDUnknownBlockType _responseHandler;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000010e9a7
@property(readonly, copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property(readonly, nonatomic) ICPBDGSRequest *request; // @synthesize request=_request;
- (id)initWithRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000010e8ee

@end
