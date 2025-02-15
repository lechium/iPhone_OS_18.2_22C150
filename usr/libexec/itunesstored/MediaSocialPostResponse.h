//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError, NSString, NSURL;

@interface MediaSocialPostResponse : NSObject
{
    NSString *_activityIdentifier;	// 8 = 0x8
    NSURL *_activityURL;	// 16 = 0x10
    NSError *_error;	// 24 = 0x18
    double _pollDuration;	// 32 = 0x20
    double _pollingInterval;	// 40 = 0x28
    long long _postIdentifier;	// 48 = 0x30
    long long _result;	// 56 = 0x38
    NSString *_status;	// 64 = 0x40
    long long statusCode;	// 72 = 0x48
    long long _statusCode;	// 80 = 0x50
    NSString *_serviceErrorLabel;	// 88 = 0x58
    NSString *_serviceErrorMessage;	// 96 = 0x60
}

+ (id)_unrecoverableErrors;	// IMP=0x0020000000152c76
- (void).cxx_destruct;	// IMP=0x0020000000152dc4
@property(copy, nonatomic) NSString *serviceErrorMessage; // @synthesize serviceErrorMessage=_serviceErrorMessage;
@property(copy, nonatomic) NSString *serviceErrorLabel; // @synthesize serviceErrorLabel=_serviceErrorLabel;
@property(nonatomic) long long statusCode; // @synthesize statusCode=_statusCode;
@property(copy, nonatomic) NSString *status; // @synthesize status=_status;
@property(nonatomic) long long result; // @synthesize result=_result;
@property(nonatomic) long long postIdentifier; // @synthesize postIdentifier=_postIdentifier;
@property(nonatomic) double pollingInterval; // @synthesize pollingInterval=_pollingInterval;
@property(nonatomic) double pollDuration; // @synthesize pollDuration=_pollDuration;
// Error: Property attributes should begin with the type ('T') attribute, property name: error
// Property attributes: (null)

@property(copy, nonatomic) NSURL *activityURL; // @synthesize activityURL=_activityURL;
@property(copy, nonatomic) NSString *activityIdentifier; // @synthesize activityIdentifier=_activityIdentifier;
- (_Bool)_isUnrecoverable:(id)arg1 statusCode:(long long)arg2;	// IMP=0x0010000000152bfc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000152b4b
- (void)setValuesWithResponseDictionary:(id)arg1;	// IMP=0x0010000000152733

@end

