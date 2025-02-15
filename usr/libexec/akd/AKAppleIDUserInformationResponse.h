//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AKUserInformation, NSArray, NSDictionary;

@interface AKAppleIDUserInformationResponse : NSObject
{
    NSArray *_allAccountNames;	// 8 = 0x8
    AKUserInformation *_userInformationRepresentation;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000000abea
@property(copy, nonatomic) AKUserInformation *userInformationRepresentation; // @synthesize userInformationRepresentation=_userInformationRepresentation;
@property(readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property(readonly, copy, nonatomic) NSArray *allAccountNames; // @synthesize allAccountNames=_allAccountNames;
- (id)initWithResponseBody:(id)arg1;	// IMP=0x001000000000a1b9

@end

