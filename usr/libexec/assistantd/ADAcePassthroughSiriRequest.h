//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AssistantServices/AFSiriRequest.h>

@class SABaseClientBoundCommand;

@interface ADAcePassthroughSiriRequest : AFSiriRequest
{
    SABaseClientBoundCommand *_clientBoundCommand;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0040000000162963
- (void).cxx_destruct;	// IMP=0x0020000000162950
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000001628b5
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000162838
- (id)createResponseWithReplyCommand:(id)arg1;	// IMP=0x0010000000162766
- (id)clientBoundCommand;	// IMP=0x0010000000162751
- (id)initWithClientBoundCommand:(id)arg1;	// IMP=0x00100000001626e3
- (void)_ad_handleAceDomainSignalRequestWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000030cea8
- (id)_ad_preheatableServiceDomainForDomainSignalRequest;	// IMP=0x001000000030ce58

@end

