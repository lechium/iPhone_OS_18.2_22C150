//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "LSAppLink.h"

@class _SWCServiceDetails;

__attribute__((visibility("hidden")))
@interface _LSSharedWebCredentialsAppLink : LSAppLink
{
    struct LSBinding _binding;	// 8 = 0x8
    _SWCServiceDetails *_serviceDetails;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0060000000059e16
+ (_Bool)removeAllSettingsReturningError:(id *)arg1;	// IMP=0x0060000000059ca9
+ (_Bool)setSettingsSwitchState:(long long)arg1 forApplicationIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x00600000000598f3
+ (long long)settingsSwitchStateForApplicationIdentifier:(id)arg1;	// IMP=0x0060000000059646
+ (void)afterAppLinksBecomeAvailableForURL:(id)arg1 limit:(unsigned long long)arg2 performBlock:(CDUnknownBlockType)arg3;	// IMP=0x0060000000058b58
+ (_Bool)_areAppLinksEnabledForServiceDetails:(id)arg1 cachedSettings:(id *)arg2;	// IMP=0x0060000000058944
+ (_Bool)_setSWCSetting:(id)arg1 forKey:(id)arg2 withApplicationIdentifier:(id)arg3 error:(id *)arg4;	// IMP=0x0060000000058608
+ (id)_SWCSettingsWithApplicationIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00600000000584e2
+ (id)_SWCSpecifierForSettingsWithApplicationIdentifier:(id)arg1;	// IMP=0x006000000005839a
+ (void)initialize;	// IMP=0x0060000000058353
- (id).cxx_construct;	// IMP=0x000000000005a03d
- (void).cxx_destruct;	// IMP=0x0000000000059ff5
@property(retain, nonatomic) _SWCServiceDetails *serviceDetails; // @synthesize serviceDetails=_serviceDetails;
@property(readonly) struct LSBinding binding; // @synthesize binding=_binding;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000059ea1
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000059e1e
- (_Bool)removeSettingsReturningError:(id *)arg1;	// IMP=0x0000000000059b25
- (_Bool)setBrowserSettings:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000059b09
- (id)browserSettings;	// IMP=0x0000000000059a7d
- (_Bool)setEnabled:(_Bool)arg1 error:(id *)arg2;	// IMP=0x00000000000595cc
- (_Bool)isEnabled;	// IMP=0x000000000005956d
- (_Bool)isAlwaysEnabled;	// IMP=0x0000000000059550
- (_Bool)_setSWCSetting:(id)arg1 forKey:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000058845
- (id)_SWCSettingsReturningError:(id *)arg1;	// IMP=0x0000000000058553
- (id)_SWCSpecifierForSettings;	// IMP=0x0000000000058432

@end

