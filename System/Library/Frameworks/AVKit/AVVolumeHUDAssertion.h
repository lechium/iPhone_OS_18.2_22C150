//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIWindowScene;
@protocol AVVolumeHUDAssertionDelegate;

__attribute__((visibility("hidden")))
@interface AVVolumeHUDAssertion : NSObject
{
    _Bool _prefersSystemVolumeHUDHidden;	// 8 = 0x8
    id <AVVolumeHUDAssertionDelegate> _delegate;	// 16 = 0x10
    NSString *_clientIdentifier;	// 24 = 0x18
    NSString *_sceneIdentifier;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000136fe0
@property(nonatomic) _Bool prefersSystemVolumeHUDHidden; // @synthesize prefersSystemVolumeHUDHidden=_prefersSystemVolumeHUDHidden;
@property(readonly, nonatomic) NSString *sceneIdentifier; // @synthesize sceneIdentifier=_sceneIdentifier;
@property(readonly, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(nonatomic) __weak id <AVVolumeHUDAssertionDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_systemController;	// IMP=0x0000000000136f43
@property(readonly, nonatomic) NSString *volumeAudioCategory;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,N

@property(readonly, nonatomic, getter=isOnScreenForVolumeDisplay) _Bool onScreenForVolumeDisplay;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N,GisOnScreenForVolumeDisplay

@property(readonly, nonatomic) UIWindowScene *windowSceneForVolumeDisplay;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UIWindowScene",?,R,N

@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000136c2a
- (id)initWithSceneIdentifier:(id)arg1 clientIdentifier:(id)arg2;	// IMP=0x0000000000136b8c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly, nonatomic, getter=isOnScreen) _Bool onScreen;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N,GisOnScreen

@property(readonly) Class superclass;

@end

