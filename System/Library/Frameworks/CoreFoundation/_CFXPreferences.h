//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_xpc_object;

__attribute__((visibility("hidden")))
@interface _CFXPreferences : NSObject
{
    struct __CFDictionary *_sources;	// 8 = 0x8
    struct __CFDictionary *_namedVolatileSources;	// 16 = 0x10
    struct __CFDictionary *_searchLists;	// 24 = 0x18
    NSObject<OS_xpc_object> *_systemSessionDaemonConnection;	// 32 = 0x20
    NSObject<OS_xpc_object> *_userSessionDaemonConnection;	// 40 = 0x28
    NSObject<OS_xpc_object> *_directConnection;	// 48 = 0x30
    unsigned int _launchdUID;	// 56 = 0x38
    unsigned int _euid;	// 60 = 0x3c
    _Atomic char _userHomeDirectoryState;	// 64 = 0x40
    struct os_unfair_lock_s _sourcesLock;	// 68 = 0x44
    struct os_unfair_lock_s _searchListsLock;	// 72 = 0x48
    struct os_unfair_lock_s _namedVolatileSourcesLock;	// 76 = 0x4c
    struct __CFSet *_groupContainersForCurrentUser;	// 80 = 0x50
}

+ (id)copyDefaultPreferences;	// IMP=0x0060000000197806
- (void)generateKVONotificationsForIdentifier:(struct __CFString *)arg1 withOldValues:(id)arg2 newValues:(id)arg3;	// IMP=0x000000000019cd14
- (void)dealloc;	// IMP=0x000000000019bcb9
- (void)resetPreferences:(_Bool)arg1;	// IMP=0x000000000019b217
- (void)registerDefaultValues:(struct __CFDictionary *)arg1;	// IMP=0x000000000019ae64
- (void *)copyAppValueForKey:(struct __CFString *)arg1 identifier:(struct __CFString *)arg2 container:(struct __CFString *)arg3 configurationURL:(struct __CFURL *)arg4;	// IMP=0x000000000019a546
- (void *)copyValueForKey:(struct __CFString *)arg1 identifier:(struct __CFString *)arg2 user:(struct __CFString *)arg3 host:(struct __CFString *)arg4 container:(struct __CFString *)arg5;	// IMP=0x000000000019a40e
- (void)setValue:(void *)arg1 forKey:(struct __CFString *)arg2 appIdentifier:(struct __CFString *)arg3 container:(struct __CFString *)arg4 configurationURL:(struct __CFURL *)arg5;	// IMP=0x0000000000199cc2
- (void)simulateTimerSynchronizeForTestingForUser:(struct __CFString *)arg1;	// IMP=0x0000000000198932
- (void)setDaemonCacheEnabled:(_Bool)arg1 identifier:(struct __CFString *)arg2 user:(struct __CFString *)arg3 host:(struct __CFString *)arg4 container:(struct __CFString *)arg5;	// IMP=0x0000000000198493
- (void)registerUserDefaultsInstance:(id)arg1 configurationURL:(struct __CFURL *)arg2;	// IMP=0x0000000000197904
- (void)unregisterUserDefaultsInstance:(id)arg1;	// IMP=0x000000000019784b
- (id)init;	// IMP=0x0000000000197682
- (void)assertEquivalence:(_Bool)arg1 ofIdentifiers:(struct __CFArray *)arg2 users:(struct __CFArray *)arg3 hosts:(struct __CFArray *)arg4 containers:(struct __CFArray *)arg5 managedFlags:(struct __CFArray *)arg6 cloudFlags:(struct __CFArray *)arg7;	// IMP=0x00000000000eaacc
- (void)assertEquivalence:(_Bool)arg1 ofIdentifiers:(struct __CFArray *)arg2 containers:(struct __CFArray *)arg3 cloudConfigurationURLs:(struct __CFArray *)arg4;	// IMP=0x000000000015e404

@end

