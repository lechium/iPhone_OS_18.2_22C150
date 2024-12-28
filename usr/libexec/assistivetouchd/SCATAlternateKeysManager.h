//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;
@protocol SCATAlternateKeysManagerDelegate, SCATElement;

@interface SCATAlternateKeysManager
{
    id <SCATAlternateKeysManagerDelegate> _delegate;	// 8 = 0x8
    id <SCATElement> _currentKeyForAlternates;	// 16 = 0x10
    NSArray *_alternateKeys;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000072887
@property(retain, nonatomic) NSArray *alternateKeys; // @synthesize alternateKeys=_alternateKeys;
@property(retain, nonatomic) id <SCATElement> currentKeyForAlternates; // @synthesize currentKeyForAlternates=_currentKeyForAlternates;
@property(nonatomic) __weak id <SCATAlternateKeysManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)accessibilityManager:(id)arg1 didReceiveEvent:(long long)arg2 data:(id)arg3;	// IMP=0x0010000000072789
- (_Bool)handleInputAction:(id)arg1 withElement:(id)arg2;	// IMP=0x00100000000726e8
- (void)orientationDidChange:(id)arg1;	// IMP=0x00100000000726d6
- (void)didFetchElements:(id)arg1 foundNewElements:(_Bool)arg2 currentFocusContext:(id)arg3 didChangeActiveElementManager:(_Bool)arg4;	// IMP=0x0010000000072631
- (id)allElements;	// IMP=0x001000000007261f
- (void)_releaseLastShownKey;	// IMP=0x001000000007256d
- (void)_selectAlternateKey:(id)arg1;	// IMP=0x0010000000072484
- (void)_cleanUpAlternateKeyOperations;	// IMP=0x0010000000072452
- (void)showAlternateKeysForKey:(id)arg1;	// IMP=0x001000000007237d
- (struct CGPoint)_fingerControllerPointForKeyboardKey:(id)arg1;	// IMP=0x0010000000072251
- (id)_fingerController;	// IMP=0x00100000000721fa
- (void)_updateAlternateKeys;	// IMP=0x001000000007218c
- (_Bool)canBeActiveElementManager;	// IMP=0x0010000000072159
- (void)dealloc;	// IMP=0x00100000000720e4
- (id)init;	// IMP=0x0010000000072064

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
