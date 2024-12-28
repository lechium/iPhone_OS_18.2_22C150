//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOObserverHashTable, MISSING_TYPE, NSString, UserProfileLink;

@interface UserProfileLinkReportsProvider : NSObject
{
    UserProfileLink *_newLink;	// 8 = 0x8
    MISSING_TYPE *_observers;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x002000000045e2af
- (void).cxx_destruct;	// IMP=0x002000000045e866
- (void)userDataDidUpdate;	// IMP=0x001000000045e84f
- (void)reportHistoryManagerDidUpdate:(id)arg1;	// IMP=0x001000000045e838
@property(readonly, nonatomic) GEOObserverHashTable *observers;
- (void)_updateLinkAndNotifyObservers:(_Bool)arg1;	// IMP=0x001000000045e728
- (id)retrieveSubtitleText;	// IMP=0x001000000045e632
@property(readonly, nonatomic) long long userProfileLinkType;
- (id)createUserProfileLink;	// IMP=0x001000000045e408
- (id)init;	// IMP=0x001000000045e304

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
