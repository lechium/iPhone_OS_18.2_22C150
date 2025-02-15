//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError, NSString;

@interface TCCDRequestResult : NSObject
{
    unsigned int _v1AuthorizationUpgrade;	// 8 = 0x8
    unsigned int _replyNoCacheAuthorization;	// 12 = 0xc
    unsigned int _doUpdateOfSubjectVerifierData;	// 16 = 0x10
    unsigned int _databaseFlags;	// 20 = 0x14
    int _lastReminderTime;	// 24 = 0x18
    unsigned long long _authorizationValue;	// 32 = 0x20
    unsigned long long _authorizationReason;	// 40 = 0x28
    unsigned long long _authorizationVersion;	// 48 = 0x30
    unsigned long long _previousAuthorization;	// 56 = 0x38
    unsigned long long _v1AuthorizationValue;	// 64 = 0x40
    unsigned long long _v1AuthorizationReason;	// 72 = 0x48
    NSError *_error;	// 80 = 0x50
    long long _servicePolicyAction;	// 88 = 0x58
    NSString *_servicePolicyActionDescription;	// 96 = 0x60
    NSString *_servicePolicyActionKeyName;	// 104 = 0x68
    long long _databaseAction;	// 112 = 0x70
    long long _promptType;	// 120 = 0x78
}

+ (void)populateReplyMessageToDeny:(id)arg1 withError:(id)arg2;	// IMP=0x0040000000060f5b
- (void).cxx_destruct;	// IMP=0x0020000000061aa3
@property(nonatomic) long long promptType; // @synthesize promptType=_promptType;
@property(nonatomic) int lastReminderTime; // @synthesize lastReminderTime=_lastReminderTime;
@property(nonatomic) unsigned int databaseFlags; // @synthesize databaseFlags=_databaseFlags;
@property(nonatomic) unsigned int doUpdateOfSubjectVerifierData; // @synthesize doUpdateOfSubjectVerifierData=_doUpdateOfSubjectVerifierData;
@property(nonatomic) long long databaseAction; // @synthesize databaseAction=_databaseAction;
@property(nonatomic) unsigned int replyNoCacheAuthorization; // @synthesize replyNoCacheAuthorization=_replyNoCacheAuthorization;
@property(copy, nonatomic) NSString *servicePolicyActionKeyName; // @synthesize servicePolicyActionKeyName=_servicePolicyActionKeyName;
@property(copy, nonatomic) NSString *servicePolicyActionDescription; // @synthesize servicePolicyActionDescription=_servicePolicyActionDescription;
@property(nonatomic) long long servicePolicyAction; // @synthesize servicePolicyAction=_servicePolicyAction;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) unsigned long long v1AuthorizationReason; // @synthesize v1AuthorizationReason=_v1AuthorizationReason;
@property(nonatomic) unsigned long long v1AuthorizationValue; // @synthesize v1AuthorizationValue=_v1AuthorizationValue;
@property(nonatomic) unsigned int v1AuthorizationUpgrade; // @synthesize v1AuthorizationUpgrade=_v1AuthorizationUpgrade;
@property(nonatomic) unsigned long long previousAuthorization; // @synthesize previousAuthorization=_previousAuthorization;
@property(nonatomic) unsigned long long authorizationVersion; // @synthesize authorizationVersion=_authorizationVersion;
@property(nonatomic) unsigned long long authorizationReason; // @synthesize authorizationReason=_authorizationReason;
@property(nonatomic) unsigned long long authorizationValue; // @synthesize authorizationValue=_authorizationValue;
- (void)populateReplyMessage:(id)arg1;	// IMP=0x001000000006153e
- (id)description;	// IMP=0x001000000006152a
- (id)descriptionWithRespectToService:(id)arg1;	// IMP=0x0010000000061263
- (void)denyAuthorizationWithErrorCode:(long long)arg1 format:(id)arg2;	// IMP=0x001000000006109d
- (id)init;	// IMP=0x001000000006104c

@end

