//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSuggestionsInternals/_SGDSuggestManagerBaseProtocol-Protocol.h>
#import <CoreSuggestionsInternals/_SGDSuggestManagerContactsConfirmRejectProtocol-Protocol.h>

@class CNContact, NSArray, NSDateInterval, NSString, SGRecordId, SGSocialProfile;

@protocol SGDSuggestManagerContactsProtocol <_SGDSuggestManagerBaseProtocol, _SGDSuggestManagerContactsConfirmRejectProtocol>
- (void)celebrationExtractionsForInterval:(NSDateInterval *)arg1 withCompletion:(void (^)(SGXPCResponse1 *))arg2;
- (void)birthdayExtractionsForInterval:(NSDateInterval *)arg1 withCompletion:(void (^)(SGXPCResponse1 *))arg2;
- (void)allContactsWithSnippets:(_Bool)arg1 limitTo:(unsigned long long)arg2 withCompletion:(void (^)(SGXPCResponse1 *))arg3;
- (void)originFromRecordId:(SGRecordId *)arg1 completion:(void (^)(SGXPCResponse1 *))arg2;
- (void)namesForDetailCacheSnapshotsWithCompletion:(void (^)(SGXPCResponse3 *))arg1;
- (void)interactionStoreLookupForDetail:(NSString *)arg1 withCompletion:(void (^)(SGXPCResponse1 *))arg2;
- (void)namesForDetail:(NSString *)arg1 limitTo:(unsigned long long)arg2 prependMaybe:(_Bool)arg3 onlySignificant:(_Bool)arg4 supportsInfoLookup:(_Bool)arg5 withCompletion:(void (^)(SGXPCResponse1 *))arg6;
- (void)namesForDetail:(NSString *)arg1 limitTo:(unsigned long long)arg2 prependMaybe:(_Bool)arg3 onlySignificant:(_Bool)arg4 withCompletion:(void (^)(SGXPCResponse1 *))arg5;
- (void)contactMatchesBySocialProfile:(SGSocialProfile *)arg1 withCompletion:(void (^)(SGXPCResponse1 *))arg2;
- (void)contactMatchesByEmailAddress:(NSString *)arg1 withCompletion:(void (^)(SGXPCResponse1 *))arg2;
- (void)contactMatchesByPhoneNumber:(NSString *)arg1 withCompletion:(void (^)(SGXPCResponse1 *))arg2;
- (void)cnContactMatchesForRecordIds:(NSArray *)arg1 withCompletion:(void (^)(SGXPCResponse1 *))arg2;
- (void)cnContactMatchesForRecordId:(SGRecordId *)arg1 withCompletion:(void (^)(SGXPCResponse1 *))arg2;
- (void)contactFromRecordId:(SGRecordId *)arg1 withCompletion:(void (^)(SGXPCResponse1 *))arg2;
- (void)contactMatchesWithMessagingPrefix:(NSString *)arg1 limitTo:(unsigned long long)arg2 withCompletion:(void (^)(SGXPCResponse1 *))arg3;
- (void)contactMatchesWithFullTextSearch:(NSString *)arg1 limitTo:(unsigned long long)arg2 withCompletion:(void (^)(SGXPCResponse1 *))arg3;
- (void)emailAddressIsSignificant:(NSString *)arg1 withCompletion:(void (^)(SGXPCResponse1 *))arg2;
- (void)contactMatchesWithContactIdentifiers:(NSArray *)arg1 limitTo:(unsigned long long)arg2 withCompletion:(void (^)(SGXPCResponse1 *))arg3;
- (void)contactMatchesWithContactIdentifier:(NSString *)arg1 limitTo:(unsigned long long)arg2 withCompletion:(void (^)(SGXPCResponse1 *))arg3;
- (void)contactMatchesWithContact:(CNContact *)arg1 limitTo:(unsigned long long)arg2 withCompletion:(void (^)(SGXPCResponse1 *))arg3;
@end

