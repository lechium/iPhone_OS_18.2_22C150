//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface ASUDefaultsManager : NSObject
{
}

+ (_Bool)_isRunningInAppleVirtualMachine;	// IMP=0x008000000000f44a
+ (void)_setNullableValue:(void *)arg1 forKey:(struct __CFString *)arg2;	// IMP=0x008000000000f421
+ (id)_copyNumberForKey:(struct __CFString *)arg1 applicationId:(struct __CFString *)arg2;	// IMP=0x008000000000f3d3
+ (void)_setDouble:(double)arg1 forKey:(struct __CFString *)arg2 applicationId:(struct __CFString *)arg3;	// IMP=0x008000000000f3a0
+ (double)_doubleForKey:(struct __CFString *)arg1 applicationId:(struct __CFString *)arg2 ifMissing:(double)arg3;	// IMP=0x008000000000f356
+ (void)_setBool:(_Bool)arg1 forKey:(struct __CFString *)arg2 applicationId:(struct __CFString *)arg3;	// IMP=0x008000000000f323
+ (_Bool)_boolForKey:(struct __CFString *)arg1 applicationId:(struct __CFString *)arg2 ifMissing:(_Bool)arg3;	// IMP=0x008000000000f2e6
+ (id)copyDefaultsKeyForEncryptionKeyWithIdentifier:(id)arg1;	// IMP=0x008000000000f116

@end
