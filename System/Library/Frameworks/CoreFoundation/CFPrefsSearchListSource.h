//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CFPrefsCloudSource, CFPrefsPlistSource;

__attribute__((visibility("hidden")))
@interface CFPrefsSearchListSource
{
    struct __CFDictionary *_keysToSources;	// 64 = 0x40
    struct __CFString *_identifier;	// 72 = 0x48
    struct __CFArray *_sourceList;	// 80 = 0x50
    struct __CFSet *_cloudKeys;	// 88 = 0x58
    struct __CFArray *_cloudPrefixKeys;	// 96 = 0x60
    CFPrefsPlistSource *_standardSetTarget;	// 104 = 0x68
    CFPrefsCloudSource *_cloudSetTarget;	// 112 = 0x70
    _Bool initialized;	// 120 = 0x78
}

- (void)dealloc;	// IMP=0x000000000015d184
- (struct __CFString *)copyOSLogDescription;	// IMP=0x000000000015d106
- (id)description;	// IMP=0x000000000015ceb7
- (struct __CFString *)domainIdentifier;	// IMP=0x000000000015ceab
- (void)deferredNotifyCausedByLoadingOfChangesFromDictionary:(struct __CFDictionary *)arg1 toDictionary:(struct __CFDictionary *)arg2;	// IMP=0x000000000015cc0a
- (void)deferredNotifyCausedByLocalWriteOfChangesToKey:(struct __CFString *)arg1 fromValue:(void *)arg2 toValue:(void *)arg3;	// IMP=0x000000000015cad0
- (struct __CFDictionary *)alreadylocked_copyDictionary;	// IMP=0x000000000015c958
- (long long)generationCount;	// IMP=0x000000000015c8fc
- (void)handleChangeNotificationForDomainIdentifier:(struct __CFString *)arg1 isRemote:(_Bool)arg2;	// IMP=0x000000000015c79b
- (id)createRequestNewContentMessageForDaemon:(int)arg1;	// IMP=0x000000000015bfd0
- (void)handleReply:(id)arg1 toRequestNewDataMessage:(id)arg2 onConnection:(id)arg3 retryCount:(int)arg4 error:(_Bool *)arg5;	// IMP=0x000000000015bda6
- (struct __CFArray *)alreadylocked_copyKeyList;	// IMP=0x000000000015bb22
- (_Bool)synchronize;	// IMP=0x000000000015bb1d
- (void)fullCloudSynchronizeWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000015ba38
- (void)alreadylocked_setPrecopiedValues:(const void **)arg1 forKeys:(const struct __CFString **)arg2 count:(long long)arg3 from:(id)arg4;	// IMP=0x000000000015b26f
- (void *)alreadylocked_copyValueForKey:(struct __CFString *)arg1;	// IMP=0x000000000015a922
- (_Bool)isDirectModeEnabled;	// IMP=0x000000000015a15f
- (void)transitionIntoDirectModeIfNeededWithRetryBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000015a147
- (void)unlock;	// IMP=0x000000000015a146
- (void)lock;	// IMP=0x000000000015a145
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000159f95
- (id)initWithIdentifier:(struct __CFString *)arg1 containingPreferences:(id)arg2;	// IMP=0x0000000000158e07

@end
