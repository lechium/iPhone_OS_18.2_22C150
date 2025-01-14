//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSUserDefaults.h>

@interface NSUserDefaults (SafariCoreExtras)
+ (id)safari_notificationNameForUserDefaultsKey:(id)arg1;	// IMP=0x00300000000602de
+ (id)safari_canonicalApplicationDefaults;	// IMP=0x00300000000602c5
+ (id)safari_cloudBookmarksDefaults;	// IMP=0x0030000000060187
+ (id)_safari_browserDefaults;	// IMP=0x003000000005ffd8
+ (id)safari_standardUserDefaultsWithOptimizedKeyValueObserving;	// IMP=0x003000000005ff6f
+ (id)as_developerDefaults;	// IMP=0x003000000005ff03
+ (id)pm_defaults;	// IMP=0x003000000005fdb4
+ (id)safari_browserDefaults;	// IMP=0x003000000005fd1f
+ (id)safari_browserSharedDefaults;	// IMP=0x003000000005fcb3
- (void)safari_removeObjectsForKeysWithPrefix:(id)arg1;	// IMP=0x0010000000060fe7
- (void)safari_removeStringValue:(id)arg1 fromArrayWithKey:(id)arg2;	// IMP=0x0010000000060e9a
- (void)safari_addStringValue:(id)arg1 toArrayWithKey:(id)arg2;	// IMP=0x0010000000060d76
- (_Bool)safari_enableAdvancedPrivacyProtections:(_Bool)arg1;	// IMP=0x0010000000060d18
- (id)safari_observeValuesForKeys:(id)arg1 onQueue:(id)arg2 notifyForInitialValue:(_Bool)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000060c74
- (id)safari_observeValueForKey:(id)arg1 onQueue:(id)arg2 notifyForInitialValue:(_Bool)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000060b77
- (id)safari_stringForKey:(id)arg1 defaultValue:(id)arg2;	// IMP=0x0010000000060aee
- (_Bool)safari_boolForKey:(id)arg1 defaultValue:(_Bool)arg2;	// IMP=0x0010000000060a4b
- (_Bool)safari_toggleBoolAndNotifyForKey:(id)arg1;	// IMP=0x0010000000060900
- (void)safari_modifyDictionaryForKey:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00100000000607f7
- (void)safari_setObject:(id)arg1 andNotifyForKey:(id)arg2;	// IMP=0x00100000000606c0
- (void)safari_setBool:(_Bool)arg1 forKey:(id)arg2 andNotifyWithUserInfo:(id)arg3;	// IMP=0x001000000006058a
- (void)safari_setBool:(_Bool)arg1 andNotifyForKey:(id)arg2;	// IMP=0x0010000000060442
- (void)safari_setInteger:(long long)arg1 andNotifyForKey:(id)arg2;	// IMP=0x00100000000602fa
- (_Bool)safari_toggleBoolForKey:(id)arg1;	// IMP=0x001000000005fc51
- (double)safari_doubleForKey:(id)arg1 defaultValue:(double)arg2;	// IMP=0x001000000005fbff
- (void)safari_setDate:(id)arg1 forKey:(id)arg2;	// IMP=0x001000000005fbed
- (id)safari_dateForKey:(id)arg1;	// IMP=0x001000000005fb8d
- (void)safari_incrementNumberForKey:(id)arg1;	// IMP=0x001000000005fb34
- (id)safari_numberForKey:(id)arg1;	// IMP=0x001000000005fad4
@end

