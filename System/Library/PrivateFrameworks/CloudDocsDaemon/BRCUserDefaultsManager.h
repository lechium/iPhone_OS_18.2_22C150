//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSOperationQueue, NSString, NSURL, NSURLSession;
@protocol NSObject, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BRCUserDefaultsManager : NSObject
{
    NSURL *_serverConfigurationURL;	// 8 = 0x8
    NSDictionary *_serverConfigurationDict;	// 16 = 0x10
    NSMutableDictionary *_userDefaultsCache;	// 24 = 0x18
    CDUnknownBlockType _configurationPlistDidUpdateBlock;	// 32 = 0x20
    NSOperationQueue *_downloadQueue;	// 40 = 0x28
    NSURLSession *_urlSession;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_queue;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 64 = 0x40
    id <NSObject> _defaultsDidChangeNotificationObserver;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000031269d
- (void)dealloc;	// IMP=0x0000000000312627
- (void)reset;	// IMP=0x00000000003125c6
- (void)_reset;	// IMP=0x000000000031252d
- (void)_loadServerConfigurationDictionary;	// IMP=0x00000000003120c2
- (void)_parsePlistWithURL:(id)arg1;	// IMP=0x0000000000311ca4
- (void)loadCachedServerConfiguration;	// IMP=0x0000000000311b1a
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x0000000000311817
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;	// IMP=0x000000000031170f
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;	// IMP=0x00000000003113b2
- (void)setServerConfigurationURL:(id)arg1 whenLoaded:(CDUnknownBlockType)arg2;	// IMP=0x0000000000311244
- (void)_setServerConfigurationURL:(id)arg1 whenLoaded:(CDUnknownBlockType)arg2;	// IMP=0x0000000000310c3b
- (id)defaultsForIdentifier:(id)arg1;	// IMP=0x00000000003109a5
- (id)initWithPersonaID:(id)arg1;	// IMP=0x00000000003101ad
- (void)_prepopulateGlobalUserDefaults;	// IMP=0x0000000000310088

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
