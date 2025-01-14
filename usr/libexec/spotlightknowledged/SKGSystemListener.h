//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSLocale, NSMutableDictionary, NSString, NSTimeZone, NSURL;
@protocol OS_dispatch_queue;

@interface SKGSystemListener : NSObject
{
    _Bool _locked_hasDiskCapacity;	// 8 = 0x8
    double _locked_lastDiskFlushDate;	// 16 = 0x10
    _Bool _locked_hasUpdatedLocale;	// 24 = 0x18
    _Bool _locked_isCJK;	// 25 = 0x19
    NSLocale *_locked_currentLocale;	// 32 = 0x20
    NSString *_locked_currentLanguage;	// 40 = 0x28
    NSString *_locked_currentRegion;	// 48 = 0x30
    unsigned long long _locked_currentFirstWeekDay;	// 56 = 0x38
    NSTimeZone *_locked_currentTimezone;	// 64 = 0x40
    NSArray *_locked_currentPreferredLocales;	// 72 = 0x48
    NSArray *_locked_currentPreferredLocaleIdentifiers;	// 80 = 0x50
    NSArray *_locked_currentPreferredLanguages;	// 88 = 0x58
    _Bool _locked_semanticSearchEnabled;	// 96 = 0x60
    _Bool _locked_enableEmbeddingsHigherQoS;	// 97 = 0x61
    _Bool _locked_enableV2LanguageID;	// 98 = 0x62
    NSArray *_locked_supportedSemanticLanguages;	// 104 = 0x68
    NSArray *_locked_doNotUpdateList;	// 112 = 0x70
    NSURL *_locked_geoIndexPath;	// 120 = 0x78
    NSMutableDictionary *_locked_currentResources;	// 128 = 0x80
    NSObject<OS_dispatch_queue> *_queue;	// 136 = 0x88
    _Bool _autoUpdatingLocale;	// 144 = 0x90
    _Bool _currentLocaleIsCJK;	// 145 = 0x91
    _Bool _force;	// 146 = 0x92
}

+ (id)sharedProcessorListener;	// IMP=0x004000000002b8a6
+ (id)sharedClientListener;	// IMP=0x001000000002b7f1
- (void).cxx_destruct;	// IMP=0x002000000002ec3c
@property(nonatomic) _Bool force; // @synthesize force=_force;
@property(readonly, nonatomic) _Bool currentLocaleIsCJK; // @synthesize currentLocaleIsCJK=_currentLocaleIsCJK;
- (void)dealloc;	// IMP=0x001000000002eb65
- (void)updateTimezone;	// IMP=0x001000000002eada
- (void)updateLocale;	// IMP=0x001000000002ea86
- (void)updateResources;	// IMP=0x001000000002dfc5
- (void)updateLocaleWithLocale:(id)arg1 preferredLanguages:(id)arg2 force:(_Bool)arg3;	// IMP=0x001000000002d542
- (id)pathsForContentType:(id)arg1 locale:(id)arg2;	// IMP=0x001000000002d28e
@property(readonly, nonatomic) _Bool enableLanguageCheckForEmbedding;
@property(readonly, nonatomic) _Bool enableV2LanguageID;
@property(readonly, nonatomic) _Bool enableEmbeddingsHigherQoS;
@property(readonly, nonatomic) _Bool semanticSearchEnabled;
@property(readonly, nonatomic) NSArray *supportedSemanticLanguages;
@property(readonly, nonatomic) NSArray *doNotUpdateList;
@property(readonly, nonatomic) NSURL *geoIndexResourcesURL;
@property(readonly, nonatomic) NSArray *currentPreferredLanguages;
@property(readonly, nonatomic) NSArray *currentPreferredLocaleIdentifiers;
@property(readonly, nonatomic) NSArray *currentPreferredLocales;
- (unsigned long long)currentFirstWeekDay;	// IMP=0x001000000002c8ef
- (id)currentRegion;	// IMP=0x001000000002c7f9
@property(readonly, nonatomic) NSString *currentLanguage;
@property(readonly, nonatomic) NSLocale *currentLocale;
@property(readonly, nonatomic) NSTimeZone *currentTimezone;
- (id)rootLocale;	// IMP=0x001000000002c4ee
- (_Bool)hasUpdatedResources;	// IMP=0x001000000002c267
- (_Bool)hasUpdatedLocale;	// IMP=0x001000000002c1b6
- (_Bool)isCJK;	// IMP=0x001000000002c10d
@property(readonly, nonatomic) _Bool hasDiskCapacity;
- (void)setAutoUpdatingTimezone:(_Bool)arg1;	// IMP=0x001000000002bdee
- (void)setAutoUpdatingLocale:(_Bool)arg1;	// IMP=0x001000000002bd61
- (id)initWithPreferredLanguages:(id)arg1 locale:(id)arg2;	// IMP=0x001000000002bb36
- (id)init;	// IMP=0x001000000002b914

@end

