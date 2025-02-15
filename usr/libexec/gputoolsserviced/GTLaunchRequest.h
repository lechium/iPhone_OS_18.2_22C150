//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString, NSUUID;

@interface GTLaunchRequest : NSObject
{
    NSDictionary *_environment;	// 8 = 0x8
    NSArray *_arguments;	// 16 = 0x10
    NSString *_deviceUDID;	// 24 = 0x18
    NSUUID *_sessionUUID;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000001232a
- (void).cxx_destruct;	// IMP=0x0020000000012a9c
@property(copy, nonatomic) NSUUID *sessionUUID; // @synthesize sessionUUID=_sessionUUID;
@property(copy, nonatomic) NSString *deviceUDID; // @synthesize deviceUDID=_deviceUDID;
@property(copy, nonatomic) NSArray *arguments; // @synthesize arguments=_arguments;
@property(copy, nonatomic) NSDictionary *environment; // @synthesize environment=_environment;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000000129a3
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000012406
- (id)init;	// IMP=0x0010000000012332

@end

