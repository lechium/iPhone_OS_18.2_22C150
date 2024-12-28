//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MRMediaSuggestionPreferences;
@protocol MRDLockScreenContentControllerDelegate, OS_dispatch_queue;

@interface MRDLockScreenContentController : NSObject
{
    _Bool _shouldConsiderSuggestions;	// 8 = 0x8
    _Bool _isQuerying;	// 9 = 0x9
    struct os_unfair_lock_s _lock;	// 12 = 0xc
    id <MRDLockScreenContentControllerDelegate> _delegate;	// 16 = 0x10
    MRMediaSuggestionPreferences *_suggestionPreferences;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queryQueue;	// 32 = 0x20
    long long _suggestionCount;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000181ca7
@property(nonatomic) long long suggestionCount; // @synthesize suggestionCount=_suggestionCount;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queryQueue; // @synthesize queryQueue=_queryQueue;
@property(nonatomic) _Bool isQuerying; // @synthesize isQuerying=_isQuerying;
@property(nonatomic) _Bool shouldConsiderSuggestions; // @synthesize shouldConsiderSuggestions=_shouldConsiderSuggestions;
@property(readonly, nonatomic) struct os_unfair_lock_s lock; // @synthesize lock=_lock;
@property(retain, nonatomic) MRMediaSuggestionPreferences *suggestionPreferences; // @synthesize suggestionPreferences=_suggestionPreferences;
@property(nonatomic) __weak id <MRDLockScreenContentControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool lockScreenPlatterHasContent;
- (void)_handlePlaybackQueueChangedNotification:(id)arg1;	// IMP=0x0010000000181a0f
- (void)_notifyDelegate;	// IMP=0x0010000000181972
- (void)_updateSuggestionCountIfNeeded;	// IMP=0x00100000001814f1
- (id)init;	// IMP=0x0010000000181335

@end
