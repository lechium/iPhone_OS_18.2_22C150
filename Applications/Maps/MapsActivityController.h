//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, NSUserActivity;
@protocol MapsActivityControllerDelegate, OS_dispatch_queue;

@interface MapsActivityController : NSObject
{
    NSUserActivity *_mapsUserActivity;	// 8 = 0x8
    _Bool _needToWaitForHandoff;	// 16 = 0x10
    _Bool _needToUpdateHandoff;	// 17 = 0x11
    NSObject<OS_dispatch_queue> *_accessQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_loggingQueue;	// 32 = 0x20
    id <MapsActivityControllerDelegate> _delegate;	// 40 = 0x28
    NSDictionary *__cachedMapsActivityDataDictionary;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000ba6153
@property(retain) NSDictionary *_cachedMapsActivityDataDictionary; // @synthesize _cachedMapsActivityDataDictionary=__cachedMapsActivityDataDictionary;
@property(nonatomic) __weak id <MapsActivityControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)writeCurrentState:(id)arg1;	// IMP=0x0010000000ba5c0a
- (id)_cleanArray:(id)arg1;	// IMP=0x0010000000ba598c
- (id)_cleanDictionary:(id)arg1;	// IMP=0x0010000000ba569e
- (void)archiveMapsActivity;	// IMP=0x0010000000ba502d
- (void)setNeedsUserActivityUpdate;	// IMP=0x0010000000ba4ff9
- (void)userActivityWillSave:(id)arg1;	// IMP=0x0010000000ba4c33
- (void)_updateUserActivityWithMapsActivityAtFullFidelity:(id)arg1 atCompactFidelity:(id)arg2 title:(id)arg3 expirationDate:(id)arg4;	// IMP=0x0010000000ba4723
- (void)_updateUserActivity;	// IMP=0x0010000000ba425e
- (id)_mapsUserActivity;	// IMP=0x0010000000ba41c5
- (id)mapsUserActivityForStateRestoration;	// IMP=0x0010000000ba406d
- (id)init;	// IMP=0x0010000000ba3f68

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

