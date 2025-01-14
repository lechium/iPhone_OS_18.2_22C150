//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSString;

@interface PDSharingManagementRetrieveFIDOChallengeResponse : PKPaymentWebServiceResponse
{
    NSString *_fidoChallenge;	// 8 = 0x8
    NSString *_keyHash;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000026c979
@property(readonly, nonatomic) NSString *keyHash; // @synthesize keyHash=_keyHash;
@property(readonly, nonatomic) NSString *fidoChallenge; // @synthesize fidoChallenge=_fidoChallenge;
- (id)initWithData:(id)arg1;	// IMP=0x001000000026c765

@end

