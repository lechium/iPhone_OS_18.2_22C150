//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _UIKeyboardArbiterClientSpringBoard
{
}

- (void)queue_keyboardIAVChanged:(double)arg1 onComplete:(CDUnknownBlockType)arg2;	// IMP=0x0000000000552d4a
- (void)willLock:(id)arg1;	// IMP=0x0000000000552d38
- (void)userSelectedProcessIdentifier:(int)arg1 withSceneIdentity:(id)arg2 onCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000552afc
- (void)userSelectedApp:(id)arg1 onCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000005528c6
- (void)restoreKeyboardWithId:(id)arg1;	// IMP=0x000000000055270d
- (void)preserveKeyboardWithId:(id)arg1;	// IMP=0x0000000000552554
- (_Bool)isSpotlight:(id)arg1;	// IMP=0x000000000055254c
- (void)forceKeyboardAway;	// IMP=0x0000000000552393
- (_Bool)allowedToShowKeyboard;	// IMP=0x000000000055238b
- (id)init;	// IMP=0x00000000005522f7

@end
