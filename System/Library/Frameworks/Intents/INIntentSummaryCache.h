//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface INIntentSummaryCache : NSObject
{
    int _systemLanguageChangeNotificationToken;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_resourceAccessQueue;	// 16 = 0x10
    NSMutableDictionary *_allBundlesCache;	// 24 = 0x18
}

+ (id)sharedCache;	// IMP=0x00100000001d425c
- (void).cxx_destruct;	// IMP=0x00000000001d3fcf
@property(readonly, nonatomic) int systemLanguageChangeNotificationToken; // @synthesize systemLanguageChangeNotificationToken=_systemLanguageChangeNotificationToken;
@property(readonly, nonatomic) NSMutableDictionary *allBundlesCache; // @synthesize allBundlesCache=_allBundlesCache;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *resourceAccessQueue; // @synthesize resourceAccessQueue=_resourceAccessQueue;
- (void)applicationsDidInstall:(id)arg1;	// IMP=0x00000000001d3dce
- (void)invalidateCacheForBundleId:(id)arg1;	// IMP=0x00000000001d3cdd
- (void)invalidateCache;	// IMP=0x00000000001d3c23
- (void)stopObservingSystemLanguageChanges;	// IMP=0x00000000001d3bd0
- (void)startObservingSystemLanguageChanges;	// IMP=0x00000000001d3af0
- (void)stopObservingApplicationWorkspaceChanges;	// IMP=0x00000000001d3ab6
- (void)startObservingApplicationWorkspaceChanges;	// IMP=0x00000000001d3a63
- (void)stopAutomaticInvalidation;	// IMP=0x00000000001d3a35
- (void)startAutomaticInvalidation;	// IMP=0x00000000001d3a07
- (void)setSubtitle:(id)arg1 forIntent:(id)arg2 languageCode:(id)arg3;	// IMP=0x00000000001d390c
- (void)setTitle:(id)arg1 forIntent:(id)arg2 languageCode:(id)arg3;	// IMP=0x00000000001d3811
- (_Bool)getSubtitle:(id *)arg1 forIntent:(id)arg2 languageCode:(id)arg3;	// IMP=0x00000000001d36bb
- (_Bool)getTitle:(id *)arg1 forIntent:(id)arg2 languageCode:(id)arg3;	// IMP=0x00000000001d3565
- (id)cachedSummaryForIntent:(id)arg1 languageCode:(id)arg2 creatingIfNeeded:(_Bool)arg3;	// IMP=0x00000000001d32fc
- (void)setBundleCache:(id)arg1 forBundleId:(id)arg2;	// IMP=0x00000000001d3206
- (id)bundleCacheForBundleId:(id)arg1;	// IMP=0x00000000001d30ac
- (void)dealloc;	// IMP=0x00000000001d306e
- (id)init;	// IMP=0x00000000001d2fb1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

