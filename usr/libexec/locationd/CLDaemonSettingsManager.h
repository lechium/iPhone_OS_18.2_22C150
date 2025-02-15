//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocationSupport/CLSettingsManagerInternal.h>

@interface CLDaemonSettingsManager : CLSettingsManagerInternal
{
    int _fDaemonPreferencesChangedNotificationToken;	// 8 = 0x8
    int _fMCProfileListChangedForDaemonSettingsNotificationToken;	// 12 = 0xc
}

- (void)flush;	// IMP=0x0020000000363146
- (id)syncgetSetValue:(id)arg1 forKey:(id)arg2 withoutNotifying:(byref id)arg3;	// IMP=0x0010000000363084
- (void)refresh;	// IMP=0x0010000000362fbf
- (void)endService;	// IMP=0x0010000000362f58
- (void)beginService;	// IMP=0x0010000000362dcd
- (id)init;	// IMP=0x0010000000362d90

@end

