//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOObserverHashTable, NSString, UserProfileLink;

@interface UserProfileLinkPreferencesProvider : NSObject
{
    UserProfileLink *_newLink;	// 8 = 0x8
    id _transportTypeChangedListener;	// 16 = 0x10
    GEOObserverHashTable *_observers;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x0020000000de5dfc
- (void).cxx_destruct;	// IMP=0x0020000000de646c
- (void)_updateLinkAndNotifyObservers:(_Bool)arg1;	// IMP=0x0010000000de63b0
@property(readonly, nonatomic) GEOObserverHashTable *observers;
- (id)retrieveTravelPreference;	// IMP=0x0010000000de61f0
@property(readonly, nonatomic) long long userProfileLinkType;
- (id)createUserProfileLink;	// IMP=0x0010000000de5f64
- (void)dealloc;	// IMP=0x0010000000de5f2a
- (id)init;	// IMP=0x0010000000de5e51

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

