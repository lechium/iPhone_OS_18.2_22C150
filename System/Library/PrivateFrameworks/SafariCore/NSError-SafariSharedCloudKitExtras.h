//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@class NSString;

@interface NSError (SafariSharedCloudKitExtras)
+ (void)safari_setUpCloudKitPrivacyPreservingUserInfoProvider;	// IMP=0x0020000000043b82
+ (id)safari_errorWithDomain:(id)arg1 code:(long long)arg2 privacyPreservingDescription:(id)arg3;	// IMP=0x0020000000045514
+ (CDUnknownBlockType)safari_privacyPreservingUserInfoProviderForDomain:(id)arg1;	// IMP=0x00200000000451e2
+ (void)safari_setPrivacyPreservingUserInfoProviderForDomain:(id)arg1 provider:(CDUnknownBlockType)arg2;	// IMP=0x00200000000450d0
+ (void)_safari_getPrivacyPreservingUserInfoProvidersUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0020000000045035
@property(readonly, nonatomic) _Bool safari_isUnrecoverableCloudKitError;
@property(readonly, nonatomic) NSError *safari_errorByAddingRequestUUIDInPrivacyPreservingUserInfo;
- (id)safari_errorByAddingCloudKitPrivacyPreservingUserInfoForItemID:(id)arg1;	// IMP=0x0010000000044a4f
- (_Bool)_safari_isOrContainsCloudKitErrorOfCodes:(id)arg1 checkInternalErrorCode:(_Bool)arg2;	// IMP=0x00100000000446b5
- (_Bool)safari_containsCloudKitMissingZoneErrorForRecordZoneID:(id)arg1;	// IMP=0x001000000004445c
@property(readonly, nonatomic) _Bool safari_isOrContainsCloudKitMissingZoneError;
@property(readonly, nonatomic) _Bool safari_isCloudKitMissingZoneError;
@property(readonly, nonatomic) _Bool safari_isCloudKitNonExistentRecordError;
@property(readonly, nonatomic) _Bool safari_isCloudKitBatchTooLargeError;
@property(readonly, nonatomic) _Bool safari_isInCloudKitErrorDomain;
- (_Bool)safari_errorOrAnyPartialErrorHasCloudKitInternalErrorCode:(long long)arg1;	// IMP=0x0010000000044166
- (_Bool)safari_hasOrContainsErrorWithCloudKitErrorCode:(long long)arg1;	// IMP=0x0010000000044086
- (void)_safari_enumerateCloudKitErrorsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000043e77
- (_Bool)safari_matchesErrorDomainsAndCodes:(id)arg1;	// IMP=0x0010000000045b73
- (_Bool)safari_matchesErrorDomain:(id)arg1 andCode:(long long)arg2;	// IMP=0x0010000000045b36
- (_Bool)safari_matchesErrorDomain:(id)arg1;	// IMP=0x0010000000045ac8
@property(readonly, nonatomic) _Bool safari_isOrContainsNetworkUnavailableError;
@property(readonly, nonatomic) _Bool safari_isSQLiteCorruptionError;
@property(readonly, nonatomic) _Bool safari_isSQLiteError;
@property(readonly, copy, nonatomic) NSString *safari_privacyPreservingDescription;
@property(readonly, copy, nonatomic) NSError *safari_privacyPreservingError;
- (id)safari_initWithDomain:(id)arg1 code:(long long)arg2 privacyPreservingDescription:(id)arg3;	// IMP=0x0010000000045433
@property(readonly, nonatomic) _Bool safari_isOrContainsClientSideNetworkError;
@end

