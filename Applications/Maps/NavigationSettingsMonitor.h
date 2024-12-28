//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MNUserOptions, NSUserDefaults;

@interface NavigationSettingsMonitor : NSObject
{
    _Bool _isCarPlay;	// 8 = 0x8
    long long _transportType;	// 16 = 0x10
    MNUserOptions *_userOptions;	// 24 = 0x18
    NSUserDefaults *_userDefaults;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000003c5080
@property(readonly, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00100000003c4f2e
- (void)_localeMetricDidChange:(id)arg1;	// IMP=0x00100000003c4f17
- (void)_updateUserOptionsAndNotifyObservers:(_Bool)arg1;	// IMP=0x00100000003c4e03
- (void)_stopObserving;	// IMP=0x00100000003c4b19
- (void)_startObserving;	// IMP=0x00100000003c47a3
@property(readonly) MNUserOptions *userOptions; // @synthesize userOptions=_userOptions;
@property long long transportType; // @synthesize transportType=_transportType;
@property _Bool isCarPlay; // @synthesize isCarPlay=_isCarPlay;
- (void)dealloc;	// IMP=0x00100000003c45d0
- (id)initWithUserDefaults:(id)arg1;	// IMP=0x00100000003c453f

@end
