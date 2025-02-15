//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class LNSystemProtocol, MISSING_TYPE, NSArray, NSDictionary, NSSet, NSString, NSUUID;

@interface _TtC10LinkDaemon8Registry : NSObject
{
    MISSING_TYPE *applicationSource;	// 8 = 0x8
    MISSING_TYPE *indexingQueue;	// 48 = 0x30
    MISSING_TYPE *observers;	// 56 = 0x38
    MISSING_TYPE *ready;	// 64 = 0x40
    MISSING_TYPE *lastMetadataAudit;	// 0 = 0x0
    MISSING_TYPE *store;	// 0 = 0x0
    MISSING_TYPE *appShortcutInterpolator;	// 1869045599 = 0x6f675f5f
    MISSING_TYPE *examplePhraseInterpolator;	// 0 = 0x0
    MISSING_TYPE *appProtectionSubscription;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x00400000000ac579
- (id)init;	// IMP=0x00100000000ac543
- (void)unregisterBundleWithIdentifier:(NSString *)arg1 reply:(void (^)(NSError *))arg2;	// IMP=0x00100000000d1ad5
- (void)scanBundlesWithReply:(void (^)(NSError *))arg1;	// IMP=0x00100000000d1474
- (void)resetWithReply:(void (^)(NSError *))arg1;	// IMP=0x00100000000d10ed
- (void)registerBundleWithIdentifier:(NSString *)arg1 force:(_Bool)arg2 reply:(void (^)(NSError *))arg3;	// IMP=0x00100000000d0a7f
- (void)relevantIntentsWithReply:(void (^)(NSDictionary *, NSError *))arg1;	// IMP=0x00100000000cee39
- (void)relevantIntentsForBundleIdentifier:(NSString *)arg1 reply:(void (^)(NSArray *, NSError *))arg2;	// IMP=0x00100000000ce7b2
- (void)propertiesForIdentifiers:(NSArray *)arg1 completionHandler:(void (^)(NSDictionary *, NSError *))arg2;	// IMP=0x00100000000ce4fc
- (void)autoShortcutsForLocaleIdentifier:(NSString *)arg1 completionHandler:(void (^)(NSDictionary *, NSError *))arg2;	// IMP=0x00100000000cdc3b
- (void)autoShortcutsForBundleIdentifier:(NSString *)arg1 localeIdentifier:(NSString *)arg2 completionHandler:(void (^)(NSArray *, NSError *))arg3;	// IMP=0x00100000000cd773
- (void)actionForBundleIdentifier:(NSString *)arg1 basePhraseTemplate:(NSString *)arg2 actionIdentifier:(NSString *)arg3 parameterIdentifier:(NSUUID *)arg4 completionHandler:(void (^)(LNAction *, NSError *))arg5;	// IMP=0x00100000000cd14a
- (void)actionForBundleIdentifier:(NSString *)arg1 basePhraseTemplate:(NSString *)arg2 parameterIdentifier:(NSUUID *)arg3 completionHandler:(void (^)(LNAction *, NSError *))arg4;	// IMP=0x00100000000cbe46
- (void)actionForBundleIdentifier:(NSString *)arg1 basePhraseTemplate:(NSString *)arg2 completionHandler:(void (^)(LNAction *, NSError *))arg3;	// IMP=0x00100000000cb6bd
- (void)actionForBundleIdentifier:(NSString *)arg1 appShortcutIdentifier:(NSString *)arg2 parameterIdentifier:(NSString *)arg3 completionHandler:(void (^)(LNAction *, NSError *))arg4;	// IMP=0x00100000000cac03
- (void)metadataVersionForBundleIdentifier:(NSString *)arg1 reply:(void (^)(long long, NSError *))arg2;	// IMP=0x00100000000c9815
- (void)queriesForBundleIdentifier:(NSString *)arg1 ofType:(NSString *)arg2 reply:(void (^)(NSArray *, NSError *))arg3;	// IMP=0x00100000000c94ee
- (void)queriesWithReply:(void (^)(NSDictionary *, NSError *))arg1;	// IMP=0x00100000000c91d7
- (void)examplePhrasesForBundleIdentifier:(NSString *)arg1 reply:(void (^)(NSArray *, NSError *))arg2;	// IMP=0x00100000000c8f70
- (void)enumsForBundleIdentifier:(NSString *)arg1 reply:(void (^)(NSArray *, NSError *))arg2;	// IMP=0x00100000000c8c56
- (void)enumsWithReply:(void (^)(NSDictionary *, NSError *))arg1;	// IMP=0x00100000000c8aed
- (void)entityIdentifiersForBundleIdentifier:(NSString *)arg1 reply:(void (^)(NSArray *, NSError *))arg2;	// IMP=0x00100000000c88fd
- (void)entitiesForBundleIdentifier:(NSString *)arg1 reply:(void (^)(NSArray *, NSError *))arg2;	// IMP=0x00100000000c866f
- (void)entitiesWithReply:(void (^)(NSDictionary *, NSError *))arg1;	// IMP=0x00100000000c8506
- (void)bundleRegistrationsWithReply:(void (^)(NSArray *, NSError *))arg1;	// IMP=0x00100000000c82d4
- (void)bundlesWithReply:(void (^)(NSArray *, NSError *))arg1;	// IMP=0x00100000000c8183
- (void)actionIdentifiersForBundleIdentifier:(NSString *)arg1 reply:(void (^)(NSArray *, NSError *))arg2;	// IMP=0x00100000000c7ff3
- (void)actionsAndSystemProtocolDefaultsForBundleIdentifier:(NSString *)arg1 reply:(void (^)(NSDictionary *, NSError *))arg2;	// IMP=0x00100000000c7d4f
- (void)actionsWithFullyQualifiedIdentifiers:(NSArray *)arg1 reply:(void (^)(NSDictionary *, NSError *))arg2;	// IMP=0x00100000000c7aae
- (void)actionsForBundleIdentifier:(NSString *)arg1 reply:(void (^)(NSArray *, NSError *))arg2;	// IMP=0x00100000000c7770
- (void)actionsConformingToSystemProtocol:(LNSystemProtocol *)arg1 withParametersOfTypes:(NSDictionary *)arg2 bundleIdentifier:(NSString *)arg3 reply:(void (^)(NSDictionary *, NSError *))arg4;	// IMP=0x00100000000c7544
- (void)actionsConformingToSystemProtocols:(NSSet *)arg1 logicalType:(unsigned long long)arg2 bundleIdentifier:(NSString *)arg3 reply:(void (^)(NSDictionary *, NSError *))arg4;	// IMP=0x00100000000c719e
- (void)actionsForBundleIdentifier:(NSString *)arg1 andActionIdentifier:(NSString *)arg2 reply:(void (^)(NSArray *, NSError *))arg3;	// IMP=0x00100000000c6e17
- (void)actionsWithReply:(void (^)(NSDictionary *, NSError *))arg1;	// IMP=0x00100000000c6c0e
- (void)fetchDatabaseURL:(CDUnknownBlockType)arg1;	// IMP=0x00100000000b61cb

@end

