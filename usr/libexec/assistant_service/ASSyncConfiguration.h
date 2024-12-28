//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface ASSyncConfiguration : NSObject
{
    NSString *_syncKey;	// 8 = 0x8
    NSData *_configPlistData;	// 16 = 0x10
    _Bool _attemptedPlistOpen;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000000300b
- (void)_tryGettingPlistData;	// IMP=0x0010000000002ec0
- (id)configurationInfoForKey:(id)arg1;	// IMP=0x0010000000002e49
- (id)init;	// IMP=0x0010000000002e3b
- (id)initWithConfigurationPlistForSyncKey:(id)arg1;	// IMP=0x0010000000002dc8

@end
