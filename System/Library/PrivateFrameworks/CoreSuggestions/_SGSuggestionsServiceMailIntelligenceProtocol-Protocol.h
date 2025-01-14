//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CSSearchableItem, NSArray, NSData, NSDate, NSDictionary, NSNumber, NSString, SGMailHeaders, SGMailIntelligenceFollowUpWarning, SGMailIntelligenceSaliency, SGMailIntelligenceWarning;

@protocol _SGSuggestionsServiceMailIntelligenceProtocol
- (void)dissectAttachmentsFromSearchableItem:(CSSearchableItem *)arg1 options:(unsigned long long)arg2 withCompletion:(void (^)(NSArray *, NSError *))arg3;
- (NSArray *)dissectAttachmentsFromSearchableItem:(CSSearchableItem *)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (SGMailIntelligenceSaliency *)saliencyFromEmailHeaders:(SGMailHeaders *)arg1 error:(id *)arg2;
- (void)saliencyFromEmailHeaders:(SGMailHeaders *)arg1 withCompletion:(void (^)(SGMailIntelligenceSaliency *, NSError *))arg2;
- (NSNumber *)reportMailIntelligenceFollowUpUserEngagement:(long long)arg1 forStringFromFollowUpWarning:(NSString *)arg2 error:(id *)arg3;
- (NSNumber *)reportValue:(_Bool)arg1 forFeatureSetting:(long long)arg2 error:(id *)arg3;
- (NSNumber *)reportUserEngagement:(_Bool)arg1 forWarning:(SGMailIntelligenceWarning *)arg2 error:(id *)arg3;
- (SGMailIntelligenceFollowUpWarning *)identifyFollowUpWarningFromSubject:(NSString *)arg1 body:(NSString *)arg2 date:(NSDate *)arg3 error:(id *)arg4;
- (NSArray *)identifyComposeWarningsFromSubject:(NSString *)arg1 content:(NSString *)arg2 attributes:(NSDictionary *)arg3 toRecipients:(NSArray *)arg4 ccRecipients:(NSArray *)arg5 bccRecipients:(NSArray *)arg6 originalToRecipients:(NSArray *)arg7 originalCcRecipients:(NSArray *)arg8 attachments:(NSArray *)arg9 error:(id *)arg10;
- (void)preventUnsubscriptionOpportunitiesSuggestionsForField:(long long)arg1 toValues:(NSArray *)arg2 withCompletion:(void (^)(NSError *))arg3;
- (_Bool)preventUnsubscriptionOpportunitiesSuggestionsForField:(long long)arg1 toValues:(NSArray *)arg2 error:(id *)arg3;
- (NSArray *)sortedUnsubscriptionOpportunitiesForField:(long long)arg1 limit:(unsigned long long)arg2 error:(id *)arg3;
- (NSArray *)sortedUnsubscriptionOpportunitiesForField:(long long)arg1 minCount:(unsigned long long)arg2 minScore:(double)arg3 limit:(unsigned long long)arg4 error:(id *)arg5;
- (NSArray *)sortedSaliencyResultsRestrictedToMailboxTypes:(NSArray *)arg1 mailboxIds:(NSArray *)arg2 receivedOnOrAfter:(NSDate *)arg3 ascending:(_Bool)arg4 limit:(unsigned long long)arg5 error:(id *)arg6;
- (NSArray *)topSalienciesForMailboxId:(NSString *)arg1 limit:(long long)arg2 error:(id *)arg3;
- (SGMailIntelligenceSaliency *)saliencyFromRFC822Data:(NSData *)arg1 error:(id *)arg2;
- (void)saliencyFromRFC822Data:(NSData *)arg1 withCompletion:(void (^)(SGMailIntelligenceSaliency *, NSError *))arg2;
@end

