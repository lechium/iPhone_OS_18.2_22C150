//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface STRemoteManagementRequest : CEMPayloadBase
{
    NSString *_requestUUID;	// 16 = 0x10
    NSString *_requestType;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00400000000ad1f4
+ (id)requestForPayload:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000ace27
- (void).cxx_destruct;	// IMP=0x00200000000ad57d
@property(copy, nonatomic) NSString *requestType; // @synthesize requestType=_requestType;
@property(copy, nonatomic) NSString *requestUUID; // @synthesize requestUUID=_requestUUID;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000ad4a4
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000000ad26c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000000ad1fc
- (id)serialize;	// IMP=0x00100000000ad137
- (_Bool)loadRequestFromDictionary:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000ad00e

@end
