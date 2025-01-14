//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSSet, NSString, PRSQueryTask, PRSRankingConfiguration, SDSearchQuery, SPParsecDatastore;
@protocol OS_dispatch_queue;

@interface SPParsecQueryTask : NSObject
{
    NSArray *_rankingPatterns;	// 8 = 0x8
    NSSet *_setOfVisibleApps;	// 16 = 0x10
    NSSet *_setOfHiddenApps;	// 24 = 0x18
    double _queryStartTime;	// 32 = 0x20
    double _queryEndTime;	// 40 = 0x28
    double _timeOut;	// 48 = 0x30
    struct _opaque_pthread_mutex_t {
        long long __sig;
        char __opaque[56];
    } _mutex;	// 56 = 0x38
    _Bool _suggestionsAreBlended;	// 120 = 0x78
    _Bool _canceled;	// 121 = 0x79
    _Bool _done;	// 122 = 0x7a
    _Bool _parsecLoaded;	// 123 = 0x7b
    _Bool _webSearchLoaded;	// 124 = 0x7c
    SPParsecDatastore *_store;	// 128 = 0x80
    NSDictionary *_category_stats;	// 136 = 0x88
    NSDictionary *_server_features;	// 144 = 0x90
    NSString *_fbq;	// 152 = 0x98
    NSString *_web_fbq;	// 160 = 0xa0
    NSArray *_querySuggestionResults;	// 168 = 0xa8
    PRSRankingConfiguration *_rankingInfo;	// 176 = 0xb0
    NSObject<OS_dispatch_queue> *_queue;	// 184 = 0xb8
    SDSearchQuery *_resultPipe;	// 192 = 0xc0
    PRSQueryTask *_parsecQuery;	// 200 = 0xc8
    NSArray *_parsecResults;	// 208 = 0xd0
    NSArray *_parsecResultsCategoryOrder;	// 216 = 0xd8
    unsigned long long _type;	// 224 = 0xe0
    unsigned long long _startTime;	// 232 = 0xe8
}

- (void).cxx_destruct;	// IMP=0x002000000008422b
@property unsigned long long startTime; // @synthesize startTime=_startTime;
@property _Bool webSearchLoaded; // @synthesize webSearchLoaded=_webSearchLoaded;
@property _Bool parsecLoaded; // @synthesize parsecLoaded=_parsecLoaded;
@property unsigned long long type; // @synthesize type=_type;
@property(retain) NSArray *parsecResultsCategoryOrder; // @synthesize parsecResultsCategoryOrder=_parsecResultsCategoryOrder;
@property(retain) NSArray *parsecResults; // @synthesize parsecResults=_parsecResults;
@property(retain) PRSQueryTask *parsecQuery; // @synthesize parsecQuery=_parsecQuery;
@property _Bool done; // @synthesize done=_done;
@property _Bool canceled; // @synthesize canceled=_canceled;
@property(nonatomic) __weak SDSearchQuery *resultPipe; // @synthesize resultPipe=_resultPipe;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain) PRSRankingConfiguration *rankingInfo; // @synthesize rankingInfo=_rankingInfo;
@property _Bool suggestionsAreBlended; // @synthesize suggestionsAreBlended=_suggestionsAreBlended;
@property(retain, nonatomic) NSArray *querySuggestionResults; // @synthesize querySuggestionResults=_querySuggestionResults;
@property(readonly) NSString *web_fbq; // @synthesize web_fbq=_web_fbq;
@property(readonly) NSString *fbq; // @synthesize fbq=_fbq;
@property(retain, nonatomic) NSDictionary *server_features; // @synthesize server_features=_server_features;
@property(retain, nonatomic) NSDictionary *category_stats; // @synthesize category_stats=_category_stats;
@property(readonly) SPParsecDatastore *store; // @synthesize store=_store;
- (id)rerankMapsResultsWithLocalSignals:(id)arg1 forQueryId:(long long)arg2;	// IMP=0x0010000000083ea8
- (void)query:(id)arg1 didFinishWithResults:(id)arg2 withSuggestions:(id)arg3 withCorrections:(id)arg4 withAlternativeResults:(id)arg5 suggestionsAreBlended:(_Bool)arg6;	// IMP=0x0010000000082508
- (id)findLocalCopies:(id)arg1 alternativeResults:(id)arg2 withQueryString:(id)arg3;	// IMP=0x001000000007ef4b
- (void)archiveWithQuery:(id)arg1 didFinishWithResults:(id)arg2 withSuggestions:(id)arg3 withCorrections:(id)arg4 suggestionsAreBlended:(_Bool)arg5;	// IMP=0x001000000007ece8
- (void)geoUserSessionEntityString:(id)arg1;	// IMP=0x001000000007ec7f
- (void)_setScore:forResult: /* Error: Ran out of types for this method. */;	// IMP=0x001000000007ec6a
- (void)queryDidFinishLoading:(id)arg1;	// IMP=0x001000000007e98b
- (void)cancel;	// IMP=0x001000000007e5da
- (void)finished;	// IMP=0x001000000007d6bd
- (id)initWithStore:(id)arg1 resultPipe:(id)arg2 queue:(id)arg3 visibleApps:(id)arg4 hiddenApps:(id)arg5;	// IMP=0x001000000007d53a
- (void)dealloc;	// IMP=0x001000000007d500
- (void)resumeWithArchive:(id)arg1;	// IMP=0x001000000007d400
- (id)unarchiveWithQuery:(id)arg1;	// IMP=0x001000000007d2ea
- (void)resumeWithTimeout:(double)arg1;	// IMP=0x001000000007d298

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

