//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface PolicyResponse : NSObject
{
    NSString *_termsOfService;	// 8 = 0x8
    NSString *_privacyPolicyText;	// 16 = 0x10
    NSURL *_privacyPolicyURL;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000031b24
- (void).cxx_destruct;	// IMP=0x0000000000031d29
@property(readonly, nonatomic) NSURL *privacyPolicyURL; // @synthesize privacyPolicyURL=_privacyPolicyURL;
@property(readonly, nonatomic) NSString *privacyPolicyText; // @synthesize privacyPolicyText=_privacyPolicyText;
@property(readonly, nonatomic) NSString *termsOfService; // @synthesize termsOfService=_termsOfService;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000031c0f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000031b2c
- (id)initWithTermsOfService:(id)arg1 privacyPolicyText:(id)arg2 privacyPolicyURL:(id)arg3;	// IMP=0x0000000000031a6c

@end
