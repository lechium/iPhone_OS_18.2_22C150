//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSPredicate, NSString;

@protocol _CDInteractionDeleting
- (void)deleteInteractionsWithBundleId:(NSString *)arg1 domainIdentifiers:(NSArray *)arg2 completionHandler:(void (^)(unsigned long long, NSError *))arg3;
- (void)deleteInteractionsWithBundleId:(NSString *)arg1 domainIdentifier:(NSString *)arg2 completionHandler:(void (^)(unsigned long long, NSError *))arg3;
- (void)deleteInteractionsWithBundleId:(NSString *)arg1 account:(NSString *)arg2 completionHandler:(void (^)(unsigned long long, NSError *))arg3;
- (void)deleteInteractionsWithBundleId:(NSString *)arg1 completionHandler:(void (^)(unsigned long long, NSError *))arg2;
- (void)deleteInteractionsMatchingPredicate:(NSPredicate *)arg1 sortDescriptors:(NSArray *)arg2 limit:(unsigned long long)arg3 debuggingReason:(NSString *)arg4 completionHandler:(void (^)(unsigned long long, NSError *))arg5;
- (void)deleteInteractionsMatchingPredicate:(NSPredicate *)arg1 sortDescriptors:(NSArray *)arg2 limit:(unsigned long long)arg3 completionHandler:(void (^)(unsigned long long, NSError *))arg4;
- (unsigned long long)deleteInteractionsWithBundleId:(NSString *)arg1 domainIdentifiers:(NSArray *)arg2 error:(id *)arg3;
- (unsigned long long)deleteInteractionsWithBundleId:(NSString *)arg1 domainIdentifier:(NSString *)arg2 error:(id *)arg3;
- (unsigned long long)deleteInteractionsWithBundleId:(NSString *)arg1 account:(NSString *)arg2 error:(id *)arg3;
- (unsigned long long)deleteInteractionsWithBundleId:(NSString *)arg1 error:(id *)arg2;
- (unsigned long long)deleteInteractionsMatchingPredicate:(NSPredicate *)arg1 sortDescriptors:(NSArray *)arg2 limit:(unsigned long long)arg3 debuggingReason:(NSString *)arg4 error:(id *)arg5;
- (unsigned long long)deleteInteractionsMatchingPredicate:(NSPredicate *)arg1 sortDescriptors:(NSArray *)arg2 limit:(unsigned long long)arg3 error:(id *)arg4;
@end
