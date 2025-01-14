//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@interface NSError (HealthKit)
+ (_Bool)hk_assignError:(id *)arg1 nilArgument:(id)arg2 class:(Class)arg3 selector:(SEL)arg4;	// IMP=0x0060000000022f87
+ (_Bool)hk_assignError:(id *)arg1 invalidArgument:(id)arg2 class:(Class)arg3 selector:(SEL)arg4;	// IMP=0x0060000000022f1f
+ (_Bool)hk_assignError:(id *)arg1 code:(long long)arg2 userInfo:(id)arg3;	// IMP=0x0060000000022eb6
+ (_Bool)hk_assignError:(id *)arg1 code:(long long)arg2 format:(id)arg3;	// IMP=0x0060000000015352
+ (_Bool)hk_assignError:(id *)arg1 code:(long long)arg2 description:(id)arg3 underlyingError:(id)arg4;	// IMP=0x0060000000022e4e
+ (_Bool)hk_assignError:(id *)arg1 code:(long long)arg2 description:(id)arg3;	// IMP=0x0060000000015476
+ (id)hk_transactionInterruptedError;	// IMP=0x0060000000022e29
+ (id)hk_databaseSchemaRolledBackError;	// IMP=0x0060000000022e02
+ (id)hk_healthStoreUnavailableError;	// IMP=0x0060000000022ddd
+ (id)hk_invalidProfileError;	// IMP=0x0060000000022d99
+ (id)hk_featureUnavailableForProfileError;	// IMP=0x0060000000022d74
+ (id)hk_protectedDataInaccessibilityError;	// IMP=0x0060000000002ef5
+ (id)hk_databaseInaccessibleBeforeFirstUnlockError;	// IMP=0x0060000000022d4f
+ (id)hk_healthDataUnavailableError;	// IMP=0x0060000000022d2a
+ (id)hk_errorForNilArgument:(id)arg1 class:(Class)arg2 selector:(SEL)arg3;	// IMP=0x0060000000022ba7
+ (id)hk_errorForInvalidArgument:(id)arg1 class:(Class)arg2 selector:(SEL)arg3 format:(id)arg4;	// IMP=0x0060000000022982
+ (id)hk_errorForInvalidArgument:(id)arg1 class:(Class)arg2 selector:(SEL)arg3;	// IMP=0x00600000000227ff
+ (id)hk_error:(long long)arg1 class:(Class)arg2 selector:(SEL)arg3 format:(id)arg4;	// IMP=0x006000000002261c
+ (id)hk_error:(long long)arg1 format:(id)arg2;	// IMP=0x0060000000017541
+ (id)hk_error:(long long)arg1 userInfo:(id)arg2;	// IMP=0x00600000000225fa
+ (id)hk_error:(long long)arg1 description:(id)arg2 underlyingError:(id)arg3;	// IMP=0x00600000000154db
+ (id)hk_error:(long long)arg1 description:(id)arg2;	// IMP=0x0060000000002f1a
+ (id)hk_HTTPErrorRepresentingResponse:(id)arg1 request:(id)arg2;	// IMP=0x00600000000bf927
+ (id)_hk_OAuth2_errorFromResponseData:(id)arg1 defaultError:(id)arg2 parseError:(id *)arg3;	// IMP=0x0060000000205f6c
+ (id)_hk_OAuth2_errorForBadRequestStatusWithResponse:(id)arg1 data:(id)arg2;	// IMP=0x0060000000205e55
+ (id)_hk_OAuth2_errorForUnauthorizedStatusWithRequest:(id)arg1 response:(id)arg2;	// IMP=0x0060000000205cef
+ (id)_hk_OAuth2_rawErrorForRequest:(id)arg1 response:(id)arg2 data:(id)arg3;	// IMP=0x0060000000205c08
+ (id)hk_OAuth2_errorForRequest:(id)arg1 response:(id)arg2 data:(id)arg3;	// IMP=0x0060000000205abc
+ (id)hk_OAuth2_errorFromErrorValue:(id)arg1;	// IMP=0x006000000020586c
+ (id)_hk_OAuth2_defaultDescriptionForErrorCode:(long long)arg1;	// IMP=0x006000000020584d
+ (id)_hk_OAuth2_error:(long long)arg1 userInfo:(id)arg2 underlyingError:(id)arg3;	// IMP=0x00600000002056a9
+ (id)hk_OAuth2_error:(long long)arg1 underlyingError:(id)arg2;	// IMP=0x0060000000205692
+ (id)hk_OAuth2_error:(long long)arg1;	// IMP=0x006000000020567e
- (id)hk_errorByAddingEntriesToUserInfo:(id)arg1;	// IMP=0x0010000000023759
- (id)hk_sanitizedErrorForDomain:(id)arg1;	// IMP=0x0010000000023683
- (id)hk_sanitizedError;	// IMP=0x0010000000023659
- (id)hk_underlyingErrorWithDomain:(id)arg1;	// IMP=0x001000000002354f
- (_Bool)hk_isErrorInDomain:(id)arg1 code:(long long)arg2;	// IMP=0x00100000000234b8
- (_Bool)hk_isHFDUnsupportedError;	// IMP=0x00100000000234a1
- (_Bool)hk_isOntologyConceptNotFoundError;	// IMP=0x001000000002348a
- (_Bool)hk_isXPCConnectionInterruptedError;	// IMP=0x0010000000023469
- (_Bool)hk_isXPCConnectionError;	// IMP=0x00100000000233dd
- (_Bool)hk_isCocoaFileExistsError;	// IMP=0x0010000000023366
- (_Bool)hk_isCocoaNoSuchFileError;	// IMP=0x00100000000232eb
- (_Bool)hk_isUserCanceledError;	// IMP=0x00100000000232af
- (_Bool)hk_isTimeoutError;	// IMP=0x0010000000023273
- (_Bool)hk_isStreamFailureError;	// IMP=0x0010000000023237
- (_Bool)hk_isRequiredAuthorizationError;	// IMP=0x00100000000231fb
- (_Bool)hk_isFeatureDisabledError;	// IMP=0x00100000000231e4
- (_Bool)hk_isInternalFailureError;	// IMP=0x00100000000231a8
- (_Bool)hk_isInvalidArgumentError;	// IMP=0x001000000002316c
- (_Bool)hk_isAuthorizationNotDeterminedError;	// IMP=0x0010000000023130
- (_Bool)hk_isAuthorizationDeniedError;	// IMP=0x00100000000230f4
- (_Bool)hk_isServiceDeviceNotFoundError;	// IMP=0x00100000000230b6
- (_Bool)hk_isTransactionInterruptedError;	// IMP=0x001000000002309f
- (_Bool)hk_isObjectNotFoundError;	// IMP=0x0010000000023088
- (_Bool)hk_isDuplicateObjectError;	// IMP=0x0010000000023071
- (_Bool)hk_isDatabaseSchemaRolledBackError;	// IMP=0x001000000002305a
- (_Bool)hk_isHealthStoreUnavailableError;	// IMP=0x0010000000023043
- (_Bool)hk_isDatabaseTransactionError;	// IMP=0x001000000002302c
- (_Bool)hk_isDatabaseAccessibilityError;	// IMP=0x0010000000004553
- (_Bool)hk_isHealthKitErrorWithCode:(long long)arg1;	// IMP=0x0010000000022fef
- (_Bool)hk_isHealthKitError;	// IMP=0x0010000000004598
- (id)_hk_OAuth2_errorByAddingItemsToUserInfo:(id)arg1;	// IMP=0x00100000002062bb
- (_Bool)hk_OAuth2_isBearerAuthenticationError;	// IMP=0x00100000002062a4
- (_Bool)hk_OAuth2_isAccessDeniedError;	// IMP=0x001000000020628d
- (_Bool)hk_OAuth2_isOAuth2ErrorWithCode:(long long)arg1;	// IMP=0x0010000000206250
- (_Bool)hk_OAuth2_isOAuth2Error;	// IMP=0x0010000000206205
- (id)hk_OAuth2_errorCode;	// IMP=0x0010000000205a71
@end

