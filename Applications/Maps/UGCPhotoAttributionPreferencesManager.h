//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOObserverHashTable, GEORPPhotoAttributionPreferences, MSPFeedbackSubmissionTicket, NSDate, NSString, geo_isolater;
@protocol OS_dispatch_queue;

@interface UGCPhotoAttributionPreferencesManager : NSObject
{
    MSPFeedbackSubmissionTicket *_ticket;	// 8 = 0x8
    GEOObserverHashTable *_observers;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_workQueue;	// 24 = 0x18
    geo_isolater *_observersIsolator;	// 32 = 0x20
    GEORPPhotoAttributionPreferences *_fetchedPreferences;	// 40 = 0x28
    NSDate *_dateOfFetchedPreferences;	// 48 = 0x30
    NSString *_updateError;	// 56 = 0x38
}

+ (id)sharedManager;	// IMP=0x002000000077c424
- (void).cxx_destruct;	// IMP=0x002000000077e027
@property(copy, nonatomic) NSString *updateError; // @synthesize updateError=_updateError;
@property(retain, nonatomic) NSDate *dateOfFetchedPreferences; // @synthesize dateOfFetchedPreferences=_dateOfFetchedPreferences;
@property(retain, nonatomic) GEORPPhotoAttributionPreferences *fetchedPreferences; // @synthesize fetchedPreferences=_fetchedPreferences;
- (void)removeObserver:(id)arg1;	// IMP=0x001000000077df6f
- (void)addObserver:(id)arg1;	// IMP=0x001000000077df06
- (id)observers;	// IMP=0x001000000077dd9a
- (id)_errorMessageForError:(int)arg1;	// IMP=0x001000000077dcf8
- (id)_errorsInResponse:(id)arg1;	// IMP=0x001000000077dad7
- (void)_finishWithPreferences:(id)arg1 serverError:(id)arg2 errorAsString:(id)arg3 callback:(CDUnknownBlockType)arg4;	// IMP=0x001000000077d9ab
- (void)updatePhotoAttributionPreferencesAttributePhotos:(_Bool)arg1 attributionName:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000077cf75
- (void)_fetchPhotoAttributionPreferencesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000077c8a6
- (void)_storeFetchedPreferences:(id)arg1;	// IMP=0x001000000077c7cb
- (void)photoAttributionPreferencesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000077c512
- (id)init;	// IMP=0x001000000077c479

@end

