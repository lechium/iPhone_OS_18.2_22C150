//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface SCATATVRemoteInputSource
{
}

- (_Bool)handledEvent:(id)arg1;	// IMP=0x0040000000065d95
- (id)switchDisplayNameForButtonNumber:(long long)arg1;	// IMP=0x0000000000065d0e
- (id)persistentSwitchIdentifierForButtonNumber:(long long)arg1;	// IMP=0x0010000000065c87
- (id)actionIdentifierForButtonNumber:(long long)arg1 withType:(id)arg2;	// IMP=0x0010000000065b56
- (long long)switchKeyForSwitch:(id)arg1;	// IMP=0x0010000000065b41
- (id)switchSource;	// IMP=0x0010000000065b2d
- (_Bool)isATVRemoteInputSource;	// IMP=0x0010000000065b25

@end

