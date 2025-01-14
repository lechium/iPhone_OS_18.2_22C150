//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSString, PDNetworkConnectionTask;

@interface PDNotificationServiceRegistrationTask
{
    unsigned long long _requestedStatus;	// 24 = 0x18
    NSString *_registrationData;	// 32 = 0x20
    NSString *_signature;	// 40 = 0x28
    NSDictionary *_certificates;	// 48 = 0x30
    PDNetworkConnectionTask *_completionTask;	// 56 = 0x38
    unsigned long long _certificateVersion;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x004000000036030f
+ (id)deregisterTaskWithNotificationService:(id)arg1;	// IMP=0x0010000000360190
+ (id)registerTaskWithNotificationService:(id)arg1 registrationData:(id)arg2 signature:(id)arg3 certificates:(id)arg4 certificateVersion:(unsigned long long)arg5 completionTask:(id)arg6;	// IMP=0x00100000003600b2
- (void).cxx_destruct;	// IMP=0x00000000003612ef
@property(nonatomic) unsigned long long certificateVersion; // @synthesize certificateVersion=_certificateVersion;
@property(retain, nonatomic) PDNetworkConnectionTask *completionTask; // @synthesize completionTask=_completionTask;
@property(retain, nonatomic) NSDictionary *certificates; // @synthesize certificates=_certificates;
@property(retain, nonatomic) NSString *signature; // @synthesize signature=_signature;
@property(retain, nonatomic) NSString *registrationData; // @synthesize registrationData=_registrationData;
@property(nonatomic) unsigned long long requestedStatus; // @synthesize requestedStatus=_requestedStatus;
- (id)_authenticationTokenFromResponseData:(id)arg1;	// IMP=0x00100000003610fa
- (_Bool)matchesTask:(id)arg1;	// IMP=0x0010000000361050
- (long long)actionForInactiveTask:(id)arg1;	// IMP=0x0010000000360f35
- (_Bool)coalescesWithTaskSubclass:(Class)arg1;	// IMP=0x0010000000360edf
- (_Bool)backoffComplete;	// IMP=0x0010000000360e96
- (id)description;	// IMP=0x0010000000360d04
- (void)handleError:(id)arg1;	// IMP=0x0010000000360c38
- (void)handleResponse:(id)arg1 data:(id)arg2;	// IMP=0x0010000000360a49
- (id)bodyDictionary;	// IMP=0x00100000003607b3
- (id)endpointComponents;	// IMP=0x00100000003606e6
- (id)method;	// IMP=0x00100000003606b9
- (long long)taskType;	// IMP=0x00100000003606ae
- (_Bool)isValid;	// IMP=0x001000000036064a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000360538
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000360317
- (id)initWithNotificationService:(id)arg1 registrationData:(id)arg2 signature:(id)arg3 certificates:(id)arg4 certificateVersion:(unsigned long long)arg5 requestedStatus:(unsigned long long)arg6 completionTask:(id)arg7;	// IMP=0x00100000003601f2

@end

