//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface SCATKeyboardInputSource
{
}

- (id)_switchDisplayNameForKeyCode:(unsigned short)arg1;	// IMP=0x00400000000046f4
- (id)_persistentSwitchIdentifierForKeyCode:(unsigned short)arg1;	// IMP=0x001000000000466f
- (id)_actionIdentifierForKeyCode:(unsigned short)arg1 withType:(id)arg2;	// IMP=0x001000000000453d
- (_Bool)handledEvent:(id)arg1;	// IMP=0x00100000000043a4
- (long long)switchKeyForSwitch:(id)arg1;	// IMP=0x001000000000438b
- (id)switchSource;	// IMP=0x0010000000004377
- (_Bool)isKeyboardInputSource;	// IMP=0x001000000000436f

@end
