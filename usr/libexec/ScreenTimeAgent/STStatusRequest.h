//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSArray, NSString;

@interface STStatusRequest : CEMPayloadBase
{
    NSString *_requestType;	// 16 = 0x10
    NSString *_UDID;	// 24 = 0x18
    NSString *_userShortName;	// 32 = 0x20
    NSArray *_messages;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00400000000afe59
+ (id)requestWithUDID:(id)arg1 withUserShortName:(id)arg2 withMessages:(id)arg3;	// IMP=0x00100000000afa65
- (void).cxx_destruct;	// IMP=0x00200000000b0266
@property(copy, nonatomic) NSArray *messages; // @synthesize messages=_messages;
@property(copy, nonatomic) NSString *userShortName; // @synthesize userShortName=_userShortName;
@property(copy, nonatomic) NSString *UDID; // @synthesize UDID=_UDID;
@property(copy, nonatomic) NSString *requestType; // @synthesize requestType=_requestType;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000b0109
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000000afed1
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000000afe61
- (id)serialize;	// IMP=0x00100000000afd2d
- (_Bool)loadStatusFromDictionary:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000afb26

@end

